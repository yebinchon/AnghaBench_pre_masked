
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
typedef int gs_texture_t ;
struct TYPE_4__ {int array_count; int const type; int cur_value; } ;
typedef TYPE_1__ gs_sparam_t ;
 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,void const*,size_t) ;
 int FUNC_2 (TYPE_1__*,int *) ;

void FUNC_3(gs_sparam_t *VAR_1, const void *VAR_2, size_t VAR_3)
{
 int VAR_4 = VAR_1->array_count;
 size_t VAR_5 = 0;
 if (!VAR_4)
  VAR_4 = 1;

 switch ((uint32_t)VAR_1->type) {
 case 137:
  VAR_5 = sizeof(float);
  break;
 case 138:
 case 136:
  VAR_5 = sizeof(int);
  break;
 case 135:
  VAR_5 = sizeof(int) * 2;
  break;
 case 134:
  VAR_5 = sizeof(int) * 3;
  break;
 case 133:
  VAR_5 = sizeof(int) * 4;
  break;
 case 130:
  VAR_5 = sizeof(float) * 2;
  break;
 case 129:
  VAR_5 = sizeof(float) * 3;
  break;
 case 128:
  VAR_5 = sizeof(float) * 4;
  break;
 case 132:
  VAR_5 = sizeof(float) * 4 * 4;
  break;
 case 131:
  VAR_5 = sizeof(void *);
  break;
 default:
  VAR_5 = 0;
 }

 VAR_5 *= VAR_4;
 if (!VAR_5)
  return;

 if (VAR_5 != VAR_3) {
  FUNC_0(VAR_0, "gs_shader_set_val (GL): Size of shader "
    "param does not match the size of the input");
  return;
 }

 if (VAR_1->type == 131)
  FUNC_2(VAR_1, *(gs_texture_t **)VAR_2);
 else
  FUNC_1(VAR_1->cur_value, VAR_2, VAR_3);
}
