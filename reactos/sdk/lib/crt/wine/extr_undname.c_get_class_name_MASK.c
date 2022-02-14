
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int num; } ;
struct parsed_symbol {TYPE_1__ stack; } ;


 scalar_t__ FUNC_0 (struct parsed_symbol*) ;
 char* FUNC_1 (struct parsed_symbol*,unsigned int) ;

__attribute__((used)) static char* FUNC_2(struct parsed_symbol* VAR_0)
{
    unsigned VAR_1 = VAR_0->stack.num;
    char* VAR_2 = ((void*)0);

    if (FUNC_0(VAR_0))
        VAR_2 = FUNC_1(VAR_0, VAR_1);
    VAR_0->stack.num = VAR_1;
    return VAR_2;
}
