
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t ssize_t ;
typedef int pid_t ;
typedef int buf2 ;
typedef int buf1 ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 size_t FUNC_2 (char*,char*,int) ;
 int FUNC_3 (char*,int,char*,int,int) ;
 int FUNC_4 (char*,char*) ;
 size_t FUNC_5 (char*) ;
 int FUNC_6 () ;
 int FUNC_7 () ;

int FUNC_8(void *VAR_0)
{
 char VAR_1[64], VAR_2[64];
 pid_t VAR_3, VAR_4;
 ssize_t VAR_5;

 VAR_3 = FUNC_6();
 VAR_4 = FUNC_7();
 FUNC_3(VAR_1, sizeof(VAR_1), "%u/task/%u", VAR_3, VAR_4);

 VAR_5 = FUNC_2("/proc/thread-self", VAR_2, sizeof(VAR_2));
 FUNC_0(VAR_5 == FUNC_5(VAR_1));
 VAR_2[VAR_5] = '\0';
 FUNC_0(FUNC_4(VAR_1, VAR_2));

 if (VAR_0)
  FUNC_1(0);
 return 0;
}
