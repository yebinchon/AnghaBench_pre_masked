
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int data; } ;
typedef TYPE_1__ PQExpBufferData ;
typedef TYPE_1__* PQExpBuffer ;
typedef int PGresult ;
typedef int PGconn ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_1__*,char const*) ;
 int FUNC_6 (TYPE_1__*,char*,int *) ;
 int FUNC_7 (int *,char*,int) ;
 int * FUNC_8 (int *,int ,int) ;
 int FUNC_9 (int) ;
 char const* FUNC_10 (int ,int ) ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (char*,char*,int) ;
 int FUNC_13 (char*) ;
 int FUNC_14 (int ,int,int ) ;
 int FUNC_15 (char const*,int ,char**,char const**) ;
 int FUNC_16 (TYPE_1__*) ;

void
FUNC_17(PQExpBuffer VAR_1, const char *VAR_2,
      PGconn *VAR_3, bool VAR_4)
{
 char *VAR_5;
 const char *VAR_6;
 PQExpBufferData VAR_7;
 PGresult *VAR_8;
 int VAR_9;

 FUNC_15(VAR_2, FUNC_1(VAR_3), &VAR_5, &VAR_6);






 FUNC_11(&VAR_7);
 FUNC_5(&VAR_7,
       "SELECT c.relname, ns.nspname\n"
       " FROM pg_catalog.pg_class c,"
       " pg_catalog.pg_namespace ns\n"
       " WHERE c.relnamespace OPERATOR(pg_catalog.=) ns.oid\n"
       "  AND c.oid OPERATOR(pg_catalog.=) ");
 FUNC_6(&VAR_7, VAR_5, VAR_3);
 FUNC_5(&VAR_7, "::pg_catalog.regclass;");

 FUNC_7(VAR_3, "RESET search_path;", VAR_4);







 VAR_8 = FUNC_8(VAR_3, VAR_7.data, VAR_4);
 VAR_9 = FUNC_4(VAR_8);
 if (VAR_9 != 1)
 {
  FUNC_14(FUNC_12("query returned %d row instead of one: %s",
         "query returned %d rows instead of one: %s",
         VAR_9),
      VAR_9, VAR_7.data);
  FUNC_2(VAR_3);
  FUNC_9(1);
 }
 FUNC_5(VAR_1,
       FUNC_10(FUNC_3(VAR_8, 0, 1),
          FUNC_3(VAR_8, 0, 0)));
 FUNC_5(VAR_1, VAR_6);
 FUNC_0(VAR_8);
 FUNC_16(&VAR_7);
 FUNC_13(VAR_5);

 FUNC_0(FUNC_8(VAR_3, VAR_0, VAR_4));
}
