
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pid_t ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int FUNC_2 (char*) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int,int *,int ) ;

__attribute__((used)) static void FUNC_6(void)
{
 while (1) {
  pid_t VAR_2 = FUNC_4();
  if (VAR_2 == -1) {
   FUNC_2("fork");
   FUNC_1(1);
  }
  if (VAR_2 == 0) {
   if (VAR_0)
    FUNC_3();
   FUNC_0(0);
  }
  VAR_2 = FUNC_5(VAR_2, ((void*)0), 0);
  if (VAR_2 == -1) {
   FUNC_2("waitpid");
   FUNC_1(1);
  }
  VAR_1++;
 }
}
