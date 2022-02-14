
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct array {int num; int * elts; } ;
struct parsed_symbol {struct array stack; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int ,unsigned int) ;
 int FUNC_2 (int ) ;
 char* FUNC_3 (struct parsed_symbol*,unsigned int) ;

__attribute__((used)) static char* FUNC_4(struct parsed_symbol* VAR_0, int VAR_1)
{
    int VAR_2;
    unsigned int VAR_3, VAR_4;
    char* VAR_5;
    struct array *VAR_6 = &VAR_0->stack;

    for (VAR_3 = 0, VAR_2 = VAR_1; VAR_2 < VAR_6->num; VAR_2++)
    {
        FUNC_0(VAR_6->elts[VAR_2]);
        VAR_3 += 2 + FUNC_2(VAR_6->elts[VAR_2]);
    }
    if (!(VAR_5 = FUNC_3(VAR_0, VAR_3 - 1))) return ((void*)0);
    for (VAR_3 = 0, VAR_2 = VAR_6->num - 1; VAR_2 >= VAR_1; VAR_2--)
    {
        VAR_4 = FUNC_2(VAR_6->elts[VAR_2]);
        FUNC_1(VAR_5 + VAR_3, VAR_6->elts[VAR_2], VAR_4);
        VAR_3 += VAR_4;
        if (VAR_2 > VAR_1)
        {
            VAR_5[VAR_3++] = ':';
            VAR_5[VAR_3++] = ':';
        }
    }
    VAR_5[VAR_3] = '\0';
    return VAR_5;
}
