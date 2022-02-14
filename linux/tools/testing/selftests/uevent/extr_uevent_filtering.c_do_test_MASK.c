
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wait_val ;
typedef int uint64_t ;
struct timespec {int tv_sec; scalar_t__ tv_nsec; } ;
typedef int sigset_t ;
typedef scalar_t__ pid_t ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (scalar_t__,int ) ;
 int FUNC_4 (int,int *,int) ;
 int FUNC_5 () ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,int *,int *) ;
 int FUNC_9 (int *,int *,struct timespec*) ;
 int VAR_10 ;
 char* FUNC_10 (scalar_t__) ;
 int FUNC_11 (int) ;
 scalar_t__ FUNC_12 (unsigned long,int,int) ;
 int FUNC_13 (unsigned long) ;
 int FUNC_14 (scalar_t__) ;

__attribute__((used)) static int FUNC_15(unsigned long VAR_11, unsigned long VAR_12,
     bool VAR_13, int VAR_14)
{
 int VAR_15;
 uint64_t VAR_16;
 pid_t VAR_17;
 sigset_t VAR_18;
 sigset_t VAR_19;
 struct timespec VAR_20;

 FUNC_7(&VAR_18);
 FUNC_6(&VAR_18, VAR_5);

 VAR_15 = FUNC_8(VAR_8, &VAR_18, &VAR_19);
 if (VAR_15 < 0) {
  FUNC_2(VAR_10, "%s- Failed to block SIGCHLD\n", FUNC_10(VAR_9));
  return -1;
 }

 VAR_17 = FUNC_1();
 if (VAR_17 < 0) {
  FUNC_2(VAR_10, "%s - Failed to fork() new process\n", FUNC_10(VAR_9));
  return -1;
 }

 if (VAR_17 == 0) {

  VAR_15 = FUNC_5();
  if (VAR_15 < 0) {
   FUNC_2(VAR_10, "Failed to set PR_SET_PDEATHSIG to SIGKILL\n");
   FUNC_0(VAR_3);
  }

  if (VAR_11 & VAR_1) {
   VAR_15 = FUNC_13(VAR_1);
   if (VAR_15 < 0) {
    FUNC_2(VAR_10,
     "%s - Failed to unshare user namespace\n",
     FUNC_10(VAR_9));
    FUNC_0(VAR_3);
   }
  }

  if (VAR_11 & VAR_0) {
   VAR_15 = FUNC_13(VAR_0);
   if (VAR_15 < 0) {
    FUNC_2(VAR_10,
     "%s - Failed to unshare network namespace\n",
     FUNC_10(VAR_9));
    FUNC_0(VAR_3);
   }
  }

  if (FUNC_12(VAR_12, VAR_13, VAR_14) < 0)
   FUNC_0(VAR_3);

  FUNC_0(VAR_4);
 }

 VAR_15 = FUNC_4(VAR_14, &VAR_16, sizeof(VAR_16));
 if (VAR_15 != sizeof(VAR_16)) {
  FUNC_2(VAR_10, "Failed to synchronize with child process\n");
  FUNC_0(VAR_3);
 }




 VAR_15 = FUNC_11(10);
 if (VAR_15 < 0)
  FUNC_2(VAR_10, "Failed triggering uevents\n");





 VAR_20.tv_sec = 2;
 VAR_20.tv_nsec = 0;

again:
 VAR_15 = FUNC_9(&VAR_18, ((void*)0), &VAR_20);
 if (VAR_15 < 0) {
  if (VAR_9 == VAR_2)
   goto again;

  if (!VAR_13)
   VAR_15 = FUNC_3(VAR_17, VAR_6);
  else
   VAR_15 = FUNC_3(VAR_17, VAR_7);
  if (VAR_15 < 0)
   return -1;
 }

 VAR_15 = FUNC_14(VAR_17);
 if (VAR_15 < 0)
  return -1;

 return VAR_15;
}
