
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lexer {int* pos; int* end; int cur_line; } ;



__attribute__((used)) static int FUNC_0(struct lexer *VAR_0)
{
    if (VAR_0->pos >= VAR_0->end) {
        VAR_0->pos = VAR_0->end + 1;
        return '\0';
    }

    int VAR_1 = *VAR_0->pos;
    VAR_0->pos++;

    if (VAR_1 == '\n')
        VAR_0->cur_line++;

    return VAR_1;
}
