
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cf_parser {int pp; int cur_token; int error_list; int lex; } ;


 int FUNC_0 (int *,char const*,char const*) ;
 int FUNC_1 (int *,int *,int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static inline bool FUNC_3(struct cf_parser *VAR_0, const char *VAR_1,
       const char *VAR_2)
{
 if (!FUNC_0(&VAR_0->lex, VAR_1, VAR_2))
  return 0;

 if (!FUNC_1(&VAR_0->pp, &VAR_0->lex, &VAR_0->error_list))
  return 0;

 VAR_0->cur_token = FUNC_2(&VAR_0->pp);
 return 1;
}
