
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cf_token {scalar_t__ type; int str; } ;
struct cf_preprocessor {scalar_t__ ignore_state; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct cf_preprocessor*,struct cf_token*,char*) ;
 int FUNC_1 (struct cf_preprocessor*,int *) ;
 int FUNC_2 (struct cf_token**) ;
 int FUNC_3 (struct cf_token**,int) ;

__attribute__((used)) static void FUNC_4(struct cf_preprocessor *VAR_1,
    struct cf_token **VAR_2)
{
 struct cf_token *VAR_3 = *VAR_2;

 if (VAR_1->ignore_state) {
  FUNC_2(VAR_2);
  return;
 }

 FUNC_3(&VAR_3, 1);
 if (VAR_3->type != VAR_0) {
  FUNC_0(VAR_1, VAR_3, "identifier");
  FUNC_2(&VAR_3);
  goto exit;
 }

 FUNC_1(VAR_1, &VAR_3->str);
 VAR_3++;

exit:
 *VAR_2 = VAR_3;
}
