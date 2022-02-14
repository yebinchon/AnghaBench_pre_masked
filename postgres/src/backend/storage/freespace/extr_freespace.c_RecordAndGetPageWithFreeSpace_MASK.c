
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16 ;
typedef int Size ;
typedef int Relation ;
typedef int FSMAddress ;
typedef int BlockNumber ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int ,int ,int,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

BlockNumber
FUNC_6(Relation VAR_0, BlockNumber VAR_1,
         Size VAR_2, Size VAR_3)
{
 int VAR_4 = FUNC_4(VAR_2);
 int VAR_5 = FUNC_5(VAR_3);
 FSMAddress VAR_6;
 uint16 VAR_7;
 int VAR_8;


 VAR_6 = FUNC_1(VAR_1, &VAR_7);

 VAR_8 = FUNC_3(VAR_0, VAR_6, VAR_7, VAR_4, VAR_5);





 if (VAR_8 != -1)
  return FUNC_0(VAR_6, VAR_8);
 else
  return FUNC_2(VAR_0, VAR_5);
}
