
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ep_technique {int passes; int name; } ;
struct ep_pass {int passes; int name; } ;
struct effect_parser {int cfp; int techniques; } ;



 scalar_t__ VAR_0 ;

 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*,int *) ;
 scalar_t__ FUNC_2 (int *,int *,char*,char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int ,struct ep_technique*) ;
 int FUNC_7 (struct effect_parser*,struct ep_technique*) ;
 int FUNC_8 (struct ep_technique*) ;
 int FUNC_9 (struct ep_technique*) ;
 int FUNC_10 (struct ep_technique*) ;
 int FUNC_11 (struct ep_technique*) ;

__attribute__((used)) static void FUNC_12(struct effect_parser *VAR_1)
{
 struct ep_technique VAR_2;
 FUNC_11(&VAR_2);

 if (FUNC_2(&VAR_1->cfp, &VAR_2.name, "name", ";") != VAR_0)
  goto error;

 if (!FUNC_4(&VAR_1->cfp))
  return;

 if (!FUNC_5(&VAR_1->cfp, "{")) {
  if (!FUNC_1(&VAR_1->cfp, ";", ((void*)0))) {
   FUNC_0(&VAR_1->cfp, ";");
   return;
  }

  FUNC_0(&VAR_1->cfp, "{");
  goto error;
 }
 if (!FUNC_4(&VAR_1->cfp))
  goto error;

 while (!FUNC_5(&VAR_1->cfp, "}")) {
  struct ep_pass VAR_3;
  FUNC_9(&VAR_3);

  switch (FUNC_7(VAR_1, &VAR_3)) {
  case 128:
   FUNC_8(&VAR_3);
   if (!FUNC_1(&VAR_1->cfp, "}", ((void*)0)))
    goto error;
   continue;
  case 129:
   FUNC_8(&VAR_3);
   goto error;
  }

  FUNC_6(VAR_2.passes, &VAR_3);

  if (!FUNC_4(&VAR_1->cfp))
   goto error;
 }


 FUNC_3(&VAR_1->cfp);

 FUNC_6(VAR_1->techniques, &VAR_2);
 return;

error:
 FUNC_3(&VAR_1->cfp);
 FUNC_10(&VAR_2);
}
