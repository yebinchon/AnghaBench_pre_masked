
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ssize_t ;
typedef int pid_t ;
typedef int buf ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ VAR_5 ;
 int FUNC_2 () ;
 int FUNC_3 (int,int ,int ) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (int,char*,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int,int*,int ) ;

int FUNC_8(void)
{
 pid_t VAR_6;
 int VAR_7;

 if (FUNC_6(VAR_0) == -1) {
  if (VAR_5 == VAR_1 || VAR_5 == VAR_2)
   return 4;
  return 1;
 }

 VAR_6 = FUNC_2();
 if (VAR_6 == -1)
  return 1;
 if (VAR_6 == 0) {
  char VAR_8[128], *VAR_9;
  int VAR_10;
  ssize_t VAR_11;

  VAR_10 = FUNC_4("/proc/loadavg" , VAR_3);
  if (VAR_10 == -1)
   return 1;
  VAR_11 = FUNC_5(VAR_10, VAR_8, sizeof(VAR_8));
  if (VAR_11 < 3)
   return 1;
  VAR_9 = VAR_8 + VAR_11;


  if (!(VAR_9[-3] == ' ' && VAR_9[-2] == '1' && VAR_9[-1] == '\n'))
   return 1;

  VAR_6 = FUNC_2();
  if (VAR_6 == -1)
   return 1;
  if (VAR_6 == 0)
   return 0;
  if (FUNC_7(VAR_6, ((void*)0), 0) == -1)
   return 1;

  FUNC_3(VAR_10, 0, VAR_4);
  VAR_11 = FUNC_5(VAR_10, VAR_8, sizeof(VAR_8));
  if (VAR_11 < 3)
   return 1;
  VAR_9 = VAR_8 + VAR_11;


  if (!(VAR_9[-3] == ' ' && VAR_9[-2] == '2' && VAR_9[-1] == '\n'))
   return 1;

  return 0;
 }

 if (FUNC_7(VAR_6, &VAR_7, 0) == -1)
  return 1;
 if (FUNC_1(VAR_7) && FUNC_0(VAR_7) == 0)
  return 0;
 return 1;
}
