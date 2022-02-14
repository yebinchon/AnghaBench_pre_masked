
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sigaction {scalar_t__ sa_flags; int sa_mask; int sa_handler; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int) ;
 int FUNC_5 (char*,int,int,...) ;
 int FUNC_6 (char*,int,int,...) ;
 int FUNC_7 (int,int,int,int) ;
 int FUNC_8 (int ,struct sigaction*,int *) ;
 int VAR_1 ;
 int FUNC_9 (int *) ;

int FUNC_10(int VAR_2, char **VAR_3)
{
 int VAR_4;
 bool VAR_5 = 1;
 struct sigaction VAR_6;
 int VAR_7, VAR_8, VAR_9;
 bool VAR_10;

 FUNC_3();
 FUNC_4(213);

 VAR_6.sa_handler = VAR_1;
 FUNC_9(&VAR_6.sa_mask);
 VAR_6.sa_flags = 0;
 FUNC_8(VAR_0, &VAR_6, ((void*)0));
 for (VAR_9 = 1; VAR_9 <= 32; VAR_9 = VAR_9*2) {
  for (VAR_7 = 0; VAR_7 <= 32; VAR_7 = VAR_7 + VAR_9) {
   for (VAR_8 = VAR_7 - VAR_9; VAR_8 <= VAR_7 + VAR_9; VAR_8 = VAR_8 + VAR_9) {
    VAR_10 = FUNC_7(VAR_9, FUNC_0(VAR_9, 8), VAR_7, VAR_8);
    if ((VAR_10 && VAR_7 == VAR_8) ||
        (!VAR_10 && VAR_7 != VAR_8))
     FUNC_6(
      "Test size = %d write offset = %d watchpoint offset = %d\n",
      VAR_9, VAR_7, VAR_8);
    else {
     FUNC_5(
      "Test size = %d write offset = %d watchpoint offset = %d\n",
      VAR_9, VAR_7, VAR_8);
     VAR_5 = 0;
    }
   }
  }
 }

 for (VAR_9 = 1; VAR_9 <= 32; VAR_9 = VAR_9*2) {
  if (FUNC_7(VAR_9, 8, -VAR_9, -8))
   FUNC_6(
    "Test size = %d write offset = %d watchpoint offset = -8\n",
    VAR_9, -VAR_9);
  else {
   FUNC_5(
    "Test size = %d write offset = %d watchpoint offset = -8\n",
    VAR_9, -VAR_9);
   VAR_5 = 0;
  }
 }

 if (VAR_5)
  FUNC_2();
 else
  FUNC_1();
}
