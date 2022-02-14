
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_30__ TYPE_6__ ;
typedef struct TYPE_29__ TYPE_5__ ;
typedef struct TYPE_28__ TYPE_4__ ;
typedef struct TYPE_27__ TYPE_3__ ;
typedef struct TYPE_26__ TYPE_2__ ;
typedef struct TYPE_25__ TYPE_1__ ;


struct TYPE_26__ {int oid; int tableoid; } ;
struct TYPE_27__ {char* namespace; char* tablespace; scalar_t__ nDeps; char** dependencies; char* tag; char* owner; char* defn; char* dropStmt; int desc; TYPE_2__ catalogId; int dumpId; int tableam; } ;
typedef TYPE_3__ TocEntry ;
struct TYPE_25__ {scalar_t__ verbose; TYPE_4__* ropt; } ;
struct TYPE_30__ {char* currUser; int (* PrintExtraTocPtr ) (TYPE_6__*,TYPE_3__*) ;TYPE_1__ public; int noTocComments; } ;
struct TYPE_29__ {char* data; } ;
struct TYPE_28__ {int use_setsessauth; scalar_t__ noOwner; int noTablespace; } ;
typedef TYPE_4__ RestoreOptions ;
typedef TYPE_5__* PQExpBuffer ;
typedef TYPE_6__ ArchiveHandle ;


 int _becomeOwner (TYPE_6__*,TYPE_3__*) ;
 int _getObjectDescription (TYPE_5__*,TYPE_3__*,TYPE_6__*) ;
 int _selectOutputSchema (TYPE_6__*,char*) ;
 int _selectTableAccessMethod (TYPE_6__*,int ) ;
 int _selectTablespace (TYPE_6__*,char*) ;
 scalar_t__ _tocEntryIsACL (TYPE_3__*) ;
 int ahprintf (TYPE_6__*,char*,...) ;
 int appendPQExpBuffer (TYPE_5__*,char*,char*) ;
 int appendPQExpBufferStr (TYPE_5__*,char*) ;
 TYPE_5__* createPQExpBuffer () ;
 int destroyPQExpBuffer (TYPE_5__*) ;
 char* fmtId (char*) ;
 int free (char*) ;
 int pg_log_warning (char*,int ) ;
 char* sanitize_line (char*,int) ;
 scalar_t__ strcmp (int ,char*) ;
 scalar_t__ strlen (char*) ;
 int stub1 (TYPE_6__*,TYPE_3__*) ;

