
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct parser {int lexer; } ;
struct lexeme {scalar_t__ type; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 struct lexeme* FUNC_0 (int *) ;
 void* FUNC_1 (struct parser*,struct lexeme*) ;
 void* FUNC_2 (struct parser*,struct lexeme*) ;
 void* FUNC_3 (struct lexeme*) ;

__attribute__((used)) static void *FUNC_4(struct parser *VAR_3, struct lexeme *VAR_4)
{
    if (VAR_4->type == VAR_0) {
        struct lexeme *VAR_5;

        if ((VAR_5 = FUNC_0(&VAR_3->lexer))) {
            if (VAR_5->type == VAR_2)
                return FUNC_1(VAR_3, VAR_4);

            if (VAR_5->type == VAR_1)
                return FUNC_2(VAR_3, VAR_4);

            return FUNC_3(VAR_5);
        }
    }

    return FUNC_3(VAR_4);
}
