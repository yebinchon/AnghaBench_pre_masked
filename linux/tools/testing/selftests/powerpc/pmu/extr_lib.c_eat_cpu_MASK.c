
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union pipe {int fds; } ;
typedef int pid_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (union pipe,union pipe) ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (int,int ) ;
 int FUNC_7 () ;
 int FUNC_8 (int ) ;
 int FUNC_9 (char*,int) ;
 scalar_t__ FUNC_10 (union pipe,union pipe) ;

pid_t FUNC_11(int (VAR_1)(void))
{
 union pipe VAR_2, VAR_3;
 int VAR_4, VAR_5;
 pid_t VAR_6;

 VAR_4 = FUNC_7();
 FUNC_0(VAR_4 < 0);
 FUNC_0(FUNC_1(VAR_4));

 if (FUNC_8(VAR_2.fds) == -1)
  return -1;

 if (FUNC_8(VAR_3.fds) == -1)
  return -1;

 VAR_6 = FUNC_4();
 if (VAR_6 == 0)
  FUNC_3(FUNC_2(VAR_3, VAR_2));

 if (FUNC_10(VAR_2, VAR_3)) {
  VAR_5 = -1;
  goto out;
 }

 FUNC_9("main test running as pid %d\n", FUNC_5());

 VAR_5 = VAR_1();
out:
 FUNC_6(VAR_6, VAR_0);

 return VAR_5;
}
