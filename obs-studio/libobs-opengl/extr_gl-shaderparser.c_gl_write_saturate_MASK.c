
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cf_parser {struct cf_token* cur_token; } ;
struct TYPE_2__ {struct cf_parser cfp; } ;
struct gl_shader_parser {int gl_string; TYPE_1__ parser; } ;
struct cf_token {int dummy; } ;


 int FUNC_0 (struct cf_parser*) ;
 int FUNC_1 (struct cf_parser*,char*) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (struct gl_shader_parser*,struct cf_token**,char*) ;

__attribute__((used)) static bool FUNC_4(struct gl_shader_parser *VAR_0,
         struct cf_token **VAR_1)
{
 struct cf_parser *VAR_2 = &VAR_0->parser.cfp;
 VAR_2->cur_token = *VAR_1;

 if (!FUNC_0(VAR_2))
  return 0;
 if (!FUNC_1(VAR_2, "("))
  return 0;

 FUNC_2(&VAR_0->gl_string, "clamp");
 FUNC_3(VAR_0, &VAR_2->cur_token, ")");
 FUNC_2(&VAR_0->gl_string, ", 0.0, 1.0)");

 *VAR_1 = VAR_2->cur_token;
 return 1;
}
