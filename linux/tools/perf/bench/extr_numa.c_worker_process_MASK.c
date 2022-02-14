
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct thread_data {int process_nr; int thread_nr; int task_nr; int curr_cpu; int * process_lock; int val; int * process_data; int bind_cpumask; int bind_node; } ;
typedef int pthread_t ;
typedef int pthread_mutex_t ;
struct TYPE_3__ {int nr_threads; int show_details; int bytes_process; } ;
struct TYPE_4__ {TYPE_1__ p; struct thread_data* threads; int data; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 TYPE_2__* VAR_0 ;
 int FUNC_5 (char*,int,int ,int *) ;
 int FUNC_6 (int *,int *,int ,struct thread_data*) ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 () ;
 int FUNC_10 (char*,int) ;
 int * FUNC_11 (int ) ;
 int VAR_1 ;
 int * FUNC_12 (int) ;

__attribute__((used)) static void FUNC_13(int VAR_2)
{
 pthread_mutex_t VAR_3;
 struct thread_data *VAR_4;
 pthread_t *VAR_5;
 u8 *VAR_6;
 int VAR_7;
 int VAR_8;
 int VAR_9;

 FUNC_8(&VAR_3, ((void*)0));
 FUNC_10("process %d", VAR_2);





 VAR_7 = VAR_2*VAR_0->p.nr_threads;
 VAR_4 = VAR_0->threads + VAR_7;

 FUNC_2(VAR_4->bind_node);
 FUNC_1(VAR_4->bind_cpumask);

 VAR_5 = FUNC_12(VAR_0->p.nr_threads * sizeof(pthread_t));
 VAR_6 = FUNC_11(VAR_0->p.bytes_process);

 if (VAR_0->p.show_details >= 3) {
  FUNC_5(" # process %2d global mem: %p, process mem: %p\n",
   VAR_2, VAR_0->data, VAR_6);
 }

 for (VAR_9 = 0; VAR_9 < VAR_0->p.nr_threads; VAR_9++) {
  VAR_7 = VAR_2*VAR_0->p.nr_threads + VAR_9;
  VAR_4 = VAR_0->threads + VAR_7;

  VAR_4->process_data = VAR_6;
  VAR_4->process_nr = VAR_2;
  VAR_4->thread_nr = VAR_9;
  VAR_4->task_nr = VAR_7;
  VAR_4->val = FUNC_9();
  VAR_4->curr_cpu = -1;
  VAR_4->process_lock = &VAR_3;

  VAR_8 = FUNC_6(VAR_5 + VAR_9, ((void*)0), VAR_1, VAR_4);
  FUNC_0(VAR_8);
 }

 for (VAR_9 = 0; VAR_9 < VAR_0->p.nr_threads; VAR_9++) {
                VAR_8 = FUNC_7(VAR_5[VAR_9], ((void*)0));
  FUNC_0(VAR_8);
 }

 FUNC_4(VAR_6, VAR_0->p.bytes_process);
 FUNC_3(VAR_5);
}
