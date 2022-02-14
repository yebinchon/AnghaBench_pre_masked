
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int XLogRecPtr ;
typedef int TimeLineID ;
struct TYPE_2__ {int info_lck; int lastReplayedTLI; int lastReplayedEndRecPtr; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 TYPE_1__* VAR_0 ;

XLogRecPtr
FUNC_2(TimeLineID *VAR_1)
{
 XLogRecPtr VAR_2;
 TimeLineID VAR_3;

 FUNC_0(&VAR_0->info_lck);
 VAR_2 = VAR_0->lastReplayedEndRecPtr;
 VAR_3 = VAR_0->lastReplayedTLI;
 FUNC_1(&VAR_0->info_lck);

 if (VAR_1)
  *VAR_1 = VAR_3;
 return VAR_2;
}
