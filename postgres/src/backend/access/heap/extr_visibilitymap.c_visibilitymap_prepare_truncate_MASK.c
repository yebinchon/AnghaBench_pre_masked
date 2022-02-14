
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ uint8 ;
typedef scalar_t__ uint32 ;
struct TYPE_7__ {int rd_smgr; } ;
typedef TYPE_1__* Relation ;
typedef int Page ;
typedef int Buffer ;
typedef scalar_t__ BlockNumber ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_6 (int ,int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_7 (int ) ;
 int FUNC_8 (char*,int ,scalar_t__) ;
 char* FUNC_9 (int ) ;
 int FUNC_10 (TYPE_1__*) ;
 scalar_t__ FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (TYPE_1__*) ;
 int FUNC_13 () ;
 int FUNC_14 (int ) ;
 int VAR_5 ;
 scalar_t__ FUNC_15 () ;
 int FUNC_16 (int ,char*,int ,scalar_t__) ;
 int FUNC_17 (int ,int) ;
 int FUNC_18 (int ,int ) ;
 scalar_t__ FUNC_19 (int ,int ) ;
 int FUNC_20 (TYPE_1__*,scalar_t__,int) ;

BlockNumber
FUNC_21(Relation VAR_6, BlockNumber VAR_7)
{
 BlockNumber VAR_8;


 BlockNumber VAR_9 = FUNC_3(VAR_7);
 uint32 VAR_10 = FUNC_4(VAR_7);
 uint8 VAR_11 = FUNC_5(VAR_7);





 FUNC_12(VAR_6);





 if (!FUNC_18(VAR_6->rd_smgr, VAR_5))
  return VAR_3;
 if (VAR_10 != 0 || VAR_11 != 0)
 {
  Buffer VAR_12;
  Page VAR_13;
  char *VAR_14;

  VAR_8 = VAR_9 + 1;

  VAR_12 = FUNC_20(VAR_6, VAR_9, 0);
  if (!FUNC_1(VAR_12))
  {

   return VAR_3;
  }

  VAR_13 = FUNC_0(VAR_12);
  VAR_14 = FUNC_9(VAR_13);

  FUNC_6(VAR_12, VAR_0);


  FUNC_13();


  FUNC_8(&VAR_14[VAR_10 + 1], 0, VAR_4 - (VAR_10 + 1));
  VAR_14[VAR_10] &= (1 << VAR_11) - 1;
  FUNC_7(VAR_12);
  if (!VAR_2 && FUNC_11(VAR_6) && FUNC_15())
   FUNC_17(VAR_12, 0);

  FUNC_2();

  FUNC_14(VAR_12);
 }
 else
  VAR_8 = VAR_9;

 if (FUNC_19(VAR_6->rd_smgr, VAR_5) <= VAR_8)
 {

  return VAR_3;
 }

 return VAR_8;
}
