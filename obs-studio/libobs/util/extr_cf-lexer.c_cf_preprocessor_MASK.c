
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dstr {int array; } ;
struct cf_token {scalar_t__ type; int str; } ;
struct cf_preprocessor {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct cf_preprocessor*,struct cf_token*,char*,int ,int *,int *) ;
 int FUNC_1 (struct cf_preprocessor*,struct cf_token**) ;
 int FUNC_2 (struct cf_preprocessor*,int,struct cf_token**) ;
 int FUNC_3 (struct cf_preprocessor*,struct cf_token**) ;
 int FUNC_4 (struct cf_preprocessor*,struct cf_token**) ;
 int FUNC_5 (struct dstr*) ;
 int FUNC_6 (struct dstr*,int *) ;
 scalar_t__ FUNC_7 (int *,char*) ;

__attribute__((used)) static bool FUNC_8(struct cf_preprocessor *VAR_2, bool VAR_3,
       struct cf_token **VAR_4)
{
 struct cf_token *VAR_5 = *VAR_4;

 if (FUNC_7(&VAR_5->str, "include") == 0) {
  FUNC_3(VAR_2, VAR_4);

 } else if (FUNC_7(&VAR_5->str, "define") == 0) {
  FUNC_1(VAR_2, VAR_4);

 } else if (FUNC_7(&VAR_5->str, "undef") == 0) {
  FUNC_4(VAR_2, VAR_4);

 } else if (FUNC_7(&VAR_5->str, "ifdef") == 0) {
  FUNC_2(VAR_2, 0, VAR_4);

 } else if (FUNC_7(&VAR_5->str, "ifndef") == 0) {
  FUNC_2(VAR_2, 1, VAR_4);



 } else if (FUNC_7(&VAR_5->str, "else") == 0 ||

     FUNC_7(&VAR_5->str, "endif") == 0) {
  if (!VAR_3) {
   struct dstr VAR_6;
   FUNC_6(&VAR_6, &VAR_5->str);
   FUNC_0(VAR_2, VAR_5,
        "#$1 outside of "
        "#if/#ifdef/#ifndef block",
        VAR_6.array, ((void*)0), ((void*)0));
   FUNC_5(&VAR_6);
   (*VAR_4)++;

   return 1;
  }

  return 0;

 } else if (VAR_5->type != VAR_0 &&
     VAR_5->type != VAR_1) {




  (*VAR_4)++;
 }

 return 1;
}
