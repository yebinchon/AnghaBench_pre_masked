
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sbuf ;
typedef scalar_t__ pid_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ VAR_7 ;
 int FUNC_3 (int ,char*,char*) ;
 int VAR_8 ;
 char* FUNC_4 (scalar_t__,char*,int) ;
 scalar_t__ FUNC_5 (scalar_t__,int*,int ) ;

__attribute__((used)) static int FUNC_6(pid_t VAR_9)
{
 char VAR_10[VAR_6];

 for (;;) {
  int VAR_11, VAR_12;
  pid_t VAR_13 = FUNC_5(VAR_9, &VAR_11, 0);

  if (VAR_13 < 0) {
   if (VAR_7 == VAR_0)
    continue;
   FUNC_3(VAR_8, " Error: waitpid failed (%s)",
    FUNC_4(VAR_7, VAR_10, sizeof(VAR_10)));
   return -VAR_2;
  }
  if (VAR_13 != VAR_9)
   return -VAR_5;
  if (FUNC_2(VAR_11))
   return -VAR_4;

  if (!FUNC_1(VAR_11))
   return -VAR_3;
  VAR_12 = FUNC_0(VAR_11);
  switch (VAR_12) {
  case 127:
   return -VAR_1;
  case 0:
   return 0;
  default:
   return -VAR_12;
  }
 }
}
