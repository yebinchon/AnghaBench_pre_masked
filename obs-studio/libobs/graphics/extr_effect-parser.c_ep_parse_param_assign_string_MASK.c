
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ep_param {int default_val; } ;
struct TYPE_7__ {TYPE_2__* cur_token; } ;
struct effect_parser {TYPE_3__ cfp; } ;
struct TYPE_5__ {int len; int array; } ;
struct TYPE_6__ {TYPE_1__ str; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*,int ,char*,char*) ;
 int FUNC_4 (int ,char*,scalar_t__) ;
 scalar_t__ FUNC_5 (char*) ;

__attribute__((used)) static inline int FUNC_6(struct effect_parser *VAR_3,
            struct ep_param *VAR_4)
{
 int VAR_5;
 char *VAR_6 = ((void*)0);

 if (!FUNC_2(&VAR_3->cfp))
  return VAR_1;

 VAR_5 = FUNC_3(&VAR_3->cfp, VAR_0, "string", ";");
 if (VAR_5 != VAR_2)
  return VAR_5;

 VAR_6 = FUNC_1(VAR_3->cfp.cur_token->str.array,
    VAR_3->cfp.cur_token->str.len);

 if (VAR_6) {
  FUNC_4(VAR_4->default_val, VAR_6, FUNC_5(VAR_6) + 1);
  FUNC_0(VAR_6);
 }

 return VAR_2;
}
