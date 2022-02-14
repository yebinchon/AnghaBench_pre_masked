
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int screen_num; int * display; int * saved_ramps; } ;
typedef TYPE_1__ vidmode_state_t ;


 int * FUNC_0 (int *) ;
 char* FUNC_1 (char*) ;
 int FUNC_2 (int ,char*,char*) ;
 TYPE_1__* FUNC_3 (int) ;
 int VAR_0 ;

__attribute__((used)) static int
FUNC_4(vidmode_state_t **VAR_1)
{
 *VAR_1 = FUNC_3(sizeof(vidmode_state_t));
 if (*VAR_1 == ((void*)0)) return -1;

 vidmode_state_t *VAR_2 = *VAR_1;
 VAR_2->screen_num = -1;
 VAR_2->saved_ramps = ((void*)0);


 VAR_2->display = FUNC_0(((void*)0));
 if (VAR_2->display == ((void*)0)) {
  FUNC_2(VAR_0, FUNC_1("X request failed: %s\n"), "XOpenDisplay");
  return -1;
 }

 return 0;
}
