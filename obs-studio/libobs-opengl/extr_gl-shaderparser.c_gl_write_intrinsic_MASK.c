
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct shader_var {int type; } ;
struct gl_shader_parser {int gl_string; } ;
struct cf_token {int str; } ;


 scalar_t__ FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (struct gl_shader_parser*,struct cf_token**) ;
 int FUNC_3 (struct gl_shader_parser*,struct cf_token**) ;
 int FUNC_4 (struct gl_shader_parser*,struct cf_token**,struct shader_var*) ;
 struct shader_var* FUNC_5 (struct gl_shader_parser*,struct cf_token*) ;
 scalar_t__ FUNC_6 (int *,char*) ;

__attribute__((used)) static bool FUNC_7(struct gl_shader_parser *VAR_0,
          struct cf_token **VAR_1)
{
 struct cf_token *VAR_2 = *VAR_1;
 bool VAR_3 = 1;

 if (FUNC_6(&VAR_2->str, "atan2") == 0) {
  FUNC_1(&VAR_0->gl_string, "atan2");
 } else if (FUNC_6(&VAR_2->str, "ddx") == 0) {
  FUNC_1(&VAR_0->gl_string, "dFdx");
 } else if (FUNC_6(&VAR_2->str, "ddy") == 0) {
  FUNC_1(&VAR_0->gl_string, "dFdy");
 } else if (FUNC_6(&VAR_2->str, "frac") == 0) {
  FUNC_1(&VAR_0->gl_string, "fract");
 } else if (FUNC_6(&VAR_2->str, "lerp") == 0) {
  FUNC_1(&VAR_0->gl_string, "mix");
 } else if (FUNC_6(&VAR_2->str, "fmod") == 0) {
  FUNC_1(&VAR_0->gl_string, "mod");
 } else if (FUNC_6(&VAR_2->str, "rsqrt") == 0) {
  FUNC_1(&VAR_0->gl_string, "inversesqrt");
 } else if (FUNC_6(&VAR_2->str, "saturate") == 0) {
  VAR_3 = FUNC_3(VAR_0, &VAR_2);
 } else if (FUNC_6(&VAR_2->str, "mul") == 0) {
  VAR_3 = FUNC_2(VAR_0, &VAR_2);
 } else {
  struct shader_var *VAR_4 = FUNC_5(VAR_0, VAR_2);
  if (VAR_4 && FUNC_0(VAR_4->type, "texture", 7) == 0)
   VAR_3 = FUNC_4(VAR_0, &VAR_2, VAR_4);
  else
   VAR_3 = 0;
 }

 if (VAR_3)
  *VAR_1 = VAR_2;
 return VAR_3;
}
