
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int quiet; int db; } ;
struct TYPE_8__ {int data; } ;
typedef TYPE_1__ PQExpBufferData ;
typedef int PGresult ;


 int FUNC_0 (int *) ;
 char* FUNC_1 (int *,int,int) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*,char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_5 (char const*,char const*,char const*,int) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 (TYPE_1__*,char*) ;
 int FUNC_9 (int ,TYPE_1__*,char const*,int,int,char*,char*,int *,char*) ;
 TYPE_3__ VAR_1 ;
 int FUNC_10 (TYPE_1__*) ;

bool
FUNC_11(const char *VAR_2, bool VAR_3, bool VAR_4)
{
 PQExpBufferData VAR_5;
 PGresult *VAR_6;
 int VAR_7;

 FUNC_6(&VAR_5);

 FUNC_8(&VAR_5,
       "SELECT c.oid,\n"
       "  n.nspname,\n"
       "  c.relname\n"
       "FROM pg_catalog.pg_class c\n"
       "     LEFT JOIN pg_catalog.pg_namespace n ON n.oid = c.relnamespace\n");

 if (!VAR_4 && !VAR_2)
  FUNC_4(&VAR_5, "WHERE n.nspname <> 'pg_catalog'\n"
        "      AND n.nspname <> 'information_schema'\n");

 FUNC_9(VAR_1.db, &VAR_5, VAR_2, !VAR_4 && !VAR_2, 0,
        "n.nspname", "c.relname", ((void*)0),
        "pg_catalog.pg_table_is_visible(c.oid)");

 FUNC_4(&VAR_5, "ORDER BY 2, 3;");

 VAR_6 = FUNC_3(VAR_5.data);
 FUNC_10(&VAR_5);
 if (!VAR_6)
  return 0;

 if (FUNC_2(VAR_6) == 0)
 {
  if (!VAR_1.quiet)
  {
   if (VAR_2)
    FUNC_7("Did not find any relation named \"%s\".",
        VAR_2);
   else
    FUNC_7("Did not find any relations.");
  }
  FUNC_0(VAR_6);
  return 0;
 }

 for (VAR_7 = 0; VAR_7 < FUNC_2(VAR_6); VAR_7++)
 {
  const char *VAR_8;
  const char *VAR_9;
  const char *VAR_10;

  VAR_8 = FUNC_1(VAR_6, VAR_7, 0);
  VAR_9 = FUNC_1(VAR_6, VAR_7, 1);
  VAR_10 = FUNC_1(VAR_6, VAR_7, 2);

  if (!FUNC_5(VAR_9, VAR_10, VAR_8, VAR_3))
  {
   FUNC_0(VAR_6);
   return 0;
  }
  if (VAR_0)
  {
   FUNC_0(VAR_6);
   return 0;
  }
 }

 FUNC_0(VAR_6);
 return 1;
}
