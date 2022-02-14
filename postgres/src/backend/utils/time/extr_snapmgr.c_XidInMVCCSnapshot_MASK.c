
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint32 ;
typedef size_t int32 ;
typedef int TransactionId ;
struct TYPE_3__ {size_t subxcnt; size_t xcnt; int * subxip; int xmin; scalar_t__ suboverflowed; int * xip; int takenDuringRecovery; int xmax; } ;
typedef TYPE_1__* Snapshot ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int ,int ) ;

bool
FUNC_4(TransactionId VAR_0, Snapshot VAR_1)
{
 uint32 VAR_2;
 if (FUNC_3(VAR_0, VAR_1->xmin))
  return 0;

 if (FUNC_2(VAR_0, VAR_1->xmax))
  return 1;





 if (!VAR_1->takenDuringRecovery)
 {







  if (!VAR_1->suboverflowed)
  {

   int32 VAR_3;

   for (VAR_3 = 0; VAR_3 < VAR_1->subxcnt; VAR_3++)
   {
    if (FUNC_1(VAR_0, VAR_1->subxip[VAR_3]))
     return 1;
   }


  }
  else
  {




   VAR_0 = FUNC_0(VAR_0);






   if (FUNC_3(VAR_0, VAR_1->xmin))
    return 0;
  }

  for (VAR_2 = 0; VAR_2 < VAR_1->xcnt; VAR_2++)
  {
   if (FUNC_1(VAR_0, VAR_1->xip[VAR_2]))
    return 1;
  }
 }
 else
 {
  int32 VAR_4;
  if (VAR_1->suboverflowed)
  {




   VAR_0 = FUNC_0(VAR_0);






   if (FUNC_3(VAR_0, VAR_1->xmin))
    return 0;
  }






  for (VAR_4 = 0; VAR_4 < VAR_1->subxcnt; VAR_4++)
  {
   if (FUNC_1(VAR_0, VAR_1->subxip[VAR_4]))
    return 1;
  }
 }

 return 0;
}
