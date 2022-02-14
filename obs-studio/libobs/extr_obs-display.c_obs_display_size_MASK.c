
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_3__ {int draw_info_mutex; scalar_t__ cy; scalar_t__ cx; } ;
typedef TYPE_1__ obs_display_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(obs_display_t *VAR_0, uint32_t *VAR_1, uint32_t *VAR_2)
{
 *VAR_1 = 0;
 *VAR_2 = 0;

 if (VAR_0) {
  FUNC_0(&VAR_0->draw_info_mutex);

  *VAR_1 = VAR_0->cx;
  *VAR_2 = VAR_0->cy;

  FUNC_1(&VAR_0->draw_info_mutex);
 }
}
