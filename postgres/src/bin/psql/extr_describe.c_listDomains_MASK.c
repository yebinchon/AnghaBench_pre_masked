
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {int translate_header; int title; int * nullPrint; } ;
typedef TYPE_1__ printQueryOpt ;
struct TYPE_14__ {int sversion; int logfile; int queryFout; int db; TYPE_1__ popt; } ;
struct TYPE_13__ {int data; } ;
typedef TYPE_2__ PQExpBufferData ;
typedef int PGresult ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (TYPE_2__*,char*,int ,...) ;
 int FUNC_4 (TYPE_2__*,char*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*,char*) ;
 int FUNC_8 (int *,TYPE_1__*,int ,int,int ) ;
 int FUNC_9 (TYPE_2__*,char*,int ,int ,int ) ;
 int FUNC_10 (int ,TYPE_2__*,char const*,int,int,char*,char*,int *,char*) ;
 TYPE_4__ VAR_0 ;
 int FUNC_11 (TYPE_2__*) ;

bool
FUNC_12(const char *VAR_1, bool VAR_2, bool VAR_3)
{
 PQExpBufferData VAR_4;
 PGresult *VAR_5;
 printQueryOpt VAR_6 = VAR_0.popt;

 FUNC_6(&VAR_4);

 FUNC_9(&VAR_4,
       "SELECT n.nspname as \"%s\",\n"
       "       t.typname as \"%s\",\n"
       "       pg_catalog.format_type(t.typbasetype, t.typtypmod) as \"%s\",\n",
       FUNC_5("Schema"),
       FUNC_5("Name"),
       FUNC_5("Type"));

 if (VAR_0.sversion >= 90100)
  FUNC_3(&VAR_4,
        "       (SELECT c.collname FROM pg_catalog.pg_collation c, pg_catalog.pg_type bt\n"
        "        WHERE c.oid = t.typcollation AND bt.oid = t.typbasetype AND t.typcollation <> bt.typcollation) as \"%s\",\n",
        FUNC_5("Collation"));
 FUNC_3(&VAR_4,
       "       CASE WHEN t.typnotnull THEN 'not null' END as \"%s\",\n"
       "       t.typdefault as \"%s\",\n"
       "       pg_catalog.array_to_string(ARRAY(\n"
       "         SELECT pg_catalog.pg_get_constraintdef(r.oid, true) FROM pg_catalog.pg_constraint r WHERE t.oid = r.contypid\n"
       "       ), ' ') as \"%s\"",
       FUNC_5("Nullable"),
       FUNC_5("Default"),
       FUNC_5("Check"));

 if (VAR_2)
 {
  if (VAR_0.sversion >= 90200)
  {
   FUNC_4(&VAR_4, ",\n  ");
   FUNC_7(&VAR_4, "t.typacl");
  }
  FUNC_3(&VAR_4,
        ",\n       d.description as \"%s\"",
        FUNC_5("Description"));
 }

 FUNC_4(&VAR_4,
       "\nFROM pg_catalog.pg_type t\n"
       "     LEFT JOIN pg_catalog.pg_namespace n ON n.oid = t.typnamespace\n");

 if (VAR_2)
  FUNC_4(&VAR_4,
        "     LEFT JOIN pg_catalog.pg_description d "
        "ON d.classoid = t.tableoid AND d.objoid = t.oid "
        "AND d.objsubid = 0\n");

 FUNC_4(&VAR_4, "WHERE t.typtype = 'd'\n");

 if (!VAR_3 && !VAR_1)
  FUNC_4(&VAR_4, "      AND n.nspname <> 'pg_catalog'\n"
        "      AND n.nspname <> 'information_schema'\n");

 FUNC_10(VAR_0.db, &VAR_4, VAR_1, 1, 0,
        "n.nspname", "t.typname", ((void*)0),
        "pg_catalog.pg_type_is_visible(t.oid)");

 FUNC_4(&VAR_4, "ORDER BY 1, 2;");

 VAR_5 = FUNC_1(VAR_4.data);
 FUNC_11(&VAR_4);
 if (!VAR_5)
  return 0;

 VAR_6.nullPrint = ((void*)0);
 VAR_6.title = FUNC_2("List of domains");
 VAR_6.translate_header = 1;

 FUNC_8(VAR_5, &VAR_6, VAR_0.queryFout, 0, VAR_0.logfile);

 FUNC_0(VAR_5);
 return 1;
}
