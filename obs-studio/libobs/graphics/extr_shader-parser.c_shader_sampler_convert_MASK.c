
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {char** array; } ;
struct TYPE_3__ {size_t num; char** array; } ;
struct shader_sampler {TYPE_2__ values; TYPE_1__ states; } ;
struct gs_sampler_info {int max_anisotropy; scalar_t__ border_color; void* address_w; void* address_v; void* address_u; int filter; } ;


 scalar_t__ FUNC_0 (char const*,char*) ;
 void* FUNC_1 (char const*) ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (struct gs_sampler_info*,int ,int) ;
 scalar_t__ FUNC_4 (char const*,int *,int) ;

void FUNC_5(struct shader_sampler *VAR_0,
       struct gs_sampler_info *VAR_1)
{
 size_t VAR_2;
 FUNC_3(VAR_1, 0, sizeof(struct gs_sampler_info));

 VAR_1->max_anisotropy = 1;

 for (VAR_2 = 0; VAR_2 < VAR_0->states.num; VAR_2++) {
  const char *VAR_3 = VAR_0->states.array[VAR_2];
  const char *VAR_4 = VAR_0->values.array[VAR_2];

  if (FUNC_0(VAR_3, "Filter") == 0)
   VAR_1->filter = FUNC_2(VAR_4);
  else if (FUNC_0(VAR_3, "AddressU") == 0)
   VAR_1->address_u = FUNC_1(VAR_4);
  else if (FUNC_0(VAR_3, "AddressV") == 0)
   VAR_1->address_v = FUNC_1(VAR_4);
  else if (FUNC_0(VAR_3, "AddressW") == 0)
   VAR_1->address_w = FUNC_1(VAR_4);
  else if (FUNC_0(VAR_3, "MaxAnisotropy") == 0)
   VAR_1->max_anisotropy = (int)FUNC_4(VAR_4, ((void*)0), 10);
  else if (FUNC_0(VAR_3, "BorderColor") == 0)
   VAR_1->border_color = FUNC_4(VAR_4 + 1, ((void*)0), 16);
 }
}
