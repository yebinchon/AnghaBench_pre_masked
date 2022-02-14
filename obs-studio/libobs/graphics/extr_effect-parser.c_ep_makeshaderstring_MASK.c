
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct ep_param {int dummy; } ;
struct ep_func {int dummy; } ;
struct effect_parser {int dummy; } ;
struct dstr {int dummy; } ;
struct darray {struct cf_token* array; } ;
struct TYPE_5__ {int * array; } ;
struct cf_token {scalar_t__ type; TYPE_1__ str; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct dstr*,TYPE_1__*) ;
 int FUNC_1 (struct dstr*) ;
 int FUNC_2 (struct dstr*) ;
 struct ep_func* FUNC_3 (struct effect_parser*,TYPE_1__*) ;
 struct ep_param* FUNC_4 (struct effect_parser*,TYPE_1__*) ;
 int FUNC_5 (struct effect_parser*) ;
 int FUNC_6 (struct effect_parser*,struct dstr*,struct ep_func*,struct darray*) ;
 int FUNC_7 (struct effect_parser*,struct dstr*,struct ep_func*,struct dstr*) ;
 int FUNC_8 (struct dstr*,struct ep_param*,struct darray*) ;
 scalar_t__ FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (TYPE_1__*,char*) ;

__attribute__((used)) static void FUNC_11(struct effect_parser *VAR_1, struct dstr *VAR_2,
    struct darray *VAR_3,
    struct darray *VAR_4)
{
 struct cf_token *VAR_5 = VAR_3->array;
 struct cf_token *VAR_6;
 struct ep_func *VAR_7;
 struct dstr VAR_8;

 FUNC_2(&VAR_8);

 if (!VAR_5)
  return;

 while (VAR_5->type != VAR_0 && FUNC_9(*VAR_5->str.array))
  VAR_5++;

 if (VAR_5->type == VAR_0 || FUNC_10(&VAR_5->str, "NULL") == 0)
  return;

 VAR_6 = VAR_5;

 while (VAR_5->type != VAR_0) {
  struct ep_param *VAR_9 = FUNC_4(VAR_1, &VAR_5->str);
  if (VAR_9)
   FUNC_8(VAR_2, VAR_9, VAR_4);

  FUNC_0(&VAR_8, &VAR_5->str);
  VAR_5++;
 }

 VAR_7 = FUNC_3(VAR_1, &VAR_6->str);
 if (!VAR_7)
  return;

 FUNC_6(VAR_1, VAR_2, VAR_7, VAR_4);
 FUNC_7(VAR_1, VAR_2, VAR_7, &VAR_8);

 FUNC_1(&VAR_8);

 FUNC_5(VAR_1);
}
