
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct thread_data {int bind_cpumask; } ;
struct TYPE_3__ {int nr_tasks; int nr_cpus; int cpu_list_str; } ;
struct TYPE_4__ {TYPE_1__ p; struct thread_data* threads; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (char*) ;
 TYPE_2__* VAR_0 ;
 int FUNC_6 (char*,int,...) ;
 char* FUNC_7 (int ) ;
 char* FUNC_8 (char**,char*) ;
 char* FUNC_9 (char*,char*) ;
 int FUNC_10 (char*,...) ;

__attribute__((used)) static int FUNC_11(void)
{
 struct thread_data *VAR_1;
 char *VAR_2, *VAR_3;
 int VAR_4;

 if (!VAR_0->p.cpu_list_str)
  return 0;

 FUNC_4("g->p.nr_tasks: %d\n", VAR_0->p.nr_tasks);

 VAR_2 = VAR_3 = FUNC_7(VAR_0->p.cpu_list_str);
 VAR_4 = 0;

 FUNC_0(!VAR_3);

 FUNC_10("# binding tasks to CPUs:\n");
 FUNC_10("#  ");

 while (1) {
  int VAR_5, VAR_6, VAR_7;
  char *VAR_8, *VAR_9, *VAR_10, *VAR_11, *VAR_12;
  int VAR_13;
  int VAR_14;
  int VAR_15;

  VAR_8 = FUNC_8(&VAR_3, ",");
  if (!VAR_8)
   break;

  VAR_9 = FUNC_9(VAR_8, "-");

  FUNC_4("\ntoken: {%s}, end: {%s}\n", VAR_8, VAR_9);
  if (!VAR_9) {

   VAR_6 = VAR_7 = FUNC_3(VAR_8);
  } else {

   VAR_6 = FUNC_3(VAR_8);
   VAR_7 = FUNC_3(VAR_9 + 1);
  }

  VAR_14 = 1;
  VAR_10 = FUNC_9(VAR_8, "#");
  if (VAR_10) {
   VAR_14 = FUNC_3(VAR_10 + 1);
   FUNC_0(VAR_14 <= 0 || VAR_14 >= VAR_0->p.nr_cpus);
  }






  VAR_13 = 1;
  VAR_11 = FUNC_9(VAR_8, "_");
  if (VAR_11) {
   VAR_13 = FUNC_3(VAR_11 + 1);
   FUNC_0(VAR_13 <= 0 || VAR_13 > VAR_0->p.nr_cpus);
  }


  VAR_15 = 1;
  VAR_12 = FUNC_9(VAR_8, "x");
  if (VAR_12) {
   VAR_15 = FUNC_3(VAR_12 + 1);
   FUNC_0(VAR_15 <= 0);
  }

  FUNC_4("CPUs: %d_%d-%d#%dx%d\n", VAR_6, VAR_13, VAR_7, VAR_14, VAR_15);

  if (VAR_6 >= VAR_0->p.nr_cpus || VAR_7 >= VAR_0->p.nr_cpus) {
   FUNC_6("\nTest not applicable, system has only %d CPUs.\n", VAR_0->p.nr_cpus);
   return -1;
  }

  FUNC_0(VAR_6 < 0 || VAR_7 < 0);
  FUNC_0(VAR_6 > VAR_7);

  for (VAR_5 = VAR_6; VAR_5 <= VAR_7; VAR_5 += VAR_14) {
   int VAR_16;

   for (VAR_16 = 0; VAR_16 < VAR_15; VAR_16++) {
    int VAR_17;

    if (VAR_4 >= VAR_0->p.nr_tasks) {
     FUNC_6("\n# NOTE: ignoring bind CPUs starting at CPU#%d\n #", VAR_5);
     goto out;
    }
    VAR_1 = VAR_0->threads + VAR_4;

    if (VAR_4)
     FUNC_10(",");
    if (VAR_13 > 1) {
     FUNC_10("%2d/%d", VAR_5, VAR_13);
    } else {
     FUNC_10("%2d", VAR_5);
    }

    FUNC_2(&VAR_1->bind_cpumask);
    for (VAR_17 = VAR_5; VAR_17 < VAR_5+VAR_13; VAR_17++) {
     FUNC_0(VAR_17 < 0 || VAR_17 >= VAR_0->p.nr_cpus);
     FUNC_1(VAR_17, &VAR_1->bind_cpumask);
    }
    VAR_4++;
   }
  }
 }
out:

 FUNC_10("\n");

 if (VAR_4 < VAR_0->p.nr_tasks)
  FUNC_6("# NOTE: %d tasks bound, %d tasks unbound\n", VAR_4, VAR_0->p.nr_tasks - VAR_4);

 FUNC_5(VAR_2);
 return 0;
}
