
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ pid_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int ,scalar_t__) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;

pid_t FUNC_6(void)
{
 pid_t VAR_0;

 VAR_0 = FUNC_2();
 FUNC_4(VAR_0 >= 0);
 FUNC_1("[%d] fork() ret: %d\n", FUNC_3(), VAR_0);

 if (!VAR_0) {

  while (1) {
   FUNC_0("child sleeping...\n");
   FUNC_5(30);
  }
 }
 return VAR_0;
}
