
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct shader_var {int dummy; } ;
struct cf_parser {struct cf_token* cur_token; } ;
struct TYPE_2__ {struct cf_parser cfp; } ;
struct gl_shader_parser {int gl_string; TYPE_1__ parser; } ;
struct cf_token {int dummy; } ;


 int FUNC_0 (struct cf_parser*) ;
 scalar_t__ FUNC_1 (struct cf_parser*,char*) ;
 int FUNC_2 (int *,char const*) ;
 int FUNC_3 (struct gl_shader_parser*,struct cf_token**,char*) ;
 int FUNC_4 (struct gl_shader_parser*,struct shader_var*,char*,int) ;

__attribute__((used)) static bool FUNC_5(struct gl_shader_parser *VAR_0,
      struct cf_token **VAR_1,
      struct shader_var *VAR_2)
{
 struct cf_parser *VAR_3 = &VAR_0->parser.cfp;
 bool VAR_4 = 0;
 VAR_3->cur_token = *VAR_1;

 if (!FUNC_0(VAR_3))
  return 0;
 if (!FUNC_1(VAR_3, "."))
  return 0;
 if (!FUNC_0(VAR_3))
  return 0;

 const char *VAR_5 = ")";

 if (FUNC_1(VAR_3, "Sample"))
  VAR_4 = FUNC_4(VAR_0, VAR_2, "texture", 1);
 else if (FUNC_1(VAR_3, "SampleBias"))
  VAR_4 = FUNC_4(VAR_0, VAR_2, "texture", 1);
 else if (FUNC_1(VAR_3, "SampleGrad"))
  VAR_4 = FUNC_4(VAR_0, VAR_2, "textureGrad", 1);
 else if (FUNC_1(VAR_3, "SampleLevel"))
  VAR_4 = FUNC_4(VAR_0, VAR_2, "textureLod", 1);
 else if (FUNC_1(VAR_3, "Load")) {
  VAR_4 = FUNC_4(VAR_0, VAR_2, "texelFetch", 0);
  FUNC_2(&VAR_0->gl_string, "(");
  VAR_5 = ").xy, 0)";
 }

 if (!VAR_4)
  return 0;

 if (!FUNC_0(VAR_3))
  return 0;

 FUNC_3(VAR_0, &VAR_3->cur_token, ")");
 FUNC_2(&VAR_0->gl_string, VAR_5);

 *VAR_1 = VAR_3->cur_token;
 return 1;
}
