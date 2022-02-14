
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sigaction {int sa_mask; scalar_t__ sa_flags; int sa_handler; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int VAR_3 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int) ;
 int VAR_4 ;
 int FUNC_6 (int ,char*,int,int,long,long) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 (char*) ;
 int FUNC_10 (char*,int ,int ) ;
 scalar_t__ FUNC_11 (int ,struct sigaction*,int *) ;
 int FUNC_12 (int *) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_13 () ;
 long FUNC_14 (int ,int ,long*) ;

__attribute__((used)) static int FUNC_15()
{
 int VAR_8;
 struct sigaction VAR_9;

 VAR_9.sa_handler = VAR_5;
 VAR_9.sa_flags = 0;
 FUNC_12(&VAR_9.sa_mask);
 if (FUNC_11(VAR_2, &VAR_9, ((void*)0)) < 0) {
  FUNC_9("sigaction SIGUSR1");
  FUNC_5(1);
 }
 if (FUNC_11(VAR_1, &VAR_9, ((void*)0)) < 0) {
  FUNC_9("sigaction SIGALRM");
  FUNC_5(1);
 }

 FUNC_1(!FUNC_8());

 for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++) {




  long VAR_10 = 0xdead;
  long VAR_11 = 0xbeef;

  FUNC_4(0);
  VAR_6 = 0;
  FUNC_4(VAR_3);
  FUNC_0(FUNC_13());
  VAR_11 = FUNC_14(FUNC_7(), VAR_2, &VAR_10);
  if (VAR_10 == 0xdead)







   continue;

  if (VAR_11 || VAR_10) {

   FUNC_10("TEXASR 0x%016lx, TFIAR 0x%016lx\n",
     FUNC_2(), FUNC_3());
   FUNC_6(VAR_7, "(%d) Fail reason: %d rc=0x%lx ret=0x%lx\n",
     VAR_8, VAR_4, VAR_11, VAR_10);
   FUNC_0(VAR_10);
  }
  while(!VAR_6 && !VAR_4)
   asm volatile("": : :"memory");
  if (!VAR_6) {
   FUNC_6(VAR_7, "(%d) Fail reason: %d rc=0x%lx ret=0x%lx\n",
     VAR_8, VAR_4, VAR_11, VAR_10);
   FUNC_0(VAR_4);
  }
 }

 return 0;
}
