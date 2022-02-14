
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ssize_t ;
typedef int buf2 ;
typedef int buf1 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (char*,int ,int) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (char*,int,char*,long,long,long,long) ;
 scalar_t__ FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (char*,char*,scalar_t__) ;
 scalar_t__ FUNC_5 (int,char*,int) ;

int FUNC_6(void)
{
 char VAR_4[64];
 char VAR_5[64];
 int VAR_6;
 ssize_t VAR_7;

 VAR_6 = FUNC_1("/proc/self/syscall", VAR_1);
 if (VAR_6 == -1) {
  if (VAR_3 == VAR_0)
   return 4;
  return 1;
 }


 FUNC_2(VAR_4, sizeof(VAR_4), "%ld 0x%lx 0x%lx 0x%lx",
   (long)VAR_2, (long)VAR_6, (long)VAR_5, (long)sizeof(VAR_5));

 FUNC_0(VAR_5, 0, sizeof(VAR_5));
 VAR_7 = FUNC_5(VAR_6, VAR_5, sizeof(VAR_5));
 if (VAR_7 < 0)
  return 1;
 if (VAR_7 < FUNC_3(VAR_4))
  return 1;
 if (FUNC_4(VAR_4, VAR_5, FUNC_3(VAR_4)) != 0)
  return 1;

 return 0;
}