__attribute__((used)) static void
_printTocEntry(ArchiveHandle *AH, TocEntry *te, bool isData)
{
 RestoreOptions *ropt = AH->public.ropt;


 _becomeOwner(AH, te);
 _selectOutputSchema(AH, te->namespace);
 _selectTablespace(AH, te->tablespace);
 _selectTableAccessMethod(AH, te->tableam);


 if (!AH->noTocComments)
 {
  const char *pfx;
  char *sanitized_name;
  char *sanitized_schema;
  char *sanitized_owner;

  if (isData)
   pfx = "Data for ";
  else
   pfx = "";

  ahprintf(AH, "--\n");
  if (AH->public.verbose)
  {
   ahprintf(AH, "-- TOC entry %d (class %u OID %u)\n",
      te->dumpId, te->catalogId.tableoid, te->catalogId.oid);
   if (te->nDeps > 0)
   {
    int i;

    ahprintf(AH, "-- Dependencies:");
    for (i = 0; i < te->nDeps; i++)
     ahprintf(AH, " %d", te->dependencies[i]);
    ahprintf(AH, "\n");
   }
  }

  sanitized_name = sanitize_line(te->tag, 0);
  sanitized_schema = sanitize_line(te->namespace, 1);
  sanitized_owner = sanitize_line(ropt->noOwner ? ((void*)0) : te->owner, 1);

  ahprintf(AH, "-- %sName: %s; Type: %s; Schema: %s; Owner: %s",
     pfx, sanitized_name, te->desc, sanitized_schema,
     sanitized_owner);

  free(sanitized_name);
  free(sanitized_schema);
  free(sanitized_owner);

  if (te->tablespace && strlen(te->tablespace) > 0 && !ropt->noTablespace)
  {
   char *sanitized_tablespace;

   sanitized_tablespace = sanitize_line(te->tablespace, 0);
   ahprintf(AH, "; Tablespace: %s", sanitized_tablespace);
   free(sanitized_tablespace);
  }
  ahprintf(AH, "\n");

  if (AH->PrintExtraTocPtr != ((void*)0))
   AH->PrintExtraTocPtr(AH, te);
  ahprintf(AH, "--\n\n");
 }
 if (ropt->noOwner && strcmp(te->desc, "SCHEMA") == 0)
 {
  ahprintf(AH, "CREATE SCHEMA %s;\n\n\n", fmtId(te->tag));
 }
 else
 {
  if (te->defn && strlen(te->defn) > 0)
   ahprintf(AH, "%s\n\n", te->defn);
 }







 if (!ropt->noOwner && !ropt->use_setsessauth &&
  te->owner && strlen(te->owner) > 0 &&
  te->dropStmt && strlen(te->dropStmt) > 0)
 {
  if (strcmp(te->desc, "AGGREGATE") == 0 ||
   strcmp(te->desc, "BLOB") == 0 ||
   strcmp(te->desc, "COLLATION") == 0 ||
   strcmp(te->desc, "CONVERSION") == 0 ||
   strcmp(te->desc, "DATABASE") == 0 ||
   strcmp(te->desc, "DOMAIN") == 0 ||
   strcmp(te->desc, "FUNCTION") == 0 ||
   strcmp(te->desc, "OPERATOR") == 0 ||
   strcmp(te->desc, "OPERATOR CLASS") == 0 ||
   strcmp(te->desc, "OPERATOR FAMILY") == 0 ||
   strcmp(te->desc, "PROCEDURE") == 0 ||
   strcmp(te->desc, "PROCEDURAL LANGUAGE") == 0 ||
   strcmp(te->desc, "SCHEMA") == 0 ||
   strcmp(te->desc, "EVENT TRIGGER") == 0 ||
   strcmp(te->desc, "TABLE") == 0 ||
   strcmp(te->desc, "TYPE") == 0 ||
   strcmp(te->desc, "VIEW") == 0 ||
   strcmp(te->desc, "MATERIALIZED VIEW") == 0 ||
   strcmp(te->desc, "SEQUENCE") == 0 ||
   strcmp(te->desc, "FOREIGN TABLE") == 0 ||
   strcmp(te->desc, "TEXT SEARCH DICTIONARY") == 0 ||
   strcmp(te->desc, "TEXT SEARCH CONFIGURATION") == 0 ||
   strcmp(te->desc, "FOREIGN DATA WRAPPER") == 0 ||
   strcmp(te->desc, "SERVER") == 0 ||
   strcmp(te->desc, "STATISTICS") == 0 ||
   strcmp(te->desc, "PUBLICATION") == 0 ||
   strcmp(te->desc, "SUBSCRIPTION") == 0)
  {
   PQExpBuffer temp = createPQExpBuffer();

   appendPQExpBufferStr(temp, "ALTER ");
   _getObjectDescription(temp, te, AH);
   appendPQExpBuffer(temp, " OWNER TO %s;", fmtId(te->owner));
   ahprintf(AH, "%s\n\n", temp->data);
   destroyPQExpBuffer(temp);
  }
  else if (strcmp(te->desc, "CAST") == 0 ||
     strcmp(te->desc, "CHECK CONSTRAINT") == 0 ||
     strcmp(te->desc, "CONSTRAINT") == 0 ||
     strcmp(te->desc, "DATABASE PROPERTIES") == 0 ||
     strcmp(te->desc, "DEFAULT") == 0 ||
     strcmp(te->desc, "FK CONSTRAINT") == 0 ||
     strcmp(te->desc, "INDEX") == 0 ||
     strcmp(te->desc, "RULE") == 0 ||
     strcmp(te->desc, "TRIGGER") == 0 ||
     strcmp(te->desc, "ROW SECURITY") == 0 ||
     strcmp(te->desc, "POLICY") == 0 ||
     strcmp(te->desc, "USER MAPPING") == 0)
  {

  }
  else
  {
   pg_log_warning("don't know how to set owner for object type \"%s\"",
         te->desc);
  }
 }





 if (_tocEntryIsACL(te))
 {
  if (AH->currUser)
   free(AH->currUser);
  AH->currUser = ((void*)0);
 }
}
