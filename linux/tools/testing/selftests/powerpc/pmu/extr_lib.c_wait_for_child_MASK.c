
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pid_t ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,int*,int ) ;

int FUNC_4(pid_t VAR_0)
{
 int VAR_1;

 if (FUNC_3(VAR_0, &VAR_1, 0) == -1) {
  FUNC_2("waitpid");
  return 1;
 }

 if (FUNC_1(VAR_1))
  VAR_1 = FUNC_0(VAR_1);
 else
  VAR_1 = 1;

 return VAR_1;
}
