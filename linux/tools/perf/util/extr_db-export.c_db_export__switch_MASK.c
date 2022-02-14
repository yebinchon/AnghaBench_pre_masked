
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int next_prev_tid; int next_prev_pid; } ;
struct TYPE_3__ {int misc; scalar_t__ type; } ;
union perf_event {TYPE_2__ context_switch; TYPE_1__ header; } ;
typedef scalar_t__ u64 ;
struct perf_sample {int tid; int pid; } ;
struct machine {int dummy; } ;
struct db_export {int (* export_context_switch ) (struct db_export*,scalar_t__,struct machine*,struct perf_sample*,scalar_t__,scalar_t__,scalar_t__,scalar_t__,int) ;scalar_t__ context_switch_last_db_id; } ;
struct comm {scalar_t__ db_id; } ;
typedef int pid_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct db_export*,struct machine*) ;
 int FUNC_1 (struct db_export*,struct machine*,int ,int ,scalar_t__*,struct comm**,int*) ;
 int FUNC_2 (struct db_export*,scalar_t__,struct machine*,struct perf_sample*,scalar_t__,scalar_t__,scalar_t__,scalar_t__,int) ;

int FUNC_3(struct db_export *VAR_3, union perf_event *VAR_4,
        struct perf_sample *VAR_5, struct machine *VAR_6)
{
 bool VAR_7 = VAR_4->header.misc & VAR_0;
 bool VAR_8 = VAR_7 &&
  (VAR_4->header.misc & VAR_1);
 int VAR_9 = VAR_7 | (VAR_8 << 1);
 bool VAR_10 = 0, VAR_11 = 0;
 u64 VAR_12 = 0, VAR_13 = 0;
 u64 VAR_14, VAR_15;
 struct comm *VAR_16 = ((void*)0);
 struct comm *VAR_17 = ((void*)0);
 u64 VAR_18, VAR_19;
 u64 VAR_20;
 int VAR_21;

 VAR_21 = FUNC_0(VAR_3, VAR_6);
 if (VAR_21)
  return VAR_21;

 VAR_21 = FUNC_1(VAR_3, VAR_6, VAR_5->pid, VAR_5->tid,
     &VAR_12, &VAR_16, &VAR_10);
 if (VAR_21)
  return VAR_21;

 if (VAR_4->header.type == VAR_2) {
  pid_t VAR_22 = VAR_4->context_switch.next_prev_pid;
  pid_t VAR_23 = VAR_4->context_switch.next_prev_tid;

  VAR_21 = FUNC_1(VAR_3, VAR_6, VAR_22, VAR_23, &VAR_13,
      &VAR_17, &VAR_11);
  if (VAR_21)
   return VAR_21;
 }





 if ((!VAR_12 || VAR_10) && (!VAR_13 || VAR_11))
  return 0;

 VAR_20 = ++VAR_3->context_switch_last_db_id;

 if (VAR_7) {
  VAR_18 = VAR_12;
  VAR_19 = VAR_13;
  VAR_14 = VAR_16 ? VAR_16->db_id : 0;
  VAR_15 = VAR_17 ? VAR_17->db_id : 0;
 } else {
  VAR_18 = VAR_13;
  VAR_19 = VAR_12;
  VAR_14 = VAR_17 ? VAR_17->db_id : 0;
  VAR_15 = VAR_16 ? VAR_16->db_id : 0;
 }

 if (VAR_3->export_context_switch)
  return VAR_3->export_context_switch(VAR_3, VAR_20, VAR_6, VAR_5,
        VAR_18, VAR_14,
        VAR_19, VAR_15, VAR_9);
 return 0;
}
