
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ nr_nodes; int show_details; long mb_global; long mb_proc; long mb_proc_locked; long mb_thread; int nr_threads; int nr_proc; int nr_tasks; long bytes_global; long bytes_process; long bytes_process_locked; long bytes_thread; scalar_t__ mb_thread_str; scalar_t__ mb_proc_locked_str; scalar_t__ mb_proc_str; scalar_t__ mb_global_str; scalar_t__ show_quiet; int nr_cpus; } ;
struct TYPE_4__ {int stop_work_mutex; int startup_done_mutex; int startup_mutex; int start_work_mutex; TYPE_1__ p; int data; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (int,int ,int,int ,int ,int ) ;
 void* FUNC_2 (scalar_t__) ;
 TYPE_2__* VAR_2 ;
 int FUNC_3 (int *) ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 () ;
 TYPE_1__ VAR_3 ;
 scalar_t__ FUNC_7 () ;
 scalar_t__ FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 (long) ;
 int FUNC_11 (char*) ;

__attribute__((used)) static int FUNC_12(void)
{
 VAR_2 = (void *)FUNC_1(sizeof(*VAR_2), VAR_0, 1, 0, 0 , 0);


 VAR_2->p = VAR_3;

 VAR_2->p.nr_cpus = FUNC_6();

 VAR_2->p.nr_nodes = FUNC_5() + 1;


 FUNC_0(VAR_2->p.nr_nodes > VAR_1 || VAR_2->p.nr_nodes < 0);

 if (VAR_2->p.show_quiet && !VAR_2->p.show_details)
  VAR_2->p.show_details = -1;


 if (!VAR_2->p.mb_global_str && !VAR_2->p.mb_proc_str && !VAR_2->p.mb_thread_str)
  return -1;

 if (VAR_2->p.mb_global_str) {
  VAR_2->p.mb_global = FUNC_2(VAR_2->p.mb_global_str);
  FUNC_0(VAR_2->p.mb_global < 0);
 }

 if (VAR_2->p.mb_proc_str) {
  VAR_2->p.mb_proc = FUNC_2(VAR_2->p.mb_proc_str);
  FUNC_0(VAR_2->p.mb_proc < 0);
 }

 if (VAR_2->p.mb_proc_locked_str) {
  VAR_2->p.mb_proc_locked = FUNC_2(VAR_2->p.mb_proc_locked_str);
  FUNC_0(VAR_2->p.mb_proc_locked < 0);
  FUNC_0(VAR_2->p.mb_proc_locked > VAR_2->p.mb_proc);
 }

 if (VAR_2->p.mb_thread_str) {
  VAR_2->p.mb_thread = FUNC_2(VAR_2->p.mb_thread_str);
  FUNC_0(VAR_2->p.mb_thread < 0);
 }

 FUNC_0(VAR_2->p.nr_threads <= 0);
 FUNC_0(VAR_2->p.nr_proc <= 0);

 VAR_2->p.nr_tasks = VAR_2->p.nr_proc*VAR_2->p.nr_threads;

 VAR_2->p.bytes_global = VAR_2->p.mb_global *1024L*1024L;
 VAR_2->p.bytes_process = VAR_2->p.mb_proc *1024L*1024L;
 VAR_2->p.bytes_process_locked = VAR_2->p.mb_proc_locked *1024L*1024L;
 VAR_2->p.bytes_thread = VAR_2->p.mb_thread *1024L*1024L;

 VAR_2->data = FUNC_10(VAR_2->p.bytes_global);


 FUNC_3(&VAR_2->start_work_mutex);
 FUNC_3(&VAR_2->startup_mutex);
 FUNC_3(&VAR_2->startup_done_mutex);
 FUNC_3(&VAR_2->stop_work_mutex);

 FUNC_4();

 FUNC_11("#\n");
 if (FUNC_7() || FUNC_8())
  return -1;
 FUNC_11("#\n");

 FUNC_9();

 return 0;
}
