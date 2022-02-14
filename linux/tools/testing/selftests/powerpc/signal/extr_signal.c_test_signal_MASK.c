
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sigaction {int sa_mask; scalar_t__ sa_flags; int sa_handler; } ;
typedef int pid_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_4 ;
 int FUNC_3 () ;
 int FUNC_4 (int ,char*,...) ;
 int FUNC_5 () ;
 int FUNC_6 (char*) ;
 scalar_t__ FUNC_7 (int ,struct sigaction*,int *) ;
 int FUNC_8 (int *) ;
 int VAR_5 ;
 long FUNC_9 (int,int ) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_10 (int,int *,int ) ;

__attribute__((used)) static int FUNC_11()
{
 int VAR_8;
 struct sigaction VAR_9;
 pid_t VAR_10 = FUNC_5();
 pid_t VAR_11;

 VAR_9.sa_handler = VAR_5;
 VAR_9.sa_flags = 0;
 FUNC_8(&VAR_9.sa_mask);
 if (FUNC_7(VAR_2, &VAR_9, ((void*)0)) < 0) {
  FUNC_6("sigaction SIGUSR1");
  FUNC_2(1);
 }
 if (FUNC_7(VAR_1, &VAR_9, ((void*)0)) < 0) {
  FUNC_6("sigaction SIGALRM");
  FUNC_2(1);
 }


 for(VAR_8 = 0; VAR_8 < 1000; VAR_8++) {
  VAR_11 = FUNC_3();
  if (VAR_11 == -1) {
   FUNC_6("fork");
   FUNC_2(1);
  }
  if (VAR_11 == 0) {
   FUNC_9(VAR_10, VAR_2);
   FUNC_2(1);
  } else {
   FUNC_1(0);
   FUNC_1(2);
   while (!VAR_6 && !VAR_4)
    asm volatile("": : :"memory");
   if (!VAR_6) {
    FUNC_4(VAR_7, "Didn't get signal from child\n");
    FUNC_0(1);
   }

   FUNC_10(VAR_11, ((void*)0), 0);
  }
 }

 for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++) {
  long VAR_12;

  FUNC_1(0);
  VAR_6 = 0;
  FUNC_1(VAR_3);
  VAR_12 = FUNC_9(VAR_10, VAR_2);
  if (VAR_12) {
   FUNC_4(VAR_7, "(%d) Fail reason: %d rc=0x%lx",
     VAR_8, VAR_4, VAR_12);
   FUNC_0(1);
  }
  while (!VAR_6 && !VAR_4)
   asm volatile("": : :"memory");
  if (!VAR_6) {
   FUNC_4(VAR_7, "(%d) Fail reason: %d rc=0x%lx",
     VAR_8, VAR_4, VAR_12);
   FUNC_0(1);
  }
 }

 return 0;
}
