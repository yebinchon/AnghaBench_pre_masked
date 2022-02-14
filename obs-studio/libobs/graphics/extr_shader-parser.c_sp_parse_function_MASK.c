
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int cur_token; } ;
struct shader_parser {int funcs; TYPE_1__ cfp; } ;
struct shader_func {char* mapping; int end; int start; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,char*) ;
 int FUNC_1 (TYPE_1__*,char**,char*,char*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,char,char) ;
 scalar_t__ FUNC_5 (TYPE_1__*,char*) ;
 int FUNC_6 (int ,struct shader_func*) ;
 int FUNC_7 (struct shader_func*) ;
 int FUNC_8 (struct shader_func*,char*,char*) ;
 int FUNC_9 (struct shader_parser*,struct shader_func*) ;

__attribute__((used)) static void FUNC_10(struct shader_parser *VAR_1, char *VAR_2, char *VAR_3)
{
 struct shader_func VAR_4;

 FUNC_8(&VAR_4, VAR_2, VAR_3);
 if (!FUNC_9(VAR_1, &VAR_4))
  goto error;

 if (!FUNC_3(&VAR_1->cfp))
  goto error;


 if (FUNC_5(&VAR_1->cfp, ":")) {
  char *VAR_5 = ((void*)0);
  int VAR_6 =
   FUNC_1(&VAR_1->cfp, &VAR_5, "mapping", "{");
  if (VAR_6 != VAR_0)
   goto error;

  VAR_4.mapping = VAR_5;

  if (!FUNC_3(&VAR_1->cfp))
   goto error;
 }

 if (!FUNC_5(&VAR_1->cfp, "{")) {
  FUNC_0(&VAR_1->cfp, "{");
  goto error;
 }

 VAR_4.start = VAR_1->cfp.cur_token;
 if (!FUNC_4(&VAR_1->cfp, '{', '}'))
  goto error;


 FUNC_2(&VAR_1->cfp);

 VAR_4.end = VAR_1->cfp.cur_token;
 FUNC_6(VAR_1->funcs, &VAR_4);
 return;

error:
 FUNC_7(&VAR_4);
}
