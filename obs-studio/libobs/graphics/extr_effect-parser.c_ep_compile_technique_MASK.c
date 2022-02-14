
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_10__ {size_t num; } ;
struct gs_effect_technique {TYPE_5__ passes; int name; TYPE_3__* effect; int section; } ;
struct TYPE_9__ {int num; } ;
struct ep_technique {TYPE_4__ passes; int name; } ;
struct TYPE_7__ {struct ep_technique* array; } ;
struct effect_parser {TYPE_3__* effect; TYPE_2__ techniques; } ;
struct TYPE_6__ {struct gs_effect_technique* array; } ;
struct TYPE_8__ {TYPE_1__ techniques; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,size_t,int ,size_t) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_5__,int ) ;
 int FUNC_3 (struct effect_parser*,struct gs_effect_technique*,struct ep_technique*,size_t) ;

__attribute__((used)) static inline bool FUNC_4(struct effect_parser *VAR_2, size_t VAR_3)
{
 struct gs_effect_technique *VAR_4;
 struct ep_technique *VAR_5;
 bool VAR_6 = 1;
 size_t VAR_7;

 VAR_4 = VAR_2->effect->techniques.array + VAR_3;
 VAR_5 = VAR_2->techniques.array + VAR_3;

 VAR_4->name = FUNC_1(VAR_5->name);
 VAR_4->section = VAR_0;
 VAR_4->effect = VAR_2->effect;

 FUNC_2(VAR_4->passes, VAR_5->passes.num);






 for (VAR_7 = 0; VAR_7 < VAR_4->passes.num; VAR_7++) {
  if (!FUNC_3(VAR_2, VAR_4, VAR_5, VAR_7))
   VAR_6 = 0;
 }

 return VAR_6;
}
