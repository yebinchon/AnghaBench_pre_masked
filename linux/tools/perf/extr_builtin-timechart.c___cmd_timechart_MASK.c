
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timechart {double last_time; double first_time; int tool; int force; } ;
struct TYPE_2__ {int env; } ;
struct perf_session {int data; TYPE_1__ header; } ;
struct perf_data {int force; int mode; int path; } ;
struct evsel_str_handler {char* member_0; int member_1; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct perf_session*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct perf_session*) ;
 int FUNC_2 (struct timechart*) ;
 int VAR_3 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*,int ,struct timechart*,int ) ;
 int FUNC_5 (struct perf_session*) ;
 int FUNC_6 (struct perf_session*,char*) ;
 struct perf_session* FUNC_7 (struct perf_data*,int,int *) ;
 int FUNC_8 (struct perf_session*) ;
 scalar_t__ FUNC_9 (struct perf_session*,struct evsel_str_handler const*) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (char*,double,char const*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_12 (struct timechart*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (struct timechart*,char const*) ;

__attribute__((used)) static int FUNC_15(struct timechart *VAR_24, const char *VAR_25)
{
 const struct evsel_str_handler VAR_26[] = {
  { "power:cpu_idle", VAR_18 },
  { "power:cpu_frequency", VAR_17 },
  { "sched:sched_wakeup", VAR_23 },
  { "sched:sched_switch", VAR_22 },






  { "syscalls:sys_enter_read", VAR_5 },
  { "syscalls:sys_enter_pread64", VAR_5 },
  { "syscalls:sys_enter_readv", VAR_5 },
  { "syscalls:sys_enter_preadv", VAR_5 },
  { "syscalls:sys_enter_write", VAR_9 },
  { "syscalls:sys_enter_pwrite64", VAR_9 },
  { "syscalls:sys_enter_writev", VAR_9 },
  { "syscalls:sys_enter_pwritev", VAR_9 },
  { "syscalls:sys_enter_sync", VAR_7 },
  { "syscalls:sys_enter_sync_file_range", VAR_7 },
  { "syscalls:sys_enter_fsync", VAR_7 },
  { "syscalls:sys_enter_msync", VAR_7 },
  { "syscalls:sys_enter_recvfrom", VAR_6 },
  { "syscalls:sys_enter_recvmmsg", VAR_6 },
  { "syscalls:sys_enter_recvmsg", VAR_6 },
  { "syscalls:sys_enter_sendto", VAR_8 },
  { "syscalls:sys_enter_sendmsg", VAR_8 },
  { "syscalls:sys_enter_sendmmsg", VAR_8 },
  { "syscalls:sys_enter_epoll_pwait", VAR_4 },
  { "syscalls:sys_enter_epoll_wait", VAR_4 },
  { "syscalls:sys_enter_poll", VAR_4 },
  { "syscalls:sys_enter_ppoll", VAR_4 },
  { "syscalls:sys_enter_pselect6", VAR_4 },
  { "syscalls:sys_enter_select", VAR_4 },

  { "syscalls:sys_exit_read", VAR_11 },
  { "syscalls:sys_exit_pread64", VAR_11 },
  { "syscalls:sys_exit_readv", VAR_11 },
  { "syscalls:sys_exit_preadv", VAR_11 },
  { "syscalls:sys_exit_write", VAR_15 },
  { "syscalls:sys_exit_pwrite64", VAR_15 },
  { "syscalls:sys_exit_writev", VAR_15 },
  { "syscalls:sys_exit_pwritev", VAR_15 },
  { "syscalls:sys_exit_sync", VAR_13 },
  { "syscalls:sys_exit_sync_file_range", VAR_13 },
  { "syscalls:sys_exit_fsync", VAR_13 },
  { "syscalls:sys_exit_msync", VAR_13 },
  { "syscalls:sys_exit_recvfrom", VAR_12 },
  { "syscalls:sys_exit_recvmmsg", VAR_12 },
  { "syscalls:sys_exit_recvmsg", VAR_12 },
  { "syscalls:sys_exit_sendto", VAR_14 },
  { "syscalls:sys_exit_sendmsg", VAR_14 },
  { "syscalls:sys_exit_sendmmsg", VAR_14 },
  { "syscalls:sys_exit_epoll_pwait", VAR_10 },
  { "syscalls:sys_exit_epoll_wait", VAR_10 },
  { "syscalls:sys_exit_poll", VAR_10 },
  { "syscalls:sys_exit_ppoll", VAR_10 },
  { "syscalls:sys_exit_pselect6", VAR_10 },
  { "syscalls:sys_exit_select", VAR_10 },
 };
 struct perf_data VAR_27 = {
  .path = VAR_3,
  .mode = VAR_2,
  .force = VAR_24->force,
 };

 struct perf_session *VAR_28 = FUNC_7(&VAR_27, 0,
        &VAR_24->tool);
 int VAR_29 = -VAR_0;

 if (FUNC_0(VAR_28))
  return FUNC_1(VAR_28);

 FUNC_13(&VAR_28->header.env);

 (void)FUNC_4(&VAR_28->header,
         FUNC_3(VAR_28->data),
         VAR_24,
         VAR_16);

 if (!FUNC_6(VAR_28, "timechart record"))
  goto out_delete;

 if (FUNC_9(VAR_28,
         VAR_26)) {
  FUNC_10("Initializing session tracepoint handlers failed\n");
  goto out_delete;
 }

 VAR_29 = FUNC_8(VAR_28);
 if (VAR_29)
  goto out_delete;

 FUNC_2(VAR_24);

 FUNC_12(VAR_24);

 FUNC_14(VAR_24, VAR_25);

 FUNC_11("Written %2.1f seconds of trace to %s.\n",
  (VAR_24->last_time - VAR_24->first_time) / (double)VAR_1, VAR_25);
out_delete:
 FUNC_5(VAR_28);
 return VAR_29;
}
