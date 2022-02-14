
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int oid; } ;
typedef int Relation ;
typedef int Oid ;
typedef int ObjectAddress ;
typedef int HeapTuple ;
typedef TYPE_1__* Form_pg_foreign_data_wrapper ;


 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (char const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int ) ;
 int VAR_4 ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (char*,char const*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int ,int ) ;

ObjectAddress
FUNC_12(const char *VAR_5, Oid VAR_6)
{
 Oid VAR_7;
 HeapTuple VAR_8;
 Relation VAR_9;
 ObjectAddress VAR_10;
 Form_pg_foreign_data_wrapper VAR_11;


 VAR_9 = FUNC_11(VAR_3, VAR_4);

 VAR_8 = FUNC_5(VAR_2, FUNC_1(VAR_5));

 if (!FUNC_3(VAR_8))
  FUNC_6(VAR_1,
    (FUNC_7(VAR_0),
     FUNC_8("foreign-data wrapper \"%s\" does not exist", VAR_5)));

 VAR_11 = (Form_pg_foreign_data_wrapper) FUNC_2(VAR_8);
 VAR_7 = VAR_11->oid;

 FUNC_0(VAR_9, VAR_8, VAR_6);

 FUNC_4(VAR_10, VAR_3, VAR_7);

 FUNC_9(VAR_8);

 FUNC_10(VAR_9, VAR_4);

 return VAR_10;
}
