
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pid_t ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int ,char*,char*,int *) ;
 int FUNC_3 (int) ;
 int FUNC_4 () ;
 int FUNC_5 (int ,char*) ;
 unsigned long FUNC_6 () ;
 int FUNC_7 (char*) ;
 int VAR_2 ;
 int FUNC_8 (unsigned long) ;
 int FUNC_9 (unsigned long) ;
 int FUNC_10 (char*,char*,unsigned long) ;
 int VAR_3 ;
 int FUNC_11 (int,int*,int ) ;

int FUNC_12(void)
{
 unsigned long VAR_4, VAR_5 = 0;
 pid_t VAR_6;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  VAR_5++;
  if (VAR_5 > VAR_1)
   VAR_5 = 0;

  if (VAR_5 == FUNC_6())
   continue;

  if (VAR_4 % 2 == 0)
   FUNC_9(VAR_5);
  else
   FUNC_8(VAR_5);

  VAR_6 = FUNC_4();
  if (VAR_6 == -1) {
   FUNC_7("fork() failed");
   FUNC_3(1);
  } else if (VAR_6) {
   int VAR_7;

   if (FUNC_11(VAR_6, &VAR_7, 0) == -1) {
    FUNC_7("waitpid() failed");
    FUNC_3(1);
   }

   if (!FUNC_1(VAR_7)) {
    FUNC_5(VAR_3, "Child didn't exit cleanly\n");
    FUNC_3(1);
   }

   if (FUNC_0(VAR_7) != 0) {
    FUNC_5(VAR_3, "Child didn't exit cleanly\n");
    return 1;
   }
  } else {
   char VAR_8[16];

   FUNC_10(VAR_8, "%ld", VAR_5);
   FUNC_2(VAR_2, VAR_2, "exec", VAR_8, ((void*)0));
   FUNC_3(1);
  }
 }
 return 0;
}
