
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gs_effect_param {int type; int default_val; int effect; int section; int name; } ;
struct ep_param {int type; int default_val; int name; } ;
struct effect_parser {int effect; } ;
struct darray {size_t num; scalar_t__ array; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int,struct darray*,size_t) ;
 int FUNC_3 (struct gs_effect_param*,struct ep_param*,size_t,char*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct darray *VAR_1,
       struct darray *VAR_2,
       struct effect_parser *VAR_3)
{
 FUNC_2(sizeof(struct gs_effect_param), VAR_2,
        VAR_1->num);

 size_t VAR_4;
 for (VAR_4 = 0; VAR_4 < VAR_1->num; VAR_4++) {
  struct gs_effect_param *VAR_5 =
   ((struct gs_effect_param *)VAR_2->array) + VAR_4;
  struct ep_param *VAR_6 =
   ((struct ep_param *)VAR_1->array) + VAR_4;

  VAR_5->name = FUNC_0(VAR_6->name);
  VAR_5->section = VAR_0;
  VAR_5->effect = VAR_3->effect;
  FUNC_1(VAR_5->default_val, VAR_6->default_val);

  VAR_5->type = FUNC_4(VAR_6->type);




 }
}
