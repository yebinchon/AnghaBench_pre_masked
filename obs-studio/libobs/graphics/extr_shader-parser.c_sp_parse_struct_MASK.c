
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct shader_var {int vars; int name; } ;
struct shader_struct {int vars; int name; } ;
struct shader_parser {int structs; int cfp; } ;





 scalar_t__ VAR_0 ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,int *,char*,char*) ;
 scalar_t__ FUNC_2 (int *,char*,char*,int *) ;
 int FUNC_3 (int ,struct shader_var*) ;
 int FUNC_4 (struct shader_var*) ;
 int FUNC_5 (struct shader_var*) ;
 int FUNC_6 (struct shader_var*) ;
 int FUNC_7 (struct shader_var*) ;
 int FUNC_8 (struct shader_parser*,struct shader_var*) ;

__attribute__((used)) static void FUNC_9(struct shader_parser *VAR_1)
{
 struct shader_struct VAR_2;
 FUNC_5(&VAR_2);

 if (FUNC_1(&VAR_1->cfp, &VAR_2.name, "name", ";") != VAR_0)
  goto error;
 if (FUNC_2(&VAR_1->cfp, "{", ";", ((void*)0)) != VAR_0)
  goto error;


 while (1) {
  bool VAR_3 = 0;
  struct shader_var VAR_4;

  FUNC_7(&VAR_4);

  switch (FUNC_8(VAR_1, &VAR_4)) {

  case 128:
   FUNC_0(&VAR_1->cfp);

  case 131:
   FUNC_6(&VAR_4);
   continue;

  case 129:
   FUNC_0(&VAR_1->cfp);

  case 132:
   FUNC_6(&VAR_4);
   VAR_3 = 1;
   break;

  case 130:
   FUNC_6(&VAR_4);
   goto error;
  }

  if (VAR_3)
   break;

  FUNC_3(VAR_2.vars, &VAR_4);
 }

 if (FUNC_2(&VAR_1->cfp, ";", ((void*)0), ((void*)0)) != VAR_0)
  goto error;

 FUNC_3(VAR_1->structs, &VAR_2);
 return;

error:
 FUNC_4(&VAR_2);
}
