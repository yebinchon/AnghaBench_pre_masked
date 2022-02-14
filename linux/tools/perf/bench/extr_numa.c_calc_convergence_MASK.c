
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct thread_data {int curr_cpu; unsigned int loops_done; } ;
struct TYPE_3__ {int nr_nodes; int nr_tasks; int nr_proc; scalar_t__ measure_convergence; int show_convergence; } ;
struct TYPE_4__ {int all_converged; int stop_work; TYPE_1__ p; struct thread_data* threads; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 double VAR_1 ;
 int FUNC_1 (int*) ;
 int FUNC_2 (int) ;
 TYPE_2__* VAR_2 ;
 int FUNC_3 (int) ;
 void* FUNC_4 (int,int) ;
 void* FUNC_5 (int,int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (char*,...) ;

__attribute__((used)) static void FUNC_8(double VAR_3, double *VAR_4)
{
 unsigned int VAR_5, VAR_6;
 int VAR_7;
 int VAR_8[VAR_0];
 int VAR_9;
 int VAR_10;
 int VAR_11;
 int VAR_12;
 int VAR_13;
 int VAR_14;
 int VAR_15;
 int VAR_16;
 int VAR_17;

 if (!VAR_2->p.show_convergence && !VAR_2->p.measure_convergence)
  return;

 for (VAR_15 = 0; VAR_15 < VAR_2->p.nr_nodes; VAR_15++)
  VAR_8[VAR_15] = 0;

 VAR_5 = -1;
 VAR_6 = 0;

 for (VAR_17 = 0; VAR_17 < VAR_2->p.nr_tasks; VAR_17++) {
  struct thread_data *VAR_18 = VAR_2->threads + VAR_17;
  unsigned int VAR_19;

  VAR_16 = VAR_18->curr_cpu;


  if (VAR_16 < 0)
   continue;

  VAR_15 = FUNC_6(VAR_16);

  VAR_8[VAR_15]++;

  VAR_19 = VAR_18->loops_done;
  VAR_5 = FUNC_5(VAR_19, VAR_5);
  VAR_6 = FUNC_4(VAR_19, VAR_6);
 }

 VAR_11 = 0;
 VAR_10 = VAR_2->p.nr_tasks;
 VAR_13 = 0;

 for (VAR_15 = 0; VAR_15 < VAR_2->p.nr_nodes; VAR_15++) {
  if (!FUNC_3(VAR_15))
   continue;
  VAR_14 = VAR_8[VAR_15];
  VAR_10 = FUNC_5(VAR_14, VAR_10);
  VAR_11 = FUNC_4(VAR_14, VAR_11);
  VAR_13 += VAR_14;
 }
 FUNC_0(VAR_10 > VAR_11);

 FUNC_0(VAR_13 > VAR_2->p.nr_tasks);

 if (0 && (VAR_13 < VAR_2->p.nr_tasks))
  return;






 VAR_7 = 0;

 for (VAR_15 = 0; VAR_15 < VAR_2->p.nr_nodes; VAR_15++) {
  int VAR_20;

  if (!FUNC_3(VAR_15))
   continue;
  VAR_20 = FUNC_2(VAR_15);
  VAR_14 = VAR_8[VAR_15];
  FUNC_7(" %2d/%-2d", VAR_14, VAR_20);

  VAR_7 += VAR_20;
 }

 VAR_9 = VAR_11 - VAR_10;

 FUNC_7(" [%2d/%-2d]", VAR_9, VAR_7);

 FUNC_7(" l:%3d-%-3d (%3d)",
  VAR_5, VAR_6, VAR_6-VAR_5);

 if (VAR_5 && VAR_6) {
  double VAR_21 = 1.0 - (double)VAR_5/VAR_6;

  FUNC_7(" [%4.1f%%]", VAR_21 * 100.0);
 }

 FUNC_1(&VAR_12);

 if (VAR_12 && VAR_7 == VAR_2->p.nr_proc) {
  if (!*VAR_4) {
   *VAR_4 = VAR_3;
   FUNC_7(" (%6.1fs converged)\n", *VAR_4 / VAR_1);
   if (VAR_2->p.measure_convergence) {
    VAR_2->all_converged = 1;
    VAR_2->stop_work = 1;
   }
  }
 } else {
  if (*VAR_4) {
   FUNC_7(" (%6.1fs de-converged)", VAR_3 / VAR_1);
   *VAR_4 = 0;
  }
  FUNC_7("\n");
 }
}
