
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ XLogRecPtr ;
struct TYPE_6__ {scalar_t__ Flush; } ;
struct TYPE_5__ {scalar_t__ walwriterLatch; } ;
struct TYPE_4__ {int WalWriterSleeping; scalar_t__ asyncXactLSN; int info_lck; TYPE_3__ LogwrtResult; } ;


 TYPE_3__ VAR_0 ;
 TYPE_2__* VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ VAR_2 ;
 TYPE_1__* VAR_3 ;

void
FUNC_3(XLogRecPtr VAR_4)
{
 XLogRecPtr VAR_5 = VAR_4;
 bool VAR_6;

 FUNC_1(&VAR_3->info_lck);
 VAR_0 = VAR_3->LogwrtResult;
 VAR_6 = VAR_3->WalWriterSleeping;
 if (VAR_3->asyncXactLSN < VAR_4)
  VAR_3->asyncXactLSN = VAR_4;
 FUNC_2(&VAR_3->info_lck);






 if (!VAR_6)
 {

  VAR_5 -= VAR_5 % VAR_2;


  if (VAR_5 <= VAR_0.Flush)
   return;
 }






 if (VAR_1->walwriterLatch)
  FUNC_0(VAR_1->walwriterLatch);
}
