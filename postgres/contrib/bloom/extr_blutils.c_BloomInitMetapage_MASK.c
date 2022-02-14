
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Relation ;
typedef int Page ;
typedef int GenericXLogState ;
typedef int Buffer ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_1 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ,int ) ;
 int * FUNC_6 (int ) ;
 int FUNC_7 (int ) ;

void
FUNC_8(Relation VAR_2)
{
 Buffer VAR_3;
 Page VAR_4;
 GenericXLogState *VAR_5;





 VAR_3 = FUNC_2(VAR_2);
 FUNC_0(FUNC_3(VAR_3) == VAR_0);


 VAR_5 = FUNC_6(VAR_2);
 VAR_4 = FUNC_5(VAR_5, VAR_3,
           VAR_1);
 FUNC_1(VAR_2, VAR_4);
 FUNC_4(VAR_5);

 FUNC_7(VAR_3);
}
