
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lexer {int* pos; int* end; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct lexer *VAR_1)
{
    if (VAR_1->pos >= VAR_1->end)
        return VAR_0;
    int VAR_2 = *VAR_1->pos;
    VAR_1->pos++;
    return VAR_2;
}
