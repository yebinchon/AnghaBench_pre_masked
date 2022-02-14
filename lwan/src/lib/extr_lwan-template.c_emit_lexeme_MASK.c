
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lexer {int pos; int start; int ring_buffer; } ;
struct lexeme {int dummy; } ;


 int FUNC_0 (int *,struct lexeme*) ;

__attribute__((used)) static void FUNC_1(struct lexer *VAR_0, struct lexeme *VAR_1)
{
    FUNC_0(&VAR_0->ring_buffer, VAR_1);
    VAR_0->start = VAR_0->pos;
}
