
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t ssize_t ;
typedef int pid_t ;
typedef int buf2 ;
typedef int buf1 ;


 int FUNC_0 (int) ;
 size_t FUNC_1 (char*,char*,int) ;
 int FUNC_2 (char*,int,char*,int) ;
 int FUNC_3 (char*,char*) ;
 size_t FUNC_4 (char*) ;
 int FUNC_5 () ;

int FUNC_6(void)
{
 char VAR_0[64], VAR_1[64];
 pid_t VAR_2;
 ssize_t VAR_3;

 VAR_2 = FUNC_5();
 FUNC_2(VAR_0, sizeof(VAR_0), "%u", VAR_2);

 VAR_3 = FUNC_1("/proc/self", VAR_1, sizeof(VAR_1));
 FUNC_0(VAR_3 == FUNC_4(VAR_0));
 VAR_1[VAR_3] = '\0';
 FUNC_0(FUNC_3(VAR_0, VAR_1));

 return 0;
}
