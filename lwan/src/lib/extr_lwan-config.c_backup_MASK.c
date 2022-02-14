
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lexer {char* pos; int cur_line; } ;



__attribute__((used)) static void FUNC_0(struct lexer *VAR_0)
{
    VAR_0->pos--;

    if (*VAR_0->pos == '\n')
        VAR_0->cur_line--;
}
