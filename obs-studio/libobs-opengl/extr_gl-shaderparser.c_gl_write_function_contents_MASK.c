
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct gl_shader_parser {int gl_string; } ;
struct TYPE_3__ {char* array; } ;
struct cf_token {scalar_t__ type; TYPE_1__ str; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,TYPE_1__*) ;
 int FUNC_1 (struct gl_shader_parser*,struct cf_token**) ;
 int FUNC_2 (struct gl_shader_parser*,struct cf_token*) ;
 scalar_t__ FUNC_3 (TYPE_1__*,char const*) ;

__attribute__((used)) static void FUNC_4(struct gl_shader_parser *VAR_3,
           struct cf_token **VAR_4,
           const char *VAR_5)
{
 struct cf_token *VAR_6 = *VAR_4;

 if (VAR_6->type != VAR_0 || (!FUNC_2(VAR_3, VAR_6) &&
         !FUNC_1(VAR_3, &VAR_6)))
  FUNC_0(&VAR_3->gl_string, &VAR_6->str);

 while (VAR_6->type != VAR_1) {
  VAR_6++;

  if (VAR_5 && FUNC_3(&VAR_6->str, VAR_5) == 0)
   break;

  if (VAR_6->type == VAR_0) {
   if (!FUNC_2(VAR_3, VAR_6) &&
       !FUNC_1(VAR_3, &VAR_6))
    FUNC_0(&VAR_3->gl_string, &VAR_6->str);

  } else if (VAR_6->type == VAR_2) {
   if (*VAR_6->str.array == '{')
    FUNC_4(VAR_3, &VAR_6, "}");
   else if (*VAR_6->str.array == '(')
    FUNC_4(VAR_3, &VAR_6, ")");

   FUNC_0(&VAR_3->gl_string, &VAR_6->str);

  } else {
   FUNC_0(&VAR_3->gl_string, &VAR_6->str);
  }
 }

 *VAR_4 = VAR_6;
}
