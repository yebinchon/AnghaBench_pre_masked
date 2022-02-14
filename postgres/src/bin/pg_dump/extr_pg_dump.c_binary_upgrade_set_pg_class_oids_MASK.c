
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
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,int ,int ) ;
 int FUNC_5 (TYPE_1__*,char*,int ) ;
 int FUNC_6 (TYPE_1__*,char) ;
 int FUNC_7 (TYPE_1__*,char*) ;
 int FUNC_8 (int ) ;
 TYPE_1__* FUNC_9 () ;
 int FUNC_10 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_11(Archive *VAR_0,
         PQExpBuffer VAR_1, Oid VAR_2,
         bool VAR_3)
{
 PQExpBuffer VAR_4 = FUNC_9();
 PGresult *VAR_5;
 Oid VAR_6;
 Oid VAR_7;

 FUNC_5(VAR_4,
       "SELECT c.reltoastrelid, i.indexrelid "
       "FROM pg_catalog.pg_class c LEFT JOIN "
       "pg_catalog.pg_index i ON (c.reltoastrelid = i.indrelid AND i.indisvalid) "
       "WHERE c.oid = '%u'::pg_catalog.oid;",
       VAR_2);

 VAR_5 = FUNC_0(VAR_0, VAR_4->data);

 VAR_6 = FUNC_8(FUNC_4(VAR_5, 0, FUNC_3(VAR_5, "reltoastrelid")));
 VAR_7 = FUNC_8(FUNC_4(VAR_5, 0, FUNC_3(VAR_5, "indexrelid")));

 FUNC_7(VAR_1,
       "\n-- For binary upgrade, must preserve pg_class oids\n");

 if (!VAR_3)
 {
  FUNC_5(VAR_1,
        "SELECT pg_catalog.binary_upgrade_set_next_heap_pg_class_oid('%u'::pg_catalog.oid);\n",
        VAR_2);

  if (FUNC_1(VAR_6))
  {
   FUNC_5(VAR_1,
         "SELECT pg_catalog.binary_upgrade_set_next_toast_pg_class_oid('%u'::pg_catalog.oid);\n",
         VAR_6);


   FUNC_5(VAR_1,
         "SELECT pg_catalog.binary_upgrade_set_next_index_pg_class_oid('%u'::pg_catalog.oid);\n",
         VAR_7);
  }
 }
 else
  FUNC_5(VAR_1,
        "SELECT pg_catalog.binary_upgrade_set_next_index_pg_class_oid('%u'::pg_catalog.oid);\n",
        VAR_2);

 FUNC_6(VAR_1, '\n');

 FUNC_2(VAR_5);
 FUNC_10(VAR_4);
}
