
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct cf_token* cur_token; } ;
struct effect_parser {TYPE_1__ cfp; } ;
struct darray {int dummy; } ;
struct cf_token {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,char*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (struct cf_token*) ;
 scalar_t__ FUNC_3 (TYPE_1__*,char*) ;
 int FUNC_4 (int,struct darray*,struct cf_token*) ;

__attribute__((used)) static inline int FUNC_5(struct effect_parser *VAR_3,
          struct darray *VAR_4)
{
 struct cf_token VAR_5;
 FUNC_2(&VAR_5);

 while (!FUNC_3(&VAR_3->cfp, ";")) {
  if (FUNC_3(&VAR_3->cfp, "}")) {
   FUNC_0(&VAR_3->cfp, ";");
   return VAR_0;
  }

  FUNC_4(sizeof(struct cf_token), VAR_4,
     VAR_3->cfp.cur_token);
  if (!FUNC_1(&VAR_3->cfp))
   return VAR_1;
 }

 FUNC_4(sizeof(struct cf_token), VAR_4, VAR_3->cfp.cur_token);
 FUNC_4(sizeof(struct cf_token), VAR_4, &VAR_5);
 return VAR_2;
}
