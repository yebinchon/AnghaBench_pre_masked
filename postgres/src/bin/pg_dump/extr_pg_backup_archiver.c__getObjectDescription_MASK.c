
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* desc; char* namespace; char* tag; scalar_t__ dropStmt; } ;
typedef TYPE_1__ TocEntry ;
typedef int PQExpBuffer ;
typedef int ArchiveHandle ;


 int FUNC_0 (int ,char*,char const*) ;
 int FUNC_1 (int ,char*) ;
 char* FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,char const*) ;
 char* FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (char const*,char*) ;
 int FUNC_7 (char*) ;

__attribute__((used)) static void
FUNC_8(PQExpBuffer VAR_0, TocEntry *VAR_1, ArchiveHandle *VAR_2)
{
 const char *VAR_3 = VAR_1->desc;


 if (FUNC_6(VAR_3, "VIEW") == 0 || FUNC_6(VAR_3, "SEQUENCE") == 0 ||
  FUNC_6(VAR_3, "MATERIALIZED VIEW") == 0)
  VAR_3 = "TABLE";


 if (FUNC_6(VAR_3, "COLLATION") == 0 ||
  FUNC_6(VAR_3, "CONVERSION") == 0 ||
  FUNC_6(VAR_3, "DOMAIN") == 0 ||
  FUNC_6(VAR_3, "TABLE") == 0 ||
  FUNC_6(VAR_3, "TYPE") == 0 ||
  FUNC_6(VAR_3, "FOREIGN TABLE") == 0 ||
  FUNC_6(VAR_3, "TEXT SEARCH DICTIONARY") == 0 ||
  FUNC_6(VAR_3, "TEXT SEARCH CONFIGURATION") == 0 ||
  FUNC_6(VAR_3, "STATISTICS") == 0 ||

  FUNC_6(VAR_3, "DATABASE") == 0 ||
  FUNC_6(VAR_3, "PROCEDURAL LANGUAGE") == 0 ||
  FUNC_6(VAR_3, "SCHEMA") == 0 ||
  FUNC_6(VAR_3, "EVENT TRIGGER") == 0 ||
  FUNC_6(VAR_3, "FOREIGN DATA WRAPPER") == 0 ||
  FUNC_6(VAR_3, "SERVER") == 0 ||
  FUNC_6(VAR_3, "PUBLICATION") == 0 ||
  FUNC_6(VAR_3, "SUBSCRIPTION") == 0 ||
  FUNC_6(VAR_3, "USER MAPPING") == 0)
 {
  FUNC_0(VAR_0, "%s ", VAR_3);
  if (VAR_1->namespace && *VAR_1->namespace)
   FUNC_0(VAR_0, "%s.", FUNC_2(VAR_1->namespace));
  FUNC_1(VAR_0, FUNC_2(VAR_1->tag));
  return;
 }


 if (FUNC_6(VAR_3, "BLOB") == 0)
 {
  FUNC_0(VAR_0, "LARGE OBJECT %s", VAR_1->tag);
  return;
 }





 if (FUNC_6(VAR_3, "AGGREGATE") == 0 ||
  FUNC_6(VAR_3, "FUNCTION") == 0 ||
  FUNC_6(VAR_3, "OPERATOR") == 0 ||
  FUNC_6(VAR_3, "OPERATOR CLASS") == 0 ||
  FUNC_6(VAR_3, "OPERATOR FAMILY") == 0 ||
  FUNC_6(VAR_3, "PROCEDURE") == 0)
 {

  char *VAR_4 = FUNC_5(VAR_1->dropStmt + 5);
  char *VAR_5;


  VAR_5 = VAR_4 + FUNC_7(VAR_4) - 1;


  while (VAR_5 >= VAR_4 && (*VAR_5 == '\n' || *VAR_5 == ';'))
   VAR_5--;
  *(VAR_5 + 1) = '\0';

  FUNC_1(VAR_0, VAR_4);

  FUNC_3(VAR_4);
  return;
 }

 FUNC_4("don't know how to set owner for object type \"%s\"",
       VAR_3);
}
