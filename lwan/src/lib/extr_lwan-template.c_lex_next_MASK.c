
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lexer {int dummy; } ;
struct lexeme {scalar_t__ type; } ;


 scalar_t__ VAR_0 ;
 struct lexeme* FUNC_0 (struct lexer*) ;

__attribute__((used)) static struct lexeme *FUNC_1(struct lexer *VAR_1)
{
    struct lexeme *VAR_2 = FUNC_0(VAR_1);

    if (VAR_2 && VAR_2->type == VAR_0)
        return ((void*)0);

    return VAR_2;
}
