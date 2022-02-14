
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
 int FUNC_6 (char const*,char const*,char const*) ;
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
       "SELECT p.oid,\n"
       "  n.nspname,\n"
       "  p.prsname\n"
       "FROM pg_catalog.pg_ts_parser p\n"
       "LEFT JOIN pg_catalog.pg_namespace n ON n.oid = p.prsnamespace\n"
  );

 FUNC_10(VAR_1.db, &VAR_3, VAR_2, 0, 0,
        "n.nspname", "p.prsname", ((void*)0),
        "pg_catalog.pg_ts_parser_is_visible(p.oid)");

 FUNC_5(&VAR_3, "ORDER BY 1, 2;");

 VAR_4 = FUNC_4(VAR_3.data);
 FUNC_11(&VAR_3);
 if (!VAR_4)
  return 0;

 if (FUNC_3(VAR_4) == 0)
 {
  if (!VAR_1.quiet)
  {
   if (VAR_2)
    FUNC_8("Did not find any text search parser named \"%s\".",
        VAR_2);
   else
    FUNC_8("Did not find any text search parsers.");
  }
  FUNC_0(VAR_4);
  return 0;
 }

 for (VAR_5 = 0; VAR_5 < FUNC_3(VAR_4); VAR_5++)
 {
  const char *VAR_6;
  const char *VAR_7 = ((void*)0);
  const char *VAR_8;

  VAR_6 = FUNC_2(VAR_4, VAR_5, 0);
  if (!FUNC_1(VAR_4, VAR_5, 1))
   VAR_7 = FUNC_2(VAR_4, VAR_5, 1);
  VAR_8 = FUNC_2(VAR_4, VAR_5, 2);

  if (!FUNC_6(VAR_6, VAR_7, VAR_8))
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
