
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * swap; int draw_callbacks; int draw_info_mutex; int draw_callbacks_mutex; } ;
typedef TYPE_1__ obs_display_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(obs_display_t *VAR_0)
{
 FUNC_2(&VAR_0->draw_callbacks_mutex);
 FUNC_2(&VAR_0->draw_info_mutex);
 FUNC_0(VAR_0->draw_callbacks);

 if (VAR_0->swap) {
  FUNC_1(VAR_0->swap);
  VAR_0->swap = ((void*)0);
 }
}
