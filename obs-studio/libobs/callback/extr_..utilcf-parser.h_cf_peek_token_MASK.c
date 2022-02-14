
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cf_token {int dummy; } ;
struct cf_parser {struct cf_token* cur_token; } ;


 int FUNC_0 (struct cf_parser*) ;

__attribute__((used)) static inline bool FUNC_1(struct cf_parser *VAR_0, struct cf_token *VAR_1)
{
 struct cf_token *VAR_2 = VAR_0->cur_token;
 bool VAR_3 = FUNC_0(VAR_0);

 *VAR_1 = *VAR_0->cur_token;
 VAR_0->cur_token = VAR_2;

 return VAR_3;
}
