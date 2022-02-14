
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct cf_token* array; } ;
struct macro_param {TYPE_1__ tokens; } ;
struct darray {int dummy; } ;
struct cf_token {scalar_t__ type; } ;
struct cf_preprocessor {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct cf_preprocessor*,struct darray*,struct cf_token**,struct cf_token const*,int *) ;

__attribute__((used)) static inline void FUNC_1(
 struct cf_preprocessor *VAR_1, struct darray *VAR_2,
 struct cf_token **VAR_3, const struct cf_token *VAR_4,
 const struct macro_param *VAR_5)
{
 struct cf_token *VAR_6 = *VAR_3;
 struct cf_token *VAR_7 = VAR_5->tokens.array;

 while (VAR_7->type != VAR_0)
  FUNC_0(VAR_1, VAR_2, &VAR_7, VAR_4, ((void*)0));

 VAR_6++;
 *VAR_3 = VAR_6;
}
