
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pid_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int,int*,int ) ;

int FUNC_3(pid_t VAR_2)
{
 int VAR_3, VAR_4;

again:
 VAR_4 = FUNC_2(VAR_2, &VAR_3, 0);
 if (VAR_4 == -1) {
  if (VAR_1 == VAR_0)
   goto again;

  return -1;
 }

 if (VAR_4 != VAR_2)
  goto again;

 if (!FUNC_1(VAR_3) || FUNC_0(VAR_3) != 0)
  return -1;

 return 0;
}
