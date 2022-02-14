
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32 ;
typedef int XLogRecPtr ;
typedef void* TimeLineID ;
struct TYPE_4__ {int minRecoveryPoint; void* minRecoveryPointTLI; } ;
struct TYPE_3__ {int replayEndRecPtr; int info_lck; void* replayEndTLI; } ;


 TYPE_2__* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 () ;
 int VAR_5 ;
 TYPE_1__* VAR_6 ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (int ,char*,int ,int ,int ,int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (char*,int ,int ,void*) ;
 int VAR_7 ;
 void* VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static void
FUNC_9(XLogRecPtr VAR_10, bool VAR_11)
{

 if (!VAR_9 || (!VAR_11 && VAR_10 <= VAR_7))
  return;
 if (FUNC_5(VAR_7) && VAR_3)
 {
  VAR_9 = 0;
  return;
 }

 FUNC_0(VAR_1, VAR_4);


 VAR_7 = VAR_0->minRecoveryPoint;
 VAR_8 = VAR_0->minRecoveryPointTLI;

 if (FUNC_5(VAR_7))
  VAR_9 = 0;
 else if (VAR_11 || VAR_7 < VAR_10)
 {
  XLogRecPtr VAR_12;
  TimeLineID VAR_13;
  FUNC_2(&VAR_6->info_lck);
  VAR_12 = VAR_6->replayEndRecPtr;
  VAR_13 = VAR_6->replayEndTLI;
  FUNC_3(&VAR_6->info_lck);

  if (!VAR_11 && VAR_12 < VAR_10)
   FUNC_6(VAR_5,
     "xlog min recovery request %X/%X is past current point %X/%X",
     (uint32) (VAR_10 >> 32), (uint32) VAR_10,
     (uint32) (VAR_12 >> 32),
     (uint32) VAR_12);


  if (VAR_0->minRecoveryPoint < VAR_12)
  {
   VAR_0->minRecoveryPoint = VAR_12;
   VAR_0->minRecoveryPointTLI = VAR_13;
   FUNC_4();
   VAR_7 = VAR_12;
   VAR_8 = VAR_13;

   FUNC_7(VAR_2,
     (FUNC_8("updated min recovery point to %X/%X on timeline %u",
       (uint32) (VAR_7 >> 32),
       (uint32) VAR_7,
       VAR_13)));
  }
 }
 FUNC_1(VAR_1);
}
