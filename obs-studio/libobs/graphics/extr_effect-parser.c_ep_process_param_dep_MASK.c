
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ep_param {int name; } ;
struct ep_func {int param_deps; } ;
struct TYPE_4__ {TYPE_1__* cur_token; } ;
struct effect_parser {TYPE_2__ cfp; } ;
struct TYPE_3__ {int str; } ;


 int FUNC_0 (int ,int *) ;
 struct ep_param* FUNC_1 (struct effect_parser*,int *) ;

__attribute__((used)) static inline bool FUNC_2(struct effect_parser *VAR_0,
     struct ep_func *VAR_1)
{
 struct ep_param *VAR_2 = FUNC_1(VAR_0, &VAR_0->cfp.cur_token->str);
 if (VAR_2)
  FUNC_0(VAR_1->param_deps, &VAR_2->name);
 return VAR_2 != ((void*)0);
}
