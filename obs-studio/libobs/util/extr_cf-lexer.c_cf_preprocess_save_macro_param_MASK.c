
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct macro_params {int dummy; } ;
struct TYPE_4__ {int da; } ;
struct macro_param {TYPE_2__ tokens; } ;
struct TYPE_3__ {char* array; } ;
struct cf_token {scalar_t__ type; TYPE_1__ str; } ;
struct cf_preprocessor {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct cf_preprocessor*,int *,struct cf_token const*) ;
 int FUNC_2 (struct cf_preprocessor*,struct cf_token*) ;
 int FUNC_3 (struct cf_preprocessor*,int *,struct cf_token**,struct cf_token const*,struct macro_params const*) ;

__attribute__((used)) static void FUNC_4(
 struct cf_preprocessor *VAR_1, struct cf_token **VAR_2,
 struct macro_param *VAR_3, const struct cf_token *VAR_4,
 const struct macro_params *VAR_5)
{
 struct cf_token *VAR_6 = *VAR_2;
 int VAR_7 = 0;

 FUNC_1(VAR_1, &VAR_3->tokens.da, VAR_4);

 while (VAR_6->type != VAR_0) {
  if (*VAR_6->str.array == '(') {
   VAR_7++;
  } else if (*VAR_6->str.array == ')') {
   if (VAR_7)
    VAR_7--;
   else
    break;
  } else if (*VAR_6->str.array == ',') {
   if (!VAR_7)
    break;
  }

  FUNC_3(VAR_1, &VAR_3->tokens.da, &VAR_6, VAR_4,
           VAR_5);
 }

 if (VAR_6->type == VAR_0)
  FUNC_2(VAR_1, VAR_6);

 FUNC_1(VAR_1, &VAR_3->tokens.da, VAR_4);
 FUNC_0(&VAR_3->tokens.da);

 *VAR_2 = VAR_6;
}
