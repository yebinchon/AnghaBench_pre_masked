
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct shader_var {int dummy; } ;
struct shader_parser {int cfp; } ;
struct shader_func {int params; } ;
struct TYPE_2__ {char* array; } ;
struct cf_token {TYPE_1__ str; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,struct cf_token*) ;
 int FUNC_3 (struct cf_token*) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int ,struct shader_var*) ;
 int FUNC_6 (struct shader_var*) ;
 int FUNC_7 (struct shader_var*) ;
 int FUNC_8 (struct shader_parser*,struct shader_var*) ;

__attribute__((used)) static bool FUNC_9(struct shader_parser *VAR_3,
     struct shader_func *VAR_4)
{
 struct cf_token VAR_5;
 int VAR_6;

 FUNC_3(&VAR_5);

 if (!FUNC_2(&VAR_3->cfp, &VAR_5))
  return 0;

 if (*VAR_5.str.array == ')') {
  FUNC_1(&VAR_3->cfp);
  goto exit;
 }

 do {
  struct shader_var VAR_7;
  FUNC_7(&VAR_7);

  if (!FUNC_4(&VAR_3->cfp, "(") && !FUNC_4(&VAR_3->cfp, ","))
   FUNC_0(&VAR_3->cfp);

  VAR_6 = FUNC_8(VAR_3, &VAR_7);
  if (VAR_6 != VAR_2) {
   FUNC_6(&VAR_7);

   if (VAR_6 == VAR_0)
    goto exit;
   else if (VAR_6 == VAR_1)
    return 0;
  }

  FUNC_5(VAR_4->params, &VAR_7);
 } while (!FUNC_4(&VAR_3->cfp, ")"));

exit:
 return 1;
}
