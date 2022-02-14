
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct macro_params {int dummy; } ;
struct darray {int dummy; } ;
struct cf_token {scalar_t__ type; } ;
struct cf_preprocessor {int dummy; } ;
struct TYPE_2__ {struct cf_token* array; } ;
struct cf_def {scalar_t__ macro; TYPE_1__ tokens; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct cf_preprocessor*,struct darray*,struct cf_token**,struct cf_token const*,struct macro_params*) ;
 int FUNC_1 (struct cf_preprocessor*,struct cf_token**,struct cf_def const*,struct cf_token const*,struct macro_params const*,struct macro_params*) ;
 int FUNC_2 (struct macro_params*) ;
 int FUNC_3 (struct macro_params*) ;

__attribute__((used)) static inline void FUNC_4(
 struct cf_preprocessor *VAR_1, struct darray *VAR_2,
 struct cf_token **VAR_3, const struct cf_token *VAR_4,
 const struct cf_def *VAR_5, const struct macro_params *VAR_6)
{
 struct cf_token *VAR_7 = *VAR_3;
 struct macro_params VAR_8;
 struct cf_token *VAR_9 = VAR_5->tokens.array;

 FUNC_3(&VAR_8);

 if (VAR_5->macro)
  FUNC_1(VAR_1, &VAR_7, VAR_5, VAR_4,
      VAR_6, &VAR_8);

 while (VAR_9->type != VAR_0)
  FUNC_0(VAR_1, VAR_2, &VAR_9, VAR_4,
           &VAR_8);

 FUNC_2(&VAR_8);

 VAR_7++;
 *VAR_3 = VAR_7;
}
