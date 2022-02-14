
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct obs_x264 {size_t extra_data_size; int * extra_data; int context; } ;



__attribute__((used)) static bool FUNC_0(void *VAR_0, uint8_t **VAR_1, size_t *VAR_2)
{
 struct obs_x264 *VAR_3 = VAR_0;

 if (!VAR_3->context)
  return 0;

 *VAR_1 = VAR_3->extra_data;
 *VAR_2 = VAR_3->extra_data_size;
 return 1;
}
