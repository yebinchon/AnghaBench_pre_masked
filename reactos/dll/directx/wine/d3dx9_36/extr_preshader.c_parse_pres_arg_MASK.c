
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ table; int offset; } ;
struct d3dx_pres_operand {TYPE_1__ reg; TYPE_1__ index_reg; } ;


 int FUNC_0 (char*,unsigned int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (char*,unsigned int) ;
 unsigned int* FUNC_2 (unsigned int*,TYPE_1__*) ;

__attribute__((used)) static unsigned int *FUNC_3(unsigned int *VAR_2, unsigned int VAR_3, struct d3dx_pres_operand *VAR_4)
{
    if (VAR_3 < 3 || (*VAR_2 && VAR_3 < 5))
    {
        FUNC_1("Byte code buffer ends unexpectedly, count %u.\n", VAR_3);
        return ((void*)0);
    }

    if (*VAR_2)
    {
        if (*VAR_2 != 1)
        {
            FUNC_0("Unknown relative addressing flag, word %#x.\n", *VAR_2);
            return ((void*)0);
        }
        VAR_2 = FUNC_2(VAR_2 + 1, &VAR_4->index_reg);
        if (!VAR_2)
            return ((void*)0);
    }
    else
    {
        VAR_4->index_reg.table = VAR_0;
        ++VAR_2;
    }

    VAR_2 = FUNC_2(VAR_2, &VAR_4->reg);

    if (VAR_4->reg.table == VAR_1)
        VAR_4->reg.offset /= 4;
    return VAR_2;
}
