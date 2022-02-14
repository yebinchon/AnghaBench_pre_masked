
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct fade_to_color_info {float switch_point; int color; } ;
typedef int obs_data_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int) ;

__attribute__((used)) static void FUNC_2(void *VAR_2, obs_data_t *VAR_3)
{
 struct fade_to_color_info *VAR_4 = VAR_2;
 uint32_t VAR_5 = (uint32_t)FUNC_0(VAR_3, VAR_0);
 uint32_t VAR_6 = (uint32_t)FUNC_0(VAR_3, VAR_1);

 VAR_5 |= 0xFF000000;

 FUNC_1(&VAR_4->color, VAR_5);

 VAR_4->switch_point = (float)VAR_6 / 100.0f;
}
