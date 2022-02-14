
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int data; } ;
typedef TYPE_1__* PQExpBuffer ;
typedef int PGresult ;
typedef int Oid ;
typedef int Archive ;


 int * FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (int *,int ,int ) ;
 int VAR_0 ;
 int FUNC_5 (TYPE_1__*,char*,int ,...) ;
 int FUNC_6 (TYPE_1__*,char*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *,TYPE_1__*,int ,int) ;
 TYPE_1__* FUNC_9 () ;
 int FUNC_10 (TYPE_1__*) ;

__attribute__((used)) static bool
FUNC_11(Archive *VAR_1,
          PQExpBuffer VAR_2,
          Oid VAR_3)
{
 PQExpBuffer VAR_4 = FUNC_9();
 PGresult *VAR_5;
 Oid VAR_6;
 bool VAR_7 = 0;
 FUNC_5(VAR_4,
       "SELECT c.reltype AS crel, t.reltype AS trel "
       "FROM pg_catalog.pg_class c "
       "LEFT JOIN pg_catalog.pg_class t ON "
       "  (c.reltoastrelid = t.oid AND c.relkind <> '%c') "
       "WHERE c.oid = '%u'::pg_catalog.oid;",
       VAR_0, VAR_3);

 VAR_5 = FUNC_0(VAR_1, VAR_4->data);

 VAR_6 = FUNC_7(FUNC_4(VAR_5, 0, FUNC_2(VAR_5, "crel")));

 FUNC_8(VAR_1, VAR_2,
            VAR_6, 0);

 if (!FUNC_3(VAR_5, 0, FUNC_2(VAR_5, "trel")))
 {

  Oid VAR_8 = FUNC_7(FUNC_4(VAR_5, 0,
                FUNC_2(VAR_5, "trel")));

  FUNC_6(VAR_2, "\n-- For binary upgrade, must preserve pg_type toast oid\n");
  FUNC_5(VAR_2,
        "SELECT pg_catalog.binary_upgrade_set_next_toast_pg_type_oid('%u'::pg_catalog.oid);\n\n",
        VAR_8);

  VAR_7 = 1;
 }

 FUNC_1(VAR_5);
 FUNC_10(VAR_4);

 return VAR_7;
}
