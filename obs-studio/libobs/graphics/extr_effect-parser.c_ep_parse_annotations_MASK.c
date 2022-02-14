
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ep_param {int dummy; } ;
struct effect_parser {int cfp; } ;
struct darray {int dummy; } ;







 int FUNC_0 (char*) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int,struct darray*,struct ep_param*) ;
 int FUNC_6 (struct ep_param*) ;
 int FUNC_7 (struct ep_param*,int ,int ,int,int,int) ;
 int FUNC_8 (struct effect_parser*,struct ep_param*) ;

__attribute__((used)) static int FUNC_9(struct effect_parser *VAR_0,
    struct darray *VAR_1)
{
 if (!FUNC_4(&VAR_0->cfp, "<")) {
  FUNC_1(&VAR_0->cfp, "<");
  goto error;
 }


 while (1) {
  bool VAR_2 = 0;
  struct ep_param VAR_3;

  FUNC_7(&VAR_3, FUNC_0(""), FUNC_0(""), 0, 0,
         0);

  switch (FUNC_8(VAR_0, &VAR_3)) {
  case 128:
   FUNC_2(&VAR_0->cfp);

  case 131:
   FUNC_6(&VAR_3);
   continue;

  case 129:
   FUNC_2(&VAR_0->cfp);

  case 132:
   FUNC_6(&VAR_3);
   VAR_2 = 1;
   break;

  case 130:
   FUNC_6(&VAR_3);
   goto error;
  }

  if (VAR_2)
   break;

  FUNC_5(sizeof(struct ep_param), VAR_1, &VAR_3);
 }

 if (!FUNC_4(&VAR_0->cfp, ">")) {
  FUNC_1(&VAR_0->cfp, ">");
  goto error;
 }
 if (!FUNC_3(&VAR_0->cfp))
  goto error;

 return 1;

error:
 return 0;
}
