
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cf_token {scalar_t__ type; int str; } ;
struct cf_preprocessor {int dummy; } ;
struct cf_def {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct cf_preprocessor*,struct cf_token*,char*) ;
 struct cf_def* FUNC_1 (struct cf_preprocessor*,int *) ;
 int FUNC_2 (struct cf_preprocessor*,int,struct cf_token**) ;
 int FUNC_3 (struct cf_token**) ;
 int FUNC_4 (struct cf_token**,int) ;
 scalar_t__ FUNC_5 (int *,char*) ;

__attribute__((used)) static void FUNC_6(struct cf_preprocessor *VAR_1, bool VAR_2,
    struct cf_token **VAR_3)
{
 struct cf_token *VAR_4 = *VAR_3;
 struct cf_def *VAR_5;
 bool VAR_6;

 FUNC_4(&VAR_4, 1);
 if (VAR_4->type != VAR_0) {
  FUNC_0(VAR_1, VAR_4, "identifier");
  FUNC_3(&VAR_4);
  goto exit;
 }

 VAR_5 = FUNC_1(VAR_1, &VAR_4->str);
 VAR_6 = (VAR_5 == ((void*)0)) == VAR_2;

 if (!FUNC_2(VAR_1, !VAR_6, &VAR_4))
  goto exit;

 if (FUNC_5(&VAR_4->str, "else") == 0) {
  if (!FUNC_2(VAR_1, VAR_6, &VAR_4))
   goto exit;

 }

 VAR_4++;

exit:
 *VAR_3 = VAR_4;
}
