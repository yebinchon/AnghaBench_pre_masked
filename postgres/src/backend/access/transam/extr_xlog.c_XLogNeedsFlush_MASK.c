
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ XLogRecPtr ;
struct TYPE_6__ {scalar_t__ minRecoveryPoint; int minRecoveryPointTLI; } ;
struct TYPE_5__ {scalar_t__ Flush; } ;
struct TYPE_4__ {int info_lck; TYPE_2__ LogwrtResult; } ;


 TYPE_3__* VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 TYPE_2__ VAR_4 ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 TYPE_1__* VAR_5 ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

bool
FUNC_6(XLogRecPtr VAR_9)
{





 if (FUNC_2())
 {
  if (FUNC_5(VAR_6) && VAR_2)
   VAR_8 = 0;


  if (VAR_9 <= VAR_6 || !VAR_8)
   return 0;





  if (!FUNC_0(VAR_1, VAR_3))
   return 1;
  VAR_6 = VAR_0->minRecoveryPoint;
  VAR_7 = VAR_0->minRecoveryPointTLI;
  FUNC_1(VAR_1);






  if (FUNC_5(VAR_6))
   VAR_8 = 0;


  if (VAR_9 <= VAR_6 || !VAR_8)
   return 0;
  else
   return 1;
 }


 if (VAR_9 <= VAR_4.Flush)
  return 0;


 FUNC_3(&VAR_5->info_lck);
 VAR_4 = VAR_5->LogwrtResult;
 FUNC_4(&VAR_5->info_lck);


 if (VAR_9 <= VAR_4.Flush)
  return 0;

 return 1;
}
