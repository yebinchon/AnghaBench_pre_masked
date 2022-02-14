
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct gs_effect_param {int type; int default_val; TYPE_3__* effect; int section; int name; } ;
struct ep_param {int name; int type; int default_val; struct gs_effect_param* param; } ;
struct TYPE_5__ {struct ep_param* array; } ;
struct effect_parser {TYPE_3__* effect; TYPE_2__ params; } ;
struct TYPE_4__ {struct gs_effect_param* array; } ;
struct TYPE_6__ {struct gs_effect_param* world; struct gs_effect_param* view_proj; TYPE_1__ params; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct gs_effect_param*,struct ep_param*,size_t,char*) ;
 int FUNC_3 (struct ep_param*,struct gs_effect_param*,struct effect_parser*) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ,char*) ;

__attribute__((used)) static void FUNC_6(struct effect_parser *VAR_1, size_t VAR_2)
{
 struct gs_effect_param *VAR_3;
 struct ep_param *VAR_4;

 VAR_3 = VAR_1->effect->params.array + VAR_2;
 VAR_4 = VAR_1->params.array + VAR_2;
 VAR_4->param = VAR_3;

 VAR_3->name = FUNC_0(VAR_4->name);
 VAR_3->section = VAR_0;
 VAR_3->effect = VAR_1->effect;
 FUNC_1(VAR_3->default_val, VAR_4->default_val);

 VAR_3->type = FUNC_4(VAR_4->type);

 if (FUNC_5(VAR_4->name, "ViewProj") == 0)
  VAR_1->effect->view_proj = VAR_3;
 else if (FUNC_5(VAR_4->name, "World") == 0)
  VAR_1->effect->world = VAR_3;





 FUNC_3(VAR_4, VAR_3, VAR_1);
}
