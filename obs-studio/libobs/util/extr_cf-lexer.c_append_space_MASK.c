
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct darray {int dummy; } ;
struct cf_token {int str; int unmerged_str; int lex; int type; } ;
struct cf_preprocessor {int lex; } ;


 int VAR_0 ;
 int FUNC_0 (int,struct darray*,struct cf_token*) ;
 int VAR_1 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int ,int) ;

__attribute__((used)) static inline void FUNC_3(struct cf_preprocessor *VAR_2,
    struct darray *VAR_3,
    const struct cf_token *VAR_4)
{
 struct cf_token VAR_5;

 FUNC_2(&VAR_5.str, VAR_1, 1);
 VAR_5.type = VAR_0;
 if (VAR_4) {
  VAR_5.lex = VAR_4->lex;
  FUNC_1(&VAR_5.unmerged_str, &VAR_4->unmerged_str);
 } else {
  VAR_5.lex = VAR_2->lex;
  FUNC_1(&VAR_5.unmerged_str, &VAR_5.str);
 }

 FUNC_0(sizeof(struct cf_token), VAR_3, &VAR_5);
}
