
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
 int FUNC_1 (int *,int,int) ;
 char* FUNC_2 (int *,int,int) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int ) ;
 int FUNC_5 (TYPE_1__*,char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_6 (char const*,char const*,char const*,char const*,char const*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (char*,...) ;
 int FUNC_9 (TYPE_1__*,char*) ;
 int FUNC_10 (int ,TYPE_1__*,char const*,int,int,char*,char*,int *,char*) ;
 TYPE_3__ VAR_1 ;
 int FUNC_11 (TYPE_1__*) ;

__attribute__((used)) static bool
FUNC_12(const char *VAR_2)
{
 PQExpBufferData VAR_3;
 PGresult *VAR_4;
 int VAR_5;

 FUNC_7(&VAR_3);

 FUNC_9(&VAR_3,
       "SELECT c.oid, c.cfgname,\n"
       "   n.nspname,\n"
       "   p.prsname,\n"
       "   np.nspname as pnspname\n"
       "FROM pg_catalog.pg_ts_config c\n"
       "   LEFT JOIN pg_catalog.pg_namespace n ON n.oid = c.cfgnamespace,\n"
       " pg_catalog.pg_ts_parser p\n"
       "   LEFT JOIN pg_catalog.pg_namespace np ON np.oid = p.prsnamespace\n"
       "WHERE  p.oid = c.cfgparser\n"
  );

 FUNC_10(VAR_1.db, &VAR_3, VAR_2, 1, 0,
        "n.nspname", "c.cfgname", ((void*)0),
        "pg_catalog.pg_ts_config_is_visible(c.oid)");

 FUNC_5(&VAR_3, "ORDER BY 3, 2;");

 VAR_4 = FUNC_4(VAR_3.data);
 FUNC_11(&VAR_3);
 if (!VAR_4)
  return 0;

 if (FUNC_3(VAR_4) == 0)
 {
  if (!VAR_1.quiet)
  {
   if (VAR_2)
    FUNC_8("Did not find any text search configuration named \"%s\".",
        VAR_2);
   else
    FUNC_8("Did not find any text search configurations.");
  }
  FUNC_0(VAR_4);
  return 0;
 }

 for (VAR_5 = 0; VAR_5 < FUNC_3(VAR_4); VAR_5++)
 {
  const char *VAR_6;
  const char *VAR_7;
  const char *VAR_8 = ((void*)0);
  const char *VAR_9;
  const char *VAR_10 = ((void*)0);

  VAR_6 = FUNC_2(VAR_4, VAR_5, 0);
  VAR_7 = FUNC_2(VAR_4, VAR_5, 1);
  if (!FUNC_1(VAR_4, VAR_5, 2))
   VAR_8 = FUNC_2(VAR_4, VAR_5, 2);
  VAR_9 = FUNC_2(VAR_4, VAR_5, 3);
  if (!FUNC_1(VAR_4, VAR_5, 4))
   VAR_10 = FUNC_2(VAR_4, VAR_5, 4);

  if (!FUNC_6(VAR_6, VAR_8, VAR_7, VAR_10, VAR_9))
  {
   FUNC_0(VAR_4);
   return 0;
  }

  if (VAR_0)
  {
   FUNC_0(VAR_4);
   return 0;
  }
 }

 FUNC_0(VAR_4);
 return 1;
}
