
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* uint32_t ;
struct obs_scene {int custom_size; void* cy; void* cx; scalar_t__ id_counter; } ;
typedef int obs_data_t ;
typedef int obs_data_array_t ;


 size_t FUNC_0 (int *) ;
 int * FUNC_1 (int *,size_t) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int *,char*) ;
 scalar_t__ FUNC_4 (int *,char*) ;
 scalar_t__ FUNC_5 (int *,char*) ;
 scalar_t__ FUNC_6 (int *,char*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct obs_scene*) ;
 int FUNC_9 (struct obs_scene*,int *) ;

__attribute__((used)) static void FUNC_10(void *VAR_0, obs_data_t *VAR_1)
{
 struct obs_scene *VAR_2 = VAR_0;
 obs_data_array_t *VAR_3 = FUNC_3(VAR_1, "items");
 size_t VAR_4, VAR_5;

 FUNC_8(VAR_2);

 if (!VAR_3)
  return;

 VAR_4 = FUNC_0(VAR_3);

 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
  obs_data_t *VAR_6 = FUNC_1(VAR_3, VAR_5);
  FUNC_9(VAR_2, VAR_6);
  FUNC_7(VAR_6);
 }

 if (FUNC_6(VAR_1, "id_counter"))
  VAR_2->id_counter = FUNC_5(VAR_1, "id_counter");

 if (FUNC_4(VAR_1, "custom_size")) {
  VAR_2->cx = (uint32_t)FUNC_5(VAR_1, "cx");
  VAR_2->cy = (uint32_t)FUNC_5(VAR_1, "cy");
  VAR_2->custom_size = 1;
 }

 FUNC_2(VAR_3);
}
