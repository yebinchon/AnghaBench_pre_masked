
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct target {int cpu_list; int system_wide; } ;
struct TYPE_4__ {int write_backward; int type; int precise_ip; int sample_period; } ;
struct TYPE_5__ {TYPE_1__ attr; } ;
struct evsel {TYPE_2__ core; } ;
typedef int sbuf ;
struct TYPE_6__ {int aux_output; int clockid_wrong; int clockid; int write_backward; } ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int ) ;
 int VAR_3 ;
 int FUNC_1 (struct evsel*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 () ;
 int FUNC_4 (struct evsel*) ;
 TYPE_3__ VAR_4 ;
 int FUNC_5 (char*,size_t,char*,...) ;
 int FUNC_6 (int,char*,int) ;
 int FUNC_7 () ;

int FUNC_8(struct evsel *VAR_5, struct target *VAR_6,
         int VAR_7, char *VAR_8, size_t VAR_9)
{
 char VAR_10[VAR_2];
 int VAR_11 = 0;

 switch (VAR_7) {
 case 128:
 case 136:
  if (VAR_7 == 128)
   VAR_11 = FUNC_5(VAR_8, VAR_9,
    "No permission to enable %s event.\n\n",
    FUNC_4(VAR_5));

  return FUNC_5(VAR_8 + VAR_11, VAR_9 - VAR_11,
   "You may not have permission to collect %sstats.\n\n"
   "Consider tweaking /proc/sys/kernel/perf_event_paranoid,\n"
   "which controls use of the performance events system by\n"
   "unprivileged users (without CAP_SYS_ADMIN).\n\n"
   "The current value is %d:\n\n"
   "  -1: Allow use of (almost) all events by all users\n"
   "      Ignore mlock limit after perf_event_mlock_kb without CAP_IPC_LOCK\n"
   ">= 0: Disallow ftrace function tracepoint by users without CAP_SYS_ADMIN\n"
   "      Disallow raw tracepoint access by users without CAP_SYS_ADMIN\n"
   ">= 1: Disallow CPU event access by users without CAP_SYS_ADMIN\n"
   ">= 2: Disallow kernel profiling by users without CAP_SYS_ADMIN\n\n"
   "To make this setting permanent, edit /etc/sysctl.conf too, e.g.:\n\n"
   "	kernel.perf_event_paranoid = -1\n" ,
     VAR_6->system_wide ? "system-wide " : "",
     FUNC_3());
 case 131:
  return FUNC_5(VAR_8, VAR_9, "The %s event is not supported.",
     FUNC_4(VAR_5));
 case 133:
  return FUNC_5(VAR_8, VAR_9, "%s",
    "Too many events are opened.\n"
    "Probably the maximum number of open file descriptors has been reached.\n"
    "Hint: Try again after reducing the number of events.\n"
    "Hint: Try increasing the limit with 'ulimit -n <limit>'");
 case 130:
  if (FUNC_1(VAR_5) &&
      FUNC_0("/proc/sys/kernel/perf_event_max_stack", VAR_0) == 0)
   return FUNC_5(VAR_8, VAR_9,
      "Not enough memory to setup event with callchain.\n"
      "Hint: Try tweaking /proc/sys/kernel/perf_event_max_stack\n"
      "Hint: Current value: %d", FUNC_7());
  break;
 case 132:
  if (VAR_6->cpu_list)
   return FUNC_5(VAR_8, VAR_9, "%s",
  "No such device - did you specify an out-of-range profile CPU?");
  break;
 case 129:
  if (VAR_5->core.attr.sample_period != 0)
   return FUNC_5(VAR_8, VAR_9,
 "%s: PMU Hardware doesn't support sampling/overflow-interrupts. Try 'perf stat'",
      FUNC_4(VAR_5));
  if (VAR_5->core.attr.precise_ip)
   return FUNC_5(VAR_8, VAR_9, "%s",
 "\'precise\' request may not be supported. Try removing 'p' modifier.");

  if (VAR_5->core.attr.type == VAR_1)
   return FUNC_5(VAR_8, VAR_9, "%s",
 "No hardware sampling interrupt available.\n");

  break;
 case 135:
  if (FUNC_2("oprofiled"))
   return FUNC_5(VAR_8, VAR_9,
 "The PMU counters are busy/taken by another profiler.\n"
 "We found oprofile daemon running, please stop it and try again.");
  break;
 case 134:
  if (VAR_5->core.attr.write_backward && VAR_4.write_backward)
   return FUNC_5(VAR_8, VAR_9, "Reading from overwrite event is not supported by this kernel.");
  if (VAR_4.clockid)
   return FUNC_5(VAR_8, VAR_9, "clockid feature not supported.");
  if (VAR_4.clockid_wrong)
   return FUNC_5(VAR_8, VAR_9, "wrong clockid (%d).", VAR_3);
  if (VAR_4.aux_output)
   return FUNC_5(VAR_8, VAR_9, "The 'aux_output' feature is not supported, update the kernel.");
  break;
 default:
  break;
 }

 return FUNC_5(VAR_8, VAR_9,
 "The sys_perf_event_open() syscall returned with %d (%s) for event (%s).\n"
 "/bin/dmesg | grep -i perf may provide additional information.\n",
    VAR_7, FUNC_6(VAR_7, VAR_10, sizeof(VAR_10)),
    FUNC_4(VAR_5));
}
