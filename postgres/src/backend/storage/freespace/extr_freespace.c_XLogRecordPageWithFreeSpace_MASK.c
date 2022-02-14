
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16 ;
typedef int Size ;
typedef int RelFileNode ;
typedef int Page ;
typedef int FSMAddress ;
typedef int Buffer ;
typedef int BlockNumber ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int ,int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int VAR_3 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ,int ,int ) ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ,int ,int) ;
 int FUNC_10 (int ) ;

void
FUNC_11(RelFileNode VAR_4, BlockNumber VAR_5,
       Size VAR_6)
{
 int VAR_7 = FUNC_10(VAR_6);
 FSMAddress VAR_8;
 uint16 VAR_9;
 BlockNumber VAR_10;
 Buffer VAR_11;
 Page VAR_12;


 VAR_8 = FUNC_7(VAR_5, &VAR_9);
 VAR_10 = FUNC_8(VAR_8);


 VAR_11 = FUNC_6(VAR_4, VAR_2, VAR_10, VAR_3);
 FUNC_1(VAR_11, VAR_1);

 VAR_12 = FUNC_0(VAR_11);
 if (FUNC_4(VAR_12))
  FUNC_3(VAR_12, VAR_0, 0);

 if (FUNC_9(VAR_12, VAR_9, VAR_7))
  FUNC_2(VAR_11, 0);
 FUNC_5(VAR_11);
}
