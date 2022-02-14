
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct sigaction {int (* sa_sigaction ) (int ,int *,int *) ;int sa_mask; } ;
struct perf_cpu_map {int nr; } ;
typedef int pthread_attr_t ;
struct TYPE_7__ {unsigned long tv_sec; } ;
struct TYPE_6__ {unsigned long ops; int tid; int futex; int thread; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* FUNC_0 (int,int) ;
 int FUNC_1 (TYPE_1__*,int ,struct perf_cpu_map*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 () ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_8 (int,char const**,int ,int ,int ) ;
 struct perf_cpu_map* FUNC_9 (int *) ;
 int FUNC_10 () ;
 int FUNC_11 (char*,int,int,unsigned long) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *,int *) ;
 int FUNC_17 (int *,int *) ;
 int FUNC_18 (int ,int *) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int *,int *) ;
 int FUNC_21 (int *) ;
 int FUNC_22 (int *) ;
 TYPE_2__ VAR_10 ;
 int FUNC_23 (int ,struct sigaction*,int *) ;
 int FUNC_24 (int *) ;
 int VAR_11 ;
 int FUNC_25 (int) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_26 (int ,int *,int *) ;
 int FUNC_27 (int *,unsigned long) ;
 int FUNC_28 (int ,int ) ;
 TYPE_1__* VAR_18 ;
 int FUNC_29 (int*) ;

int FUNC_30(int VAR_19, const char **VAR_20)
{
 int VAR_21 = 0;
 unsigned int VAR_22;
 struct sigaction VAR_23;
 pthread_attr_t VAR_24;
 struct perf_cpu_map *VAR_25;

 VAR_19 = FUNC_8(VAR_19, VAR_20, VAR_9, VAR_3, 0);
 if (VAR_19)
  goto err;

 VAR_25 = FUNC_9(((void*)0));
 if (!VAR_25)
  FUNC_2(VAR_0, "calloc");

 FUNC_24(&VAR_23.sa_mask);
 VAR_23.sa_sigaction = FUNC_26;
 FUNC_23(VAR_2, &VAR_23, ((void*)0));

 if (!VAR_8)
  VAR_8 = VAR_25->nr;

 VAR_18 = FUNC_0(VAR_8, sizeof(*VAR_18));
 if (!VAR_18)
  FUNC_2(VAR_0, "calloc");

 if (!VAR_4)
  VAR_5 = VAR_1;

 FUNC_11("Run summary [PID %d]: %d threads doing pi lock/unlock pairing for %d secs.\n\n",
        FUNC_5(), VAR_8, VAR_7);

 FUNC_7(&VAR_17);
 FUNC_20(&VAR_13, ((void*)0));
 FUNC_16(&VAR_14, ((void*)0));
 FUNC_16(&VAR_15, ((void*)0));

 VAR_16 = VAR_8;
 FUNC_13(&VAR_24);
 FUNC_6(&VAR_12, ((void*)0));

 FUNC_1(VAR_18, VAR_24, VAR_25);
 FUNC_12(&VAR_24);

 FUNC_21(&VAR_13);
 while (VAR_16)
  FUNC_17(&VAR_14, &VAR_13);
 FUNC_14(&VAR_15);
 FUNC_22(&VAR_13);

 FUNC_25(VAR_7);
 FUNC_26(0, ((void*)0), ((void*)0));

 for (VAR_22 = 0; VAR_22 < VAR_8; VAR_22++) {
  VAR_21 = FUNC_18(VAR_18[VAR_22].thread, ((void*)0));
  if (VAR_21)
   FUNC_2(VAR_0, "pthread_join");
 }


 FUNC_15(&VAR_14);
 FUNC_15(&VAR_15);
 FUNC_19(&VAR_13);

 for (VAR_22 = 0; VAR_22 < VAR_8; VAR_22++) {
  unsigned long VAR_26 = VAR_18[VAR_22].ops/VAR_10.tv_sec;

  FUNC_27(&VAR_17, VAR_26);
  if (!VAR_11)
   FUNC_11("[thread %3d] futex: %p [ %ld ops/sec ]\n",
          VAR_18[VAR_22].tid, VAR_18[VAR_22].futex, VAR_26);

  if (VAR_6)
   FUNC_29(&VAR_18[VAR_22].futex);
 }

 FUNC_10();

 FUNC_4(VAR_18);
 return VAR_21;
err:
 FUNC_28(VAR_3, VAR_9);
 FUNC_3(VAR_0);
}
