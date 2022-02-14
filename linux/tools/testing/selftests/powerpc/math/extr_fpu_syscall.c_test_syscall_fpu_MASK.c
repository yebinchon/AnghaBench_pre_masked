
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pid_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int,int*,int ) ;

int FUNC_5(void)
{



 pid_t VAR_0;
 pid_t VAR_1 = FUNC_2();
 int VAR_2;
 int VAR_3;
 FUNC_0(VAR_1 == -1);

 VAR_0 = FUNC_2();

 if (VAR_0 == -1) {



  VAR_3 = VAR_2 = 1;
 } else {
  VAR_2 = FUNC_3();
  if (VAR_0)
   FUNC_4(VAR_0, &VAR_3, 0);
  else
   FUNC_1(VAR_2);
 }

 VAR_2 |= VAR_3;

 if (VAR_1)
  FUNC_4(VAR_1, &VAR_3, 0);
 else
  FUNC_1(VAR_2);

 FUNC_0(VAR_2 || VAR_3);
 return 0;
}
