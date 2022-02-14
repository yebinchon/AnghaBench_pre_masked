
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cf_token {scalar_t__ type; } ;
struct cf_preprocessor {int ignore_state; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct cf_preprocessor*,struct cf_token*) ;
 int FUNC_1 (struct cf_preprocessor*,int,struct cf_token**) ;
 int FUNC_2 (struct cf_token**,int) ;

__attribute__((used)) static inline bool FUNC_3(struct cf_preprocessor *VAR_1,
       bool VAR_2,
       struct cf_token **VAR_3)
{
 bool VAR_4;

 if (!FUNC_2(VAR_3, 1))
  return 0;

 if (!VAR_1->ignore_state) {
  VAR_1->ignore_state = VAR_2;
  FUNC_1(VAR_1, 1, VAR_3);
  VAR_1->ignore_state = 0;
 } else {
  FUNC_1(VAR_1, 1, VAR_3);
 }

 VAR_4 = ((*VAR_3)->type == VAR_0);
 if (VAR_4)
  FUNC_0(VAR_1, *VAR_3);
 return !VAR_4;
}
