
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (char*,char*,int) ;
 scalar_t__ FUNC_2 (char*,struct stat*) ;
 scalar_t__ FUNC_3 (char*) ;

void FUNC_4()
{
 struct stat VAR_1;
 char VAR_2[32];

 FUNC_1(VAR_2, "/dev/cpu/%d/msr", VAR_0);
 if (FUNC_2(VAR_2, &VAR_1))
   if (FUNC_3("/sbin/modprobe msr > /dev/null 2>&1"))
   FUNC_0(-5, "no /dev/cpu/0/msr, Try \"# modprobe msr\" ");
}
