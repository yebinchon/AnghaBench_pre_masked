
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int da; } ;
struct TYPE_6__ {int da; } ;
struct gs_effect_pass {TYPE_2__ pixelshader_params; TYPE_1__ vertshader_params; } ;
struct TYPE_9__ {TYPE_3__* effect; } ;
typedef TYPE_4__ gs_technique_t ;
struct TYPE_8__ {struct gs_effect_pass* cur_pass; } ;


 int FUNC_0 (int *) ;

void FUNC_1(gs_technique_t *VAR_0)
{
 if (!VAR_0)
  return;

 struct gs_effect_pass *VAR_1 = VAR_0->effect->cur_pass;
 if (!VAR_1)
  return;

 FUNC_0(&VAR_1->vertshader_params.da);
 FUNC_0(&VAR_1->pixelshader_params.da);
 VAR_0->effect->cur_pass = ((void*)0);
}
