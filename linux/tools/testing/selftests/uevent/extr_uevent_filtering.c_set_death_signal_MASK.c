
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int ,int ,int ,int ,int ) ;

int FUNC_4(void)
{
 int VAR_2;
 pid_t VAR_3;

 VAR_2 = FUNC_3(VAR_0, VAR_1, 0, 0, 0);


 VAR_3 = FUNC_1();
 if (VAR_3 == 1) {
  pid_t VAR_4;

  VAR_4 = FUNC_0();
  VAR_2 = FUNC_2(VAR_4, VAR_1);
 }

 if (VAR_2 < 0)
  return -1;

 return 0;
}
