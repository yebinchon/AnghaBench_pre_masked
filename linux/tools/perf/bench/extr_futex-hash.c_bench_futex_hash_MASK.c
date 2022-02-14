
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct worker {int nr; unsigned int tid; unsigned long ops; int * futex; int thread; int * map; } ;
struct sigaction {int (* sa_sigaction ) (int ,int *,int *) ;int sa_mask; } ;
struct perf_cpu_map {int nr; unsigned int tid; unsigned long ops; int * futex; int thread; int * map; } ;
typedef int pthread_attr_t ;
typedef int cpu_set_t ;
struct TYPE_2__ {unsigned long tv_sec; } ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_2 (int,int) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct worker*) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_6 () ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int *) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_9 (int,char const**,int ,int ,int ) ;
 struct worker* FUNC_10 (int *) ;
 int FUNC_11 () ;
 int FUNC_12 (char*,int,int,int,...) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *,int,int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *,int *) ;
 int FUNC_19 (int *,int *) ;
 int FUNC_20 (int *,int *,int ,void*) ;
 int FUNC_21 (int ,int *) ;
 int FUNC_22 (int *) ;
 int FUNC_23 (int *,int *) ;
 int FUNC_24 (int *) ;
 int FUNC_25 (int *) ;
 TYPE_1__ VAR_10 ;
 int FUNC_26 (int ,struct sigaction*,int *) ;
 int FUNC_27 (int *) ;
 int VAR_11 ;
 int FUNC_28 (int) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_29 (int ,int *,int *) ;
 int FUNC_30 (int *,unsigned long) ;
 int FUNC_31 (int ,int ) ;
 int VAR_18 ;
 int FUNC_32 (int **) ;

int FUNC_33(int VAR_19, const char **VAR_20)
{
 int VAR_21 = 0;
 cpu_set_t VAR_22;
 struct sigaction VAR_23;
 unsigned int VAR_24;
 pthread_attr_t VAR_25;
 struct worker *VAR_26 = ((void*)0);
 struct perf_cpu_map *VAR_27;

 VAR_19 = FUNC_9(VAR_19, VAR_20, VAR_9, VAR_3, 0);
 if (VAR_19) {
  FUNC_31(VAR_3, VAR_9);
  FUNC_4(VAR_0);
 }

 VAR_27 = FUNC_10(((void*)0));
 if (!VAR_27)
  goto errmem;

 FUNC_27(&VAR_23.sa_mask);
 VAR_23.sa_sigaction = FUNC_29;
 FUNC_26(VAR_2, &VAR_23, ((void*)0));

 if (!VAR_8)
  VAR_8 = VAR_27->nr;

 VAR_26 = FUNC_2(VAR_8, sizeof(*VAR_26));
 if (!VAR_26)
  goto errmem;

 if (!VAR_4)
  VAR_5 = VAR_1;

 FUNC_12("Run summary [PID %d]: %d threads, each operating on %d [%s] futexes for %d secs.\n\n",
        FUNC_6(), VAR_8, VAR_6, VAR_4 ? "shared":"private", VAR_7);

 FUNC_8(&VAR_17);
 FUNC_23(&VAR_13, ((void*)0));
 FUNC_18(&VAR_14, ((void*)0));
 FUNC_18(&VAR_15, ((void*)0));

 VAR_16 = VAR_8;
 FUNC_14(&VAR_25);
 FUNC_7(&VAR_12, ((void*)0));
 for (VAR_24 = 0; VAR_24 < VAR_8; VAR_24++) {
  VAR_26[VAR_24].tid = VAR_24;
  VAR_26[VAR_24].futex = FUNC_2(VAR_6, sizeof(*VAR_26[VAR_24].futex));
  if (!VAR_26[VAR_24].futex)
   goto errmem;

  FUNC_1(&VAR_22);
  FUNC_0(VAR_27->map[VAR_24 % VAR_27->nr], &VAR_22);

  VAR_21 = FUNC_15(&VAR_25, sizeof(cpu_set_t), &VAR_22);
  if (VAR_21)
   FUNC_3(VAR_0, "pthread_attr_setaffinity_np");

  VAR_21 = FUNC_20(&VAR_26[VAR_24].thread, &VAR_25, VAR_18,
         (void *)(struct worker *) &VAR_26[VAR_24]);
  if (VAR_21)
   FUNC_3(VAR_0, "pthread_create");

 }
 FUNC_13(&VAR_25);

 FUNC_24(&VAR_13);
 while (VAR_16)
  FUNC_19(&VAR_14, &VAR_13);
 FUNC_16(&VAR_15);
 FUNC_25(&VAR_13);

 FUNC_28(VAR_7);
 FUNC_29(0, ((void*)0), ((void*)0));

 for (VAR_24 = 0; VAR_24 < VAR_8; VAR_24++) {
  VAR_21 = FUNC_21(VAR_26[VAR_24].thread, ((void*)0));
  if (VAR_21)
   FUNC_3(VAR_0, "pthread_join");
 }


 FUNC_17(&VAR_14);
 FUNC_17(&VAR_15);
 FUNC_22(&VAR_13);

 for (VAR_24 = 0; VAR_24 < VAR_8; VAR_24++) {
  unsigned long VAR_28 = VAR_26[VAR_24].ops/VAR_10.tv_sec;
  FUNC_30(&VAR_17, VAR_28);
  if (!VAR_11) {
   if (VAR_6 == 1)
    FUNC_12("[thread %2d] futex: %p [ %ld ops/sec ]\n",
           VAR_26[VAR_24].tid, VAR_26[VAR_24].futex[0], VAR_28);
   else
    FUNC_12("[thread %2d] futexes: %p ... %p [ %ld ops/sec ]\n",
           VAR_26[VAR_24].tid, VAR_26[VAR_24].futex[0],
           VAR_26[VAR_24].futex[VAR_6-1], VAR_28);
  }

  FUNC_32(&VAR_26[VAR_24].futex);
 }

 FUNC_11();

 FUNC_5(VAR_26);
 FUNC_5(VAR_27);
 return VAR_21;
errmem:
 FUNC_3(VAR_0, "calloc");
}
