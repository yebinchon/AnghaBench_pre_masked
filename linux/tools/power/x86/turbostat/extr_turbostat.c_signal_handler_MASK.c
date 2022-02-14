
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_1 (int VAR_3)
{
 switch (VAR_3) {
 case 129:
  VAR_1 = 1;
  if (VAR_0)
   FUNC_0(VAR_2, " SIGINT\n");
  break;
 case 128:
  if (VAR_0 > 1)
   FUNC_0(VAR_2, "SIGUSR1\n");
  break;
 }
}
