
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct shader_var {int dummy; } ;
struct shader_parser {int params; int cfp; } ;


 scalar_t__ FUNC_0 (int *,char*) ;
 int FUNC_1 (int ,struct shader_var*) ;
 int FUNC_2 (struct shader_var*) ;
 int FUNC_3 (struct shader_var*,char*,char*,int,int) ;
 int FUNC_4 (struct shader_parser*,struct shader_var*) ;
 int FUNC_5 (struct shader_parser*,struct shader_var*) ;

__attribute__((used)) static void FUNC_6(struct shader_parser *VAR_0, char *VAR_1, char *VAR_2,
      bool VAR_3, bool VAR_4)
{
 struct shader_var VAR_5;
 FUNC_3(&VAR_5, VAR_1, VAR_2, VAR_4, VAR_3);

 if (FUNC_0(&VAR_0->cfp, ";"))
  goto complete;
 if (FUNC_0(&VAR_0->cfp, "[") && !FUNC_4(VAR_0, &VAR_5))
  goto error;
 if (FUNC_0(&VAR_0->cfp, "=") && !FUNC_5(VAR_0, &VAR_5))
  goto error;
 if (!FUNC_0(&VAR_0->cfp, ";"))
  goto error;

complete:
 FUNC_1(VAR_0->params, &VAR_5);
 return;

error:
 FUNC_2(&VAR_5);
}
