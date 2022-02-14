
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int TransactionId ;
struct TYPE_8__ {int nxids; int overflowed; } ;
struct TYPE_5__ {int * xids; } ;
struct TYPE_7__ {TYPE_1__ subxids; } ;
struct TYPE_6__ {int latestCompletedXid; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 TYPE_4__* VAR_1 ;
 TYPE_3__* VAR_2 ;
 int VAR_3 ;
 TYPE_2__* VAR_4 ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ,int ) ;
 int VAR_5 ;
 int FUNC_6 (int) ;
 int FUNC_7 (int ,char*,int ) ;

void
FUNC_8(TransactionId VAR_6,
        int VAR_7, const TransactionId *VAR_8,
        TransactionId VAR_9)
{
 int VAR_10,
    VAR_11;

 FUNC_0(FUNC_4(VAR_6));
 FUNC_1(VAR_3, VAR_0);






 for (VAR_10 = VAR_7 - 1; VAR_10 >= 0; VAR_10--)
 {
  TransactionId VAR_12 = VAR_8[VAR_10];

  for (VAR_11 = VAR_1->nxids - 1; VAR_11 >= 0; VAR_11--)
  {
   if (FUNC_3(VAR_2->subxids.xids[VAR_11], VAR_12))
   {
    FUNC_6(VAR_11);
    break;
   }
  }
  if (VAR_11 < 0 && !VAR_1->overflowed)
   FUNC_7(VAR_5, "did not find subXID %u in MyProc", VAR_12);
 }

 for (VAR_11 = VAR_1->nxids - 1; VAR_11 >= 0; VAR_11--)
 {
  if (FUNC_3(VAR_2->subxids.xids[VAR_11], VAR_6))
  {
   FUNC_6(VAR_11);
   break;
  }
 }

 if (VAR_11 < 0 && !VAR_1->overflowed)
  FUNC_7(VAR_5, "did not find subXID %u in MyProc", VAR_6);


 if (FUNC_5(VAR_4->latestCompletedXid,
         VAR_9))
  VAR_4->latestCompletedXid = VAR_9;

 FUNC_2(VAR_3);
}
