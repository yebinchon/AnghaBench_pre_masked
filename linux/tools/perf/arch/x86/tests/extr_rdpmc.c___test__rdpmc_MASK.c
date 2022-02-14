
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct sigaction {scalar_t__ sa_flags; int sa_sigaction; int sa_mask; } ;
struct perf_event_attr {int exclude_kernel; int config; int type; } ;
typedef int sbuf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int VAR_6 ;
 void* FUNC_1 (int *,int ,int ,int ,int,int ) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (void*,int ) ;
 int VAR_7 ;
 int FUNC_4 () ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (char*,int,...) ;
 int VAR_8 ;
 int FUNC_7 (int ,struct sigaction*,int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ,char*,int) ;
 int FUNC_10 (struct perf_event_attr*,int ,int,int,int ) ;

__attribute__((used)) static int FUNC_11(void)
{
 volatile int VAR_9 = 0;
 u64 VAR_10, VAR_11 = 1000;
 int VAR_12;
 int VAR_13;
 void *VAR_14;
 struct perf_event_attr VAR_15 = {
  .type = VAR_2,
  .config = VAR_1,
  .exclude_kernel = 1,
 };
 u64 VAR_16 = 0;
        struct sigaction VAR_17;
 char VAR_18[VAR_5];

 FUNC_8(&VAR_17.sa_mask);
 VAR_17.sa_sigaction = VAR_8;
 VAR_17.sa_flags = 0;
 FUNC_7(VAR_4, &VAR_17, ((void*)0));

 VAR_13 = FUNC_10(&VAR_15, 0, -1, -1,
     FUNC_4());
 if (VAR_13 < 0) {
  FUNC_6("Error: sys_perf_event_open() syscall returned "
         "with %d (%s)\n", VAR_13,
         FUNC_9(VAR_6, VAR_18, sizeof(VAR_18)));
  return -1;
 }

 VAR_14 = FUNC_1(((void*)0), VAR_7, VAR_3, VAR_0, VAR_13, 0);
 if (VAR_14 == (void *)(-1)) {
  FUNC_6("Error: mmap() syscall returned with (%s)\n",
         FUNC_9(VAR_6, VAR_18, sizeof(VAR_18)));
  goto out_close;
 }

 for (VAR_12 = 0; VAR_12 < 6; VAR_12++) {
  u64 VAR_19, VAR_20, VAR_21;

  VAR_19 = FUNC_2(VAR_14);

  for (VAR_10 = 0; VAR_10 < VAR_11; VAR_10++)
   VAR_9++;

  VAR_20 = FUNC_2(VAR_14);
  VAR_11 *= 10;

  VAR_21 = VAR_20 - VAR_19;
  FUNC_5("%14d: %14Lu\n", VAR_12, (long long)VAR_21);

  VAR_16 += VAR_21;
 }

 FUNC_3(VAR_14, VAR_7);
 FUNC_5("   ");
out_close:
 FUNC_0(VAR_13);

 if (!VAR_16)
  return -1;

 return 0;
}
