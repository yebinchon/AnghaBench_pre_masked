
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int display_count; } ;
typedef TYPE_1__ quartz_state_t ;
typedef int color_setting_t ;


 int FUNC_0 (TYPE_1__*,int,int const*,int) ;

__attribute__((used)) static int
FUNC_1(
 quartz_state_t *VAR_0, const color_setting_t *VAR_1, int VAR_2)
{
 for (int VAR_3 = 0; VAR_3 < VAR_0->display_count; VAR_3++) {
  FUNC_0(
   VAR_0, VAR_3, VAR_1, VAR_2);
 }

 return 0;
}
