
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct shader_sampler {int name; } ;
struct shader_parser {int samplers; int cfp; } ;
struct cf_token {int str; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int *,int *,char*,char*) ;
 scalar_t__ FUNC_1 (int *,char*,char*,int *) ;
 int FUNC_2 (int *,struct cf_token*) ;
 int FUNC_3 (int ,struct shader_sampler*) ;
 int FUNC_4 (struct shader_sampler*) ;
 int FUNC_5 (struct shader_sampler*) ;
 int FUNC_6 (struct shader_parser*,struct shader_sampler*) ;
 scalar_t__ FUNC_7 (int *,char*) ;

__attribute__((used)) static void FUNC_8(struct shader_parser *VAR_2)
{
 struct shader_sampler VAR_3;
 struct cf_token VAR_4;
 FUNC_5(&VAR_3);

 if (FUNC_0(&VAR_2->cfp, &VAR_3.name, "name", ";") != VAR_1)
  goto error;
 if (FUNC_1(&VAR_2->cfp, "{", ";", ((void*)0)) != VAR_1)
  goto error;

 if (!FUNC_2(&VAR_2->cfp, &VAR_4))
  goto error;

 while (FUNC_7(&VAR_4.str, "}") != 0) {
  int VAR_5 = FUNC_6(VAR_2, &VAR_3);
  if (VAR_5 == VAR_0)
   goto error;

  if (!FUNC_2(&VAR_2->cfp, &VAR_4))
   goto error;
 }

 if (FUNC_1(&VAR_2->cfp, "}", ";", ((void*)0)) != VAR_1)
  goto error;
 if (FUNC_1(&VAR_2->cfp, ";", ((void*)0), ((void*)0)) != VAR_1)
  goto error;

 FUNC_3(VAR_2->samplers, &VAR_3);
 return;

error:
 FUNC_4(&VAR_3);
}
