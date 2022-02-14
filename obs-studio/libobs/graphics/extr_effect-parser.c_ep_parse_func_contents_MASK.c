
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ep_func {int contents; } ;
struct TYPE_6__ {TYPE_2__* cur_token; } ;
struct effect_parser {TYPE_3__ cfp; } ;
struct TYPE_5__ {scalar_t__ type; int str; } ;
struct TYPE_4__ {scalar_t__ type; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_3__*,char*) ;
 int FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (struct effect_parser*,struct ep_func*) ;
 scalar_t__ FUNC_3 (struct effect_parser*,struct ep_func*) ;
 scalar_t__ FUNC_4 (struct effect_parser*,struct ep_func*) ;
 scalar_t__ FUNC_5 (struct effect_parser*,struct ep_func*) ;

__attribute__((used)) static inline bool FUNC_6(struct effect_parser *VAR_3,
       struct ep_func *VAR_4)
{
 int VAR_5 = 1;

 FUNC_1(&VAR_4->contents, &VAR_3->cfp.cur_token->str);

 while (VAR_5 > 0) {
  if ((VAR_3->cfp.cur_token++)->type == VAR_1)
   return 0;

  if (VAR_3->cfp.cur_token->type == VAR_2 ||
      VAR_3->cfp.cur_token->type == VAR_0) {
  } else if (FUNC_0(&VAR_3->cfp, "{")) {
   VAR_5++;
  } else if (FUNC_0(&VAR_3->cfp, "}")) {
   VAR_5--;
  } else if (FUNC_5(VAR_3, VAR_4) ||
      FUNC_2(VAR_3, VAR_4) ||
      FUNC_4(VAR_3, VAR_4) ||
      FUNC_3(VAR_3, VAR_4)) {
  }

  FUNC_1(&VAR_4->contents, &VAR_3->cfp.cur_token->str);
 }

 return 1;
}
