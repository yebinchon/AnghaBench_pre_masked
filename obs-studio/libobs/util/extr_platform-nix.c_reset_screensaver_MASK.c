
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int pid_t ;
struct TYPE_3__ {int attr; } ;
typedef TYPE_1__ os_inhibit_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 int VAR_1 ;
 int FUNC_1 (int *,char*,int *,int *,char**,int ) ;
 int FUNC_2 (int ,int*,int ) ;

__attribute__((used)) static void FUNC_3(os_inhibit_t *VAR_2)
{
 char *VAR_3[3] = {(char *)"xdg-screensaver", (char *)"reset", ((void*)0)};
 pid_t VAR_4;

 int VAR_5 = FUNC_1(&VAR_4, "xdg-screensaver", ((void*)0), &VAR_2->attr, VAR_3,
          VAR_1);
 if (VAR_5 == 0) {
  int VAR_6;
  while (FUNC_2(VAR_4, &VAR_6, 0) == -1)
   ;
 } else {
  FUNC_0(VAR_0, "Failed to create xdg-screensaver: %d", VAR_5);
 }
}
