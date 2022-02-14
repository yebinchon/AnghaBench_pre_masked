
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32 ;
typedef int XLogRecPtr ;
struct TYPE_4__ {int backupEndPoint; int minRecoveryPoint; int backupStartPoint; int backupEndRequired; } ;
struct TYPE_3__ {int lastReplayedEndRecPtr; int SharedHotStandbyActive; int info_lck; } ;


 int FUNC_0 (int ) ;
 TYPE_2__* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 TYPE_1__* VAR_11 ;
 scalar_t__ FUNC_8 (int) ;
 int FUNC_9 (int ,char*) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (char*,int ,int ) ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;

__attribute__((used)) static void
FUNC_12(void)
{
 XLogRecPtr VAR_15;





 if (FUNC_8(VAR_12))
  return;

 FUNC_0(VAR_3);





 VAR_15 = VAR_11->lastReplayedEndRecPtr;




 if (!FUNC_8(VAR_0->backupEndPoint) &&
  VAR_0->backupEndPoint <= VAR_15)
 {







  FUNC_9(VAR_2, "end of backup reached");

  FUNC_1(VAR_1, VAR_7);

  if (VAR_0->minRecoveryPoint < VAR_15)
   VAR_0->minRecoveryPoint = VAR_15;

  VAR_0->backupStartPoint = VAR_4;
  VAR_0->backupEndPoint = VAR_4;
  VAR_0->backupEndRequired = 0;
  FUNC_6();

  FUNC_2(VAR_1);
 }
 if (!VAR_13 && !VAR_0->backupEndRequired &&
  VAR_12 <= VAR_15 &&
  FUNC_8(VAR_0->backupStartPoint))
 {




  FUNC_7();

  VAR_13 = 1;
  FUNC_10(VAR_6,
    (FUNC_11("consistent recovery state reached at %X/%X",
      (uint32) (VAR_15 >> 32),
      (uint32) VAR_15)));
 }






 if (VAR_14 == VAR_10 &&
  !VAR_8 &&
  VAR_13 &&
  VAR_5)
 {
  FUNC_4(&VAR_11->info_lck);
  VAR_11->SharedHotStandbyActive = 1;
  FUNC_5(&VAR_11->info_lck);

  VAR_8 = 1;

  FUNC_3(VAR_9);
 }
}
