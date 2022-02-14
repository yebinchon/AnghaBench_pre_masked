
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u64 ;
struct user_namespace {int dummy; } ;
struct taskstats {int ac_comm; int ac_majflt; int ac_minflt; void* ac_stimescaled; void* ac_utimescaled; void* ac_stime; void* ac_utime; int ac_ppid; int ac_gid; int ac_uid; int ac_pid; int ac_sched; int ac_nice; int ac_flag; int ac_exitcode; void* ac_btime; void* ac_etime; } ;
struct task_struct {int flags; int comm; int maj_flt; int min_flt; int real_parent; int policy; int exit_code; void* start_time; } ;
struct pid_namespace {int dummy; } ;
struct cred {int gid; int uid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 struct cred* FUNC_1 (struct task_struct*) ;
 void* FUNC_2 (void*,int ) ;
 int FUNC_3 (void*,int ) ;
 int FUNC_4 (struct user_namespace*,int ) ;
 int FUNC_5 (struct user_namespace*,int ) ;
 void* FUNC_6 () ;
 void* FUNC_7 () ;
 scalar_t__ FUNC_8 (struct task_struct*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 int FUNC_12 (int ,int ,int) ;
 int FUNC_13 (struct task_struct*,void**,void**) ;
 int FUNC_14 (struct task_struct*,void**,void**) ;
 int FUNC_15 (struct task_struct*) ;
 int FUNC_16 (struct task_struct*,struct pid_namespace*) ;
 int FUNC_17 (int ,struct pid_namespace*) ;
 scalar_t__ FUNC_18 (struct task_struct*) ;

void FUNC_19(struct user_namespace *VAR_12,
     struct pid_namespace *VAR_13,
     struct taskstats *VAR_14, struct task_struct *VAR_15)
{
 const struct cred *VAR_16;
 u64 VAR_17, VAR_18, VAR_19, VAR_20;
 u64 VAR_21;

 FUNC_0(VAR_10 < VAR_9);


 VAR_21 = FUNC_7() - VAR_15->start_time;

 FUNC_3(VAR_21, VAR_4);
 VAR_14->ac_etime = VAR_21;

 FUNC_3(VAR_21, VAR_11);
 VAR_14->ac_btime = FUNC_6() - VAR_21;
 if (FUNC_18(VAR_15)) {
  VAR_14->ac_exitcode = VAR_15->exit_code;
  if (VAR_15->flags & VAR_6)
   VAR_14->ac_flag |= VAR_1;
 }
 if (VAR_15->flags & VAR_8)
  VAR_14->ac_flag |= VAR_2;
 if (VAR_15->flags & VAR_5)
  VAR_14->ac_flag |= VAR_0;
 if (VAR_15->flags & VAR_7)
  VAR_14->ac_flag |= VAR_3;
 VAR_14->ac_nice = FUNC_15(VAR_15);
 VAR_14->ac_sched = VAR_15->policy;
 VAR_14->ac_pid = FUNC_16(VAR_15, VAR_13);
 FUNC_10();
 VAR_16 = FUNC_1(VAR_15);
 VAR_14->ac_uid = FUNC_5(VAR_12, VAR_16->uid);
 VAR_14->ac_gid = FUNC_4(VAR_12, VAR_16->gid);
 VAR_14->ac_ppid = FUNC_8(VAR_15) ?
  FUNC_17(FUNC_9(VAR_15->real_parent), VAR_13) : 0;
 FUNC_11();

 FUNC_13(VAR_15, &VAR_17, &VAR_18);
 VAR_14->ac_utime = FUNC_2(VAR_17, VAR_4);
 VAR_14->ac_stime = FUNC_2(VAR_18, VAR_4);

 FUNC_14(VAR_15, &VAR_19, &VAR_20);
 VAR_14->ac_utimescaled = FUNC_2(VAR_19, VAR_4);
 VAR_14->ac_stimescaled = FUNC_2(VAR_20, VAR_4);

 VAR_14->ac_minflt = VAR_15->min_flt;
 VAR_14->ac_majflt = VAR_15->maj_flt;

 FUNC_12(VAR_14->ac_comm, VAR_15->comm, sizeof(VAR_14->ac_comm));
}
