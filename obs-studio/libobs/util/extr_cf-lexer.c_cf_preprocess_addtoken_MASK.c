
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct macro_params {int dummy; } ;
struct macro_param {int dummy; } ;
struct darray {int dummy; } ;
struct cf_token {scalar_t__ type; int str; } ;
struct cf_preprocessor {scalar_t__ ignore_state; } ;
struct cf_def {int dummy; } ;


 scalar_t__ VAR_0 ;
 struct cf_def* FUNC_0 (struct cf_preprocessor*,int *) ;
 int FUNC_1 (struct cf_preprocessor*,struct darray*,struct cf_token**,struct cf_token const*,struct cf_def*,struct macro_params const*) ;
 int FUNC_2 (struct cf_preprocessor*,struct darray*,struct cf_token**,struct cf_token const*,struct macro_param*) ;
 int FUNC_3 (int,struct darray*,struct cf_token*) ;
 struct macro_param* FUNC_4 (struct macro_params const*,int *) ;

__attribute__((used)) static void FUNC_5(struct cf_preprocessor *VAR_1,
       struct darray *VAR_2,
       struct cf_token **VAR_3,
       const struct cf_token *VAR_4,
       const struct macro_params *VAR_5)
{
 struct cf_token *VAR_6 = *VAR_3;

 if (VAR_1->ignore_state)
  goto ignore;

 if (!VAR_4)
  VAR_4 = VAR_6;

 if (VAR_6->type == VAR_0) {
  struct cf_def *VAR_7;
  struct macro_param *VAR_8;

  VAR_8 = FUNC_4(VAR_5, &VAR_6->str);
  if (VAR_8) {
   FUNC_2(VAR_1, VAR_2, &VAR_6, VAR_4,
         VAR_8);
   goto exit;
  }

  VAR_7 = FUNC_0(VAR_1, &VAR_6->str);
  if (VAR_7) {
   FUNC_1(VAR_1, VAR_2, &VAR_6, VAR_4,
          VAR_7, VAR_5);
   goto exit;
  }
 }

 FUNC_3(sizeof(struct cf_token), VAR_2, VAR_6);

ignore:
 VAR_6++;

exit:
 *VAR_3 = VAR_6;
}
