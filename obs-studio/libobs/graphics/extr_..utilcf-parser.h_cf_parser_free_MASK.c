
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cf_parser {int * cur_token; int error_list; int pp; int lex; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static inline void FUNC_3(struct cf_parser *VAR_0)
{
 FUNC_0(&VAR_0->lex);
 FUNC_1(&VAR_0->pp);
 FUNC_2(&VAR_0->error_list);

 VAR_0->cur_token = ((void*)0);
}
