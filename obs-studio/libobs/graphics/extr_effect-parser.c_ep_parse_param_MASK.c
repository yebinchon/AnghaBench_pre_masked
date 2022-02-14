
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ep_param {int dummy; } ;
struct effect_parser {int params; int cfp; } ;


 scalar_t__ FUNC_0 (int *,char*) ;
 int FUNC_1 (int ,struct ep_param*) ;
 int FUNC_2 (struct ep_param*) ;
 int FUNC_3 (struct ep_param*,char*,char*,int,int,int) ;
 int FUNC_4 (struct effect_parser*,struct ep_param*) ;
 int FUNC_5 (struct effect_parser*,struct ep_param*) ;
 int FUNC_6 (struct effect_parser*,struct ep_param*) ;

__attribute__((used)) static void FUNC_7(struct effect_parser *VAR_0, char *VAR_1, char *VAR_2,
      bool VAR_3, bool VAR_4, bool VAR_5)
{
 struct ep_param VAR_6;
 FUNC_3(&VAR_6, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);

 if (FUNC_0(&VAR_0->cfp, ";"))
  goto complete;
 if (FUNC_0(&VAR_0->cfp, "[") && !FUNC_5(VAR_0, &VAR_6))
  goto error;
 if (FUNC_0(&VAR_0->cfp, "<") &&
     !FUNC_4(VAR_0, &VAR_6))
  goto error;
 if (FUNC_0(&VAR_0->cfp, "=") && !FUNC_6(VAR_0, &VAR_6))
  goto error;



 if (!FUNC_0(&VAR_0->cfp, ";"))
  goto error;

complete:
 FUNC_1(VAR_0->params, &VAR_6);
 return;

error:
 FUNC_2(&VAR_6);
}
