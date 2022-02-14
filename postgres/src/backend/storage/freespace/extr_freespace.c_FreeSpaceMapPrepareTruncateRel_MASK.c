
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint16 ;
struct TYPE_6__ {int rd_smgr; } ;
typedef TYPE_1__* Relation ;
typedef int FSMAddress ;
typedef int Buffer ;
typedef scalar_t__ BlockNumber ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 () ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 () ;
 int FUNC_10 (scalar_t__,scalar_t__*) ;
 scalar_t__ FUNC_11 (int ) ;
 int FUNC_12 (TYPE_1__*,int ,int) ;
 int FUNC_13 (int ,scalar_t__) ;
 int FUNC_14 (int ,int) ;
 int FUNC_15 (int ,int ) ;
 scalar_t__ FUNC_16 (int ,int ) ;

BlockNumber
FUNC_17(Relation VAR_4, BlockNumber VAR_5)
{
 BlockNumber VAR_6;
 FSMAddress VAR_7;
 uint16 VAR_8;
 Buffer VAR_9;

 FUNC_6(VAR_4);





 if (!FUNC_15(VAR_4->rd_smgr, VAR_1))
  return VAR_3;


 VAR_7 = FUNC_10(VAR_5, &VAR_8);







 if (VAR_8 > 0)
 {
  VAR_9 = FUNC_12(VAR_4, VAR_7, 0);
  if (!FUNC_1(VAR_9))
   return VAR_3;
  FUNC_3(VAR_9, VAR_0);


  FUNC_7();

  FUNC_13(FUNC_0(VAR_9), VAR_8);
  FUNC_4(VAR_9);
  if (!VAR_2 && FUNC_5(VAR_4) && FUNC_9())
   FUNC_14(VAR_9, 0);

  FUNC_2();

  FUNC_8(VAR_9);

  VAR_6 = FUNC_11(VAR_7) + 1;
 }
 else
 {
  VAR_6 = FUNC_11(VAR_7);
  if (FUNC_16(VAR_4->rd_smgr, VAR_1) <= VAR_6)
   return VAR_3;
 }

 return VAR_6;
}
