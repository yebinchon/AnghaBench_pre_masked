
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct shader_var {int dummy; } ;
struct TYPE_2__ {size_t num; struct shader_var* array; } ;
struct shader_struct {TYPE_1__ vars; } ;
struct gl_shader_parser {int dummy; } ;
struct dstr {int array; } ;


 int FUNC_0 (struct dstr*,char const*) ;
 int FUNC_1 (struct dstr*,char const*) ;
 int FUNC_2 (struct dstr*) ;
 int FUNC_3 (struct dstr*) ;
 int FUNC_4 (struct gl_shader_parser*,struct shader_var*,int,int ) ;

__attribute__((used)) static void FUNC_5(struct gl_shader_parser *VAR_0,
         struct shader_struct *VAR_1, const char *VAR_2,
         bool VAR_3, const char *VAR_4)
{
 struct dstr VAR_5;
 size_t VAR_6;

 FUNC_3(&VAR_5);
 if (VAR_4)
  FUNC_1(&VAR_5, VAR_4);
 FUNC_0(&VAR_5, VAR_2);
 FUNC_0(&VAR_5, "_");

 for (VAR_6 = 0; VAR_6 < VAR_1->vars.num; VAR_6++) {
  struct shader_var *VAR_7 = VAR_1->vars.array + VAR_6;
  FUNC_4(VAR_0, VAR_7, VAR_3, VAR_5.array);
 }

 FUNC_2(&VAR_5);
}
