
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct shader_var {size_t gl_sampler_id; char* name; } ;
struct cf_parser {int cur_token; } ;
struct TYPE_2__ {struct cf_parser cfp; } ;
struct gl_shader_parser {int gl_string; TYPE_1__ parser; } ;


 int FUNC_0 (struct cf_parser*) ;
 int FUNC_1 (struct cf_parser*,char*) ;
 int FUNC_2 (int *,char const*) ;
 size_t FUNC_3 (struct gl_shader_parser*,int ) ;

__attribute__((used)) static inline bool FUNC_4(struct gl_shader_parser *VAR_0,
      struct shader_var *VAR_1,
      const char *VAR_2, bool VAR_3)
{
 struct cf_parser *VAR_4 = &VAR_0->parser.cfp;

 if (!FUNC_0(VAR_4))
  return 0;
 if (!FUNC_1(VAR_4, "("))
  return 0;

 if (VAR_3) {
  if (!FUNC_0(VAR_4))
   return 0;
  const size_t VAR_5 = FUNC_3(VAR_0, VAR_4->cur_token);
  if (VAR_5 == (size_t)-1)
   return 0;
  if (!FUNC_0(VAR_4))
   return 0;
  if (!FUNC_1(VAR_4, ","))
   return 0;

  VAR_1->gl_sampler_id = VAR_5;
 }

 FUNC_2(&VAR_0->gl_string, VAR_2);
 FUNC_2(&VAR_0->gl_string, "(");
 FUNC_2(&VAR_0->gl_string, VAR_1->name);
 FUNC_2(&VAR_0->gl_string, ", ");
 return 1;
}
