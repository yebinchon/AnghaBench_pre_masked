
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ count_used; scalar_t__ head_timestamp; scalar_t__ head_offset; void* threshold_xid; scalar_t__ threshold_timestamp; int mutex_threshold; scalar_t__ next_map_update; void* latest_xmin; int mutex_latest_xmin; scalar_t__ current_timestamp; int mutex_current; } ;
typedef TYPE_1__ OldSnapshotControlData ;


 void* VAR_0 ;
 scalar_t__ FUNC_0 (char*,int ,int*) ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 TYPE_1__ volatile* VAR_1 ;

void
FUNC_3(void)
{
 bool VAR_2;




 VAR_1 = (volatile OldSnapshotControlData *)
  FUNC_0("OldSnapshotControlData",
      FUNC_1(), &VAR_2);

 if (!VAR_2)
 {
  FUNC_2(&VAR_1->mutex_current);
  VAR_1->current_timestamp = 0;
  FUNC_2(&VAR_1->mutex_latest_xmin);
  VAR_1->latest_xmin = VAR_0;
  VAR_1->next_map_update = 0;
  FUNC_2(&VAR_1->mutex_threshold);
  VAR_1->threshold_timestamp = 0;
  VAR_1->threshold_xid = VAR_0;
  VAR_1->head_offset = 0;
  VAR_1->head_timestamp = 0;
  VAR_1->count_used = 0;
 }
}
