
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pid_t ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 () ;
 int FUNC_4 (int ,char*,...) ;
 unsigned long FUNC_5 () ;
 unsigned long FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (char*) ;
 int FUNC_9 (unsigned long) ;
 int FUNC_10 (unsigned long) ;
 int FUNC_11 (int ) ;
 int VAR_2 ;
 int FUNC_12 (int,int*,int ) ;

int FUNC_13(void)
{
 unsigned long VAR_3, VAR_4 = 0;
 pid_t VAR_5;

 FUNC_11(FUNC_7());
 FUNC_9(VAR_4);

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  unsigned long VAR_6, VAR_7;

  VAR_4++;
  if (VAR_4 > VAR_1)
   VAR_4 = 0;

  if (VAR_3 % 2 == 0)
   FUNC_10(VAR_4);
  else
   FUNC_9(VAR_4);

  VAR_5 = FUNC_3();
  if (VAR_5 == -1) {
   FUNC_8("fork() failed");
   FUNC_2(1);
  } else if (VAR_5) {
   int VAR_8;

   if (FUNC_12(VAR_5, &VAR_8, 0) == -1) {
    FUNC_8("waitpid() failed");
    FUNC_2(1);
   }

   if (!FUNC_1(VAR_8)) {
    FUNC_4(VAR_2, "Child didn't exit cleanly\n");
    FUNC_2(1);
   }

   if (FUNC_0(VAR_8) != 0) {
    FUNC_4(VAR_2, "Child didn't exit cleanly\n");
    return 1;
   }
  } else {
   VAR_6 = FUNC_5();
   if (VAR_6 != VAR_4) {
    FUNC_4(VAR_2, "Kernel DSCR should be %ld "
     "but is %ld\n", VAR_4, VAR_6);
    FUNC_2(1);
   }

   VAR_7 = FUNC_6();
   if (VAR_7 != VAR_4) {
    FUNC_4(VAR_2, "User DSCR should be %ld "
     "but is %ld\n", VAR_4, VAR_7);
    FUNC_2(1);
   }
   FUNC_2(0);
  }
 }
 return 0;
}
