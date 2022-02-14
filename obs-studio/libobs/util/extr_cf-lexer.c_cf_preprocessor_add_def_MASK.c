
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dstr {int array; } ;
struct cf_preprocessor {int defines; } ;
struct TYPE_2__ {int str; } ;
struct cf_def {TYPE_1__ name; } ;


 int FUNC_0 (struct cf_preprocessor*,TYPE_1__*,char*,int ,int *,int *) ;
 int FUNC_1 (struct cf_def*) ;
 struct cf_def* FUNC_2 (struct cf_preprocessor*,int *) ;
 int FUNC_3 (int ,struct cf_def*) ;
 int FUNC_4 (struct dstr*,int *) ;
 int FUNC_5 (struct cf_def*,struct cf_def*,int) ;

void FUNC_6(struct cf_preprocessor *VAR_0, struct cf_def *VAR_1)
{
 struct cf_def *VAR_2 = FUNC_2(VAR_0, &VAR_1->name.str);

 if (VAR_2) {
  struct dstr VAR_3;
  FUNC_4(&VAR_3, &VAR_1->name.str);
  FUNC_0(VAR_0, &VAR_1->name, "Token $1 already defined",
         VAR_3.array, ((void*)0), ((void*)0));
  FUNC_0(VAR_0, &VAR_2->name,
         "Previous definition of $1 is here", VAR_3.array,
         ((void*)0), ((void*)0));

  FUNC_1(VAR_2);
  FUNC_5(VAR_2, VAR_1, sizeof(struct cf_def));
 } else {
  FUNC_3(VAR_0->defines, VAR_1);
 }
}
