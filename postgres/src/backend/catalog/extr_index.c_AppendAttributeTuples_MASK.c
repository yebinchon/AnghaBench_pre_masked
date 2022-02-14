
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int TupleDesc ;
struct TYPE_4__ {int attnum; } ;
typedef int Relation ;
typedef TYPE_1__* Form_pg_attribute ;
typedef int CatalogIndexState ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,TYPE_1__*,int ) ;
 int FUNC_4 (int ) ;
 int VAR_1 ;
 TYPE_1__* FUNC_5 (int ,int) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ) ;

__attribute__((used)) static void
FUNC_8(Relation VAR_2, int VAR_3)
{
 Relation VAR_4;
 CatalogIndexState VAR_5;
 TupleDesc VAR_6;
 int VAR_7;




 VAR_4 = FUNC_7(VAR_0, VAR_1);

 VAR_5 = FUNC_2(VAR_4);




 VAR_6 = FUNC_4(VAR_2);

 for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++)
 {
  Form_pg_attribute VAR_8 = FUNC_5(VAR_6, VAR_7);

  FUNC_0(VAR_8->attnum == VAR_7 + 1);

  FUNC_3(VAR_4, VAR_8, VAR_5);
 }

 FUNC_1(VAR_5);

 FUNC_6(VAR_4, VAR_1);
}
