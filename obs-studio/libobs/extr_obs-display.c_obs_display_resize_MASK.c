
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef void* uint32_t ;
struct TYPE_3__ {int size_changed; int draw_info_mutex; void* cy; void* cx; } ;
typedef TYPE_1__ obs_display_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(obs_display_t *VAR_0, uint32_t VAR_1, uint32_t VAR_2)
{
 if (!VAR_0)
  return;

 FUNC_0(&VAR_0->draw_info_mutex);

 VAR_0->cx = VAR_1;
 VAR_0->cy = VAR_2;
 VAR_0->size_changed = 1;

 FUNC_1(&VAR_0->draw_info_mutex);
}
