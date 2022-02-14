
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cf_token {scalar_t__ type; int str; } ;
struct cf_preprocessor {scalar_t__ ignore_state; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct cf_preprocessor*,struct cf_token*,char*,int *,int *,int *) ;
 int FUNC_1 (struct cf_preprocessor*,struct cf_token*,char*) ;
 int FUNC_2 (struct cf_preprocessor*,struct cf_token*) ;
 int FUNC_3 (struct cf_token**) ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (struct cf_token**,int) ;

__attribute__((used)) static void FUNC_7(struct cf_preprocessor *VAR_1,
      struct cf_token **VAR_2)
{
 struct cf_token *VAR_3 = *VAR_2;

 if (VAR_1->ignore_state) {
  FUNC_3(VAR_2);
  return;
 }

 FUNC_6(&VAR_3, 1);

 if (VAR_3->type != VAR_0) {
  FUNC_1(VAR_1, VAR_3, "string");
  FUNC_3(&VAR_3);
  goto exit;
 }

 if (FUNC_5(&VAR_3->str)) {

 } else if (FUNC_4(&VAR_3->str)) {
  if (!VAR_1->ignore_state)
   FUNC_2(VAR_1, VAR_3);
 } else {
  FUNC_0(VAR_1, VAR_3, "Invalid or incomplete string", ((void*)0),
       ((void*)0), ((void*)0));
  FUNC_3(&VAR_3);
  goto exit;
 }

 VAR_3++;

exit:
 *VAR_2 = VAR_3;
}
