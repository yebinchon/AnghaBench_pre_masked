
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct shader_parser {int cfp; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int *,char**,char*,char*) ;
 scalar_t__ FUNC_2 (int *,char**,char*,char*) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,char*) ;
 int FUNC_5 (struct shader_parser*,char*,int) ;
 int FUNC_6 (struct shader_parser*,int*,int*) ;
 int FUNC_7 (struct shader_parser*,char*,char*) ;
 int FUNC_8 (struct shader_parser*,char*,char*,int,int) ;

__attribute__((used)) static void FUNC_9(struct shader_parser *VAR_1)
{
 bool VAR_2 = 0, VAR_3 = 0;
 char *VAR_4 = ((void*)0), *VAR_5 = ((void*)0);

 if (!FUNC_6(VAR_1, &VAR_2, &VAR_3))
  goto error;

 if (FUNC_1(&VAR_1->cfp, &VAR_4, "type", ";") != VAR_0)
  goto error;
 if (FUNC_2(&VAR_1->cfp, &VAR_5, "name", ";") != VAR_0)
  goto error;

 if (!FUNC_3(&VAR_1->cfp))
  goto error;

 if (FUNC_4(&VAR_1->cfp, "(")) {
  FUNC_5(VAR_1, "const", VAR_2);
  FUNC_5(VAR_1, "uniform", VAR_3);

  FUNC_7(VAR_1, VAR_4, VAR_5);
  return;
 } else {
  FUNC_8(VAR_1, VAR_4, VAR_5, VAR_2, VAR_3);
  return;
 }

error:
 FUNC_0(VAR_4);
 FUNC_0(VAR_5);
}
