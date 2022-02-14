
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lexeme {int dummy; } ;
struct stacked_lexeme {int stack; struct lexeme lexeme; } ;
struct parser {int stack; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (char*) ;
 struct stacked_lexeme* FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(struct parser *VAR_0, struct lexeme *VAR_1)
{
    struct stacked_lexeme *VAR_2 = FUNC_2(sizeof(*VAR_2));
    if (!VAR_2)
        FUNC_1("Could not push parser lexeme");

    VAR_2->lexeme = *VAR_1;
    FUNC_0(&VAR_0->stack, &VAR_2->stack);
}
