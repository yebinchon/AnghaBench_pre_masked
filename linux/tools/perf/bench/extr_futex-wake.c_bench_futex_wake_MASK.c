
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {unsigned int tv_usec; } ;
struct sigaction {int sa_sigaction; int sa_mask; } ;
struct perf_cpu_map {int dummy; } ;
typedef int pthread_attr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_0 (int *,int ,struct perf_cpu_map*) ;
 int * FUNC_1 (int,int) ;
 int VAR_6 ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_5 (int *,int,int ) ;
 int FUNC_6 () ;
 int FUNC_7 (struct timeval*,int *) ;
 int FUNC_8 (int *) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_9 (int,char const**,int ,int ,int ) ;
 struct perf_cpu_map* FUNC_10 (int *) ;
 int FUNC_11 () ;
 int FUNC_12 (char*,unsigned int,unsigned int,...) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *,int *) ;
 int FUNC_18 (int *,int *) ;
 int FUNC_19 (int ,int *) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int *,int *) ;
 int FUNC_22 (int *) ;
 int FUNC_23 (int *) ;
 int FUNC_24 (int ,struct sigaction*,int *) ;
 int FUNC_25 (int *) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 int FUNC_26 (struct timeval*,struct timeval*,struct timeval*) ;
 int VAR_19 ;
 int FUNC_27 (int *,unsigned int) ;
 int FUNC_28 (int ,int ) ;
 int FUNC_29 (int) ;
 int VAR_20 ;
 int VAR_21 ;
 int * VAR_22 ;

int FUNC_30(int VAR_23, const char **VAR_24)
{
 int VAR_25 = 0;
 unsigned int VAR_26, VAR_27;
 struct sigaction VAR_28;
 pthread_attr_t VAR_29;
 struct perf_cpu_map *VAR_30;

 VAR_23 = FUNC_9(VAR_23, VAR_24, VAR_13, VAR_4, 0);
 if (VAR_23) {
  FUNC_28(VAR_4, VAR_13);
  FUNC_3(VAR_0);
 }

 VAR_30 = FUNC_10(((void*)0));
 if (!VAR_30)
  FUNC_2(VAR_0, "calloc");

 FUNC_25(&VAR_28.sa_mask);
 VAR_28.sa_sigaction = VAR_19;
 FUNC_24(VAR_2, &VAR_28, ((void*)0));

 if (!VAR_11)
  VAR_11 = VAR_10;

 VAR_22 = FUNC_1(VAR_11, sizeof(*VAR_22));
 if (!VAR_22)
  FUNC_2(VAR_0, "calloc");

 if (!VAR_7)
  VAR_9 = VAR_1;

 FUNC_12("Run summary [PID %d]: blocking on %d threads (at [%s] futex %p), "
        "waking up %d at a time.\n\n",
        FUNC_6(), VAR_11, VAR_7 ? "shared":"private", &VAR_8, VAR_12);

 FUNC_8(&VAR_21);
 FUNC_8(&VAR_20);
 FUNC_14(&VAR_29);
 FUNC_21(&VAR_15, ((void*)0));
 FUNC_17(&VAR_16, ((void*)0));
 FUNC_17(&VAR_17, ((void*)0));

 for (VAR_27 = 0; VAR_27 < VAR_5 && !VAR_6; VAR_27++) {
  unsigned int VAR_31 = 0;
  struct timeval VAR_32, VAR_33, VAR_34;


  FUNC_0(VAR_22, VAR_29, VAR_30);


  FUNC_22(&VAR_15);
  while (VAR_18)
   FUNC_18(&VAR_16, &VAR_15);
  FUNC_15(&VAR_17);
  FUNC_23(&VAR_15);

  FUNC_29(100000);


  FUNC_7(&VAR_32, ((void*)0));
  while (VAR_31 != VAR_11)
   VAR_31 += FUNC_5(&VAR_8, VAR_12, VAR_9);
  FUNC_7(&VAR_33, ((void*)0));
  FUNC_26(&VAR_33, &VAR_32, &VAR_34);

  FUNC_27(&VAR_21, VAR_31);
  FUNC_27(&VAR_20, VAR_34.tv_usec);

  if (!VAR_14) {
   FUNC_12("[Run %d]: Wokeup %d of %d threads in %.4f ms\n",
          VAR_27 + 1, VAR_31, VAR_11, VAR_34.tv_usec / (double)VAR_3);
  }

  for (VAR_26 = 0; VAR_26 < VAR_11; VAR_26++) {
   VAR_25 = FUNC_19(VAR_22[VAR_26], ((void*)0));
   if (VAR_25)
    FUNC_2(VAR_0, "pthread_join");
  }

 }


 FUNC_16(&VAR_16);
 FUNC_16(&VAR_17);
 FUNC_20(&VAR_15);
 FUNC_13(&VAR_29);

 FUNC_11();

 FUNC_4(VAR_22);
 return VAR_25;
}
