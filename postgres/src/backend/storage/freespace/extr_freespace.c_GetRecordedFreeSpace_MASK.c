
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8 ;
typedef int uint16 ;
typedef int Size ;
typedef int Relation ;
typedef int FSMAddress ;
typedef int Buffer ;
typedef int BlockNumber ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int ,int ,int) ;
 int FUNC_6 (int ) ;

Size
FUNC_7(Relation VAR_0, BlockNumber VAR_1)
{
 FSMAddress VAR_2;
 uint16 VAR_3;
 Buffer VAR_4;
 uint8 VAR_5;


 VAR_2 = FUNC_4(VAR_1, &VAR_3);

 VAR_4 = FUNC_5(VAR_0, VAR_2, 0);
 if (!FUNC_1(VAR_4))
  return 0;
 VAR_5 = FUNC_3(FUNC_0(VAR_4), VAR_3);
 FUNC_2(VAR_4);

 return FUNC_6(VAR_5);
}
