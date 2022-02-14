
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct macro_params {int params; } ;
struct macro_param {int name; } ;
struct TYPE_3__ {char* array; } ;
struct cf_token {scalar_t__ type; TYPE_1__ str; } ;
struct cf_preprocessor {int dummy; } ;
struct TYPE_4__ {size_t num; } ;
struct cf_def {TYPE_2__ params; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct cf_preprocessor*,struct cf_token*,char*,int *,int *,int *) ;
 int FUNC_1 (struct cf_preprocessor*,struct cf_token*,char*) ;
 int FUNC_2 (struct cf_def const*,size_t) ;
 int FUNC_3 (struct cf_preprocessor*,struct cf_token**,struct macro_param*,struct cf_token const*,struct macro_params const*) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int ,struct macro_param*) ;
 int FUNC_6 (struct macro_param*) ;
 int FUNC_7 (struct macro_param*) ;
 int FUNC_8 (struct cf_token**,int) ;
 scalar_t__ FUNC_9 (struct macro_param*) ;

__attribute__((used)) static void FUNC_10(
 struct cf_preprocessor *VAR_1, struct cf_token **VAR_2,
 const struct cf_def *VAR_3, const struct cf_token *VAR_4,
 const struct macro_params *VAR_5, struct macro_params *VAR_6)
{
 struct cf_token *VAR_7 = *VAR_2;
 size_t VAR_8 = 0;

 FUNC_8(&VAR_7, 0);
 if (VAR_7->type != VAR_0 || *VAR_7->str.array != '(') {
  FUNC_1(VAR_1, VAR_7, "'('");
  goto exit;
 }

 do {
  struct macro_param VAR_9;
  FUNC_7(&VAR_9);
  VAR_7++;
  VAR_8++;

  FUNC_3(VAR_1, &VAR_7, &VAR_9, VAR_4,
            VAR_5);
  if (VAR_7->type != VAR_0 ||
      (*VAR_7->str.array != ',' &&
       *VAR_7->str.array != ')')) {

   FUNC_6(&VAR_9);
   FUNC_1(VAR_1, VAR_7, "',' or ')'");
   goto exit;
  }

  if (FUNC_9(&VAR_9)) {

   if (VAR_8 == 1 && !VAR_3->params.num &&
       *VAR_7->str.array == ')') {
    FUNC_6(&VAR_9);
    break;
   }
  }

  if (VAR_8 <= VAR_3->params.num) {
   FUNC_4(&VAR_9.name,
          FUNC_2(VAR_3, VAR_8 - 1));
   FUNC_5(VAR_6->params, &VAR_9);
  } else {
   FUNC_6(&VAR_9);
  }
 } while (*VAR_7->str.array != ')');

 if (VAR_8 != VAR_3->params.num)
  FUNC_0(VAR_1, VAR_7,
       "Mismatching number of macro parameters", ((void*)0),
       ((void*)0), ((void*)0));

exit:
 *VAR_2 = VAR_7;
}
