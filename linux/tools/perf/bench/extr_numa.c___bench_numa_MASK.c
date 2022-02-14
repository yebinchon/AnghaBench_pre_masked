
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef double u64 ;
typedef int tname ;
struct timeval {double tv_sec; double tv_usec; } ;
struct thread_data {double runtime_ns; double speed_gbs; double system_time_ns; double user_time_ns; } ;
typedef scalar_t__ pid_t ;
struct TYPE_3__ {int nr_proc; double nr_tasks; int show_details; int nr_threads; scalar_t__ measure_convergence; scalar_t__ serialize_startup; } ;
struct TYPE_4__ {double nr_tasks_started; double bytes_done; TYPE_1__ p; struct thread_data* threads; int startup_done_mutex; int start_work_mutex; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 double VAR_1 ;
 double VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_4 ;
 int FUNC_2 () ;
 int FUNC_3 (char*,int,scalar_t__) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 () ;
 int FUNC_7 (scalar_t__*) ;
 TYPE_2__* VAR_5 ;
 int FUNC_8 (struct timeval*,int *) ;
 scalar_t__ FUNC_9 () ;
 int FUNC_10 (char*,int ,int) ;
 double FUNC_11 (double,double) ;
 int FUNC_12 (char const*,double,char*,char*,char*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (char*,int,char*,int,int) ;
 int VAR_6 ;
 int FUNC_16 (struct timeval*,struct timeval*,struct timeval*) ;
 int FUNC_17 (char*,...) ;
 int FUNC_18 (int ) ;
 scalar_t__ FUNC_19 (scalar_t__,int*,int ) ;
 int FUNC_20 (int) ;
 scalar_t__* FUNC_21 (int) ;

__attribute__((used)) static int FUNC_22(const char *VAR_7)
{
 struct timeval VAR_8, VAR_9, VAR_10;
 u64 VAR_11, VAR_12;
 pid_t *VAR_13, VAR_14, VAR_15;
 double VAR_16;
 double VAR_17;
 double VAR_18;
 double VAR_19;
 int VAR_20;
 double VAR_21;
 int VAR_22, VAR_23, VAR_24;

 if (FUNC_9())
  return -1;

 VAR_13 = FUNC_21(VAR_5->p.nr_proc * sizeof(*VAR_13));
 VAR_14 = -1;


 FUNC_13(&VAR_5->start_work_mutex);

 if (VAR_5->p.serialize_startup) {
  FUNC_17(" #\n");
  FUNC_17(" # Startup synchronization: ..."); FUNC_5(VAR_6);
 }

 FUNC_8(&VAR_8, ((void*)0));

 for (VAR_22 = 0; VAR_22 < VAR_5->p.nr_proc; VAR_22++) {
  VAR_14 = FUNC_6();
  FUNC_3(" # process %2d: PID %d\n", VAR_22, VAR_14);

  FUNC_0(VAR_14 < 0);
  if (!VAR_14) {

   FUNC_20(VAR_22);

   FUNC_4(0);
  }
  VAR_13[VAR_22] = VAR_14;

 }

 while (VAR_5->nr_tasks_started != VAR_5->p.nr_tasks)
  FUNC_18(VAR_3);

 FUNC_0(VAR_5->nr_tasks_started != VAR_5->p.nr_tasks);

 if (VAR_5->p.serialize_startup) {
  double VAR_25;

  FUNC_13(&VAR_5->startup_done_mutex);


  FUNC_14(&VAR_5->start_work_mutex);


  FUNC_13(&VAR_5->startup_done_mutex);

  FUNC_8(&VAR_9, ((void*)0));

  FUNC_16(&VAR_9, &VAR_8, &VAR_10);

  VAR_25 = VAR_10.tv_sec * VAR_1;
  VAR_25 += VAR_10.tv_usec * VAR_2;
  VAR_25 /= VAR_1;

  FUNC_17(" threads initialized in %.6f seconds.\n", VAR_25);
  FUNC_17(" #\n");

  VAR_8 = VAR_9;
  FUNC_14(&VAR_5->startup_done_mutex);
 } else {
  FUNC_8(&VAR_8, ((void*)0));
 }




 for (VAR_22 = 0; VAR_22 < VAR_5->p.nr_proc; VAR_22++) {
  VAR_15 = FUNC_19(VAR_13[VAR_22], &VAR_20, 0);
  FUNC_0(VAR_15 < 0);
  FUNC_0(!FUNC_1(VAR_20));

 }

 VAR_12 = 0;
 VAR_11 = -1LL;

 for (VAR_23 = 0; VAR_23 < VAR_5->p.nr_tasks; VAR_23++) {
  u64 VAR_26 = VAR_5->threads[VAR_23].runtime_ns;

  VAR_12 += VAR_26;
  VAR_11 = FUNC_11(VAR_26, VAR_11);
 }

 FUNC_8(&VAR_9, ((void*)0));
 FUNC_16(&VAR_9, &VAR_8, &VAR_10);

 FUNC_0(VAR_4 != VAR_0);

 FUNC_17("\n ###\n");
 FUNC_17("\n");

 VAR_18 = VAR_10.tv_sec * VAR_1;
 VAR_18 += VAR_10.tv_usec * VAR_2;
 VAR_18 /= VAR_1;

 VAR_19 = VAR_11 / VAR_1;

 VAR_21 = VAR_5->bytes_done;
 VAR_17 = (double)VAR_12 / VAR_5->p.nr_tasks / VAR_1;

 if (VAR_5->p.measure_convergence) {
  FUNC_12(VAR_7, VAR_18,
   "secs,", "NUMA-convergence-latency", "secs latency to NUMA-converge");
 }

 FUNC_12(VAR_7, VAR_18,
  "secs,", "runtime-max/thread", "secs slowest (max) thread-runtime");

 FUNC_12(VAR_7, VAR_19,
  "secs,", "runtime-min/thread", "secs fastest (min) thread-runtime");

 FUNC_12(VAR_7, VAR_17,
  "secs,", "runtime-avg/thread", "secs average thread-runtime");

 VAR_16 = (VAR_18 - VAR_19)/2.0;
 FUNC_12(VAR_7, VAR_16 / VAR_18 * 100.0,
  "%,", "spread-runtime/thread", "% difference between max/avg runtime");

 FUNC_12(VAR_7, VAR_21 / VAR_5->p.nr_tasks / 1e9,
  "GB,", "data/thread", "GB data processed, per thread");

 FUNC_12(VAR_7, VAR_21 / 1e9,
  "GB,", "data-total", "GB data processed, total");

 FUNC_12(VAR_7, VAR_18 * VAR_1 / (VAR_21 / VAR_5->p.nr_tasks),
  "nsecs,", "runtime/byte/thread","nsecs/byte/thread runtime");

 FUNC_12(VAR_7, VAR_21 / VAR_5->p.nr_tasks / 1e9 / VAR_18,
  "GB/sec,", "thread-speed", "GB/sec/thread speed");

 FUNC_12(VAR_7, VAR_21 / VAR_18 / 1e9,
  "GB/sec,", "total-speed", "GB/sec total speed");

 if (VAR_5->p.show_details >= 2) {
  char VAR_27[14 + 2 * 10 + 1];
  struct thread_data *VAR_28;
  for (VAR_24 = 0; VAR_24 < VAR_5->p.nr_proc; VAR_24++) {
   for (VAR_23 = 0; VAR_23 < VAR_5->p.nr_threads; VAR_23++) {
    FUNC_10(VAR_27, 0, sizeof(VAR_27));
    VAR_28 = VAR_5->threads + VAR_24*VAR_5->p.nr_threads + VAR_23;
    FUNC_15(VAR_27, sizeof(VAR_27), "process%d:thread%d", VAR_24, VAR_23);
    FUNC_12(VAR_27, VAR_28->speed_gbs,
     "GB/sec", "thread-speed", "GB/sec/thread speed");
    FUNC_12(VAR_27, VAR_28->system_time_ns / VAR_1,
     "secs", "thread-system-time", "system CPU time/thread");
    FUNC_12(VAR_27, VAR_28->user_time_ns / VAR_1,
     "secs", "thread-user-time", "user CPU time/thread");
   }
  }
 }

 FUNC_7(VAR_13);

 FUNC_2();

 return 0;
}
