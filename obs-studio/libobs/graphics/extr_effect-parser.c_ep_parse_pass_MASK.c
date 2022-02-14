
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct ep_pass {int name; } ;
struct TYPE_9__ {TYPE_2__* cur_token; } ;
struct effect_parser {TYPE_3__ cfp; } ;
struct cf_token {int str; } ;
struct TYPE_7__ {int len; int array; } ;
struct TYPE_8__ {TYPE_1__ str; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*,struct cf_token*) ;
 int FUNC_4 (TYPE_3__*,char*) ;
 int FUNC_5 (struct effect_parser*,struct ep_pass*) ;
 scalar_t__ FUNC_6 (int *,char*) ;

__attribute__((used)) static int FUNC_7(struct effect_parser *VAR_4, struct ep_pass *VAR_5)
{
 struct cf_token VAR_6;

 if (!FUNC_4(&VAR_4->cfp, "pass"))
  return VAR_3;

 if (!FUNC_2(&VAR_4->cfp))
  return VAR_1;

 if (!FUNC_4(&VAR_4->cfp, "{")) {
  VAR_5->name = FUNC_0(VAR_4->cfp.cur_token->str.array,
           VAR_4->cfp.cur_token->str.len);
  if (!FUNC_2(&VAR_4->cfp))
   return VAR_1;
 }

 if (!FUNC_3(&VAR_4->cfp, &VAR_6))
  return VAR_1;

 while (FUNC_6(&VAR_6.str, "}") != 0) {
  int VAR_7 = FUNC_5(VAR_4, VAR_5);
  if (VAR_7 < 0 && VAR_7 != VAR_0)
   return VAR_7;

  if (!FUNC_3(&VAR_4->cfp, &VAR_6))
   return VAR_1;
 }


 FUNC_1(&VAR_4->cfp);

 return VAR_2;
}
