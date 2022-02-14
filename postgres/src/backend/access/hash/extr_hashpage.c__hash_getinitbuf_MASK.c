
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Relation ;
typedef int Buffer ;
typedef scalar_t__ BlockNumber ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,int ,scalar_t__,int ,int *) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,char*) ;

Buffer
FUNC_5(Relation VAR_4, BlockNumber VAR_5)
{
 Buffer VAR_6;

 if (VAR_5 == VAR_2)
  FUNC_4(VAR_0, "hash AM does not use P_NEW");

 VAR_6 = FUNC_2(VAR_4, VAR_1, VAR_5, VAR_3,
        ((void*)0));




 FUNC_3(FUNC_0(VAR_6), FUNC_1(VAR_6));

 return VAR_6;
}
