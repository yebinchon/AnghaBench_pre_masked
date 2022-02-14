
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* uint32_t ;
struct color_source {void* height; void* width; void* color; } ;
typedef int obs_data_t ;


 int FUNC_0 (int *,char*) ;

__attribute__((used)) static void FUNC_1(void *VAR_0, obs_data_t *VAR_1)
{
 struct color_source *VAR_2 = VAR_0;
 uint32_t VAR_3 = (uint32_t)FUNC_0(VAR_1, "color");
 uint32_t VAR_4 = (uint32_t)FUNC_0(VAR_1, "width");
 uint32_t VAR_5 = (uint32_t)FUNC_0(VAR_1, "height");

 VAR_2->color = VAR_3;
 VAR_2->width = VAR_4;
 VAR_2->height = VAR_5;
}
