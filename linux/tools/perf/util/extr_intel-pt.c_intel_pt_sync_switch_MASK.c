
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct intel_pt_queue {int switch_state; int next_tid; int on_heap; int timestamp; int queue_nr; int sync_switch; } ;
struct intel_pt {int heap; int tc; int sync_switch; } ;
typedef int pid_t ;







 int FUNC_0 (int *,int ,int ) ;
 struct intel_pt_queue* FUNC_1 (struct intel_pt*,int) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static int FUNC_4(struct intel_pt *VAR_0, int VAR_1, pid_t VAR_2,
    u64 VAR_3)
{
 struct intel_pt_queue *VAR_4;
 int VAR_5;

 if (!VAR_0->sync_switch)
  return 1;

 VAR_4 = FUNC_1(VAR_0, VAR_1);
 if (!VAR_4 || !VAR_4->sync_switch)
  return 1;

 switch (VAR_4->switch_state) {
 case 130:
  break;
 case 128:
 case 129:
  VAR_4->next_tid = VAR_2;
  VAR_4->switch_state = 131;
  return 0;
 case 132:
  if (!VAR_4->on_heap) {
   VAR_4->timestamp = FUNC_3(VAR_3,
         &VAR_0->tc);
   VAR_5 = FUNC_0(&VAR_0->heap, VAR_4->queue_nr,
       VAR_4->timestamp);
   if (VAR_5)
    return VAR_5;
   VAR_4->on_heap = 1;
  }
  VAR_4->switch_state = 129;
  break;
 case 131:
  FUNC_2("ERROR: cpu %d expecting switch ip\n", VAR_1);
  break;
 default:
  break;
 }

 VAR_4->next_tid = -1;

 return 1;
}
