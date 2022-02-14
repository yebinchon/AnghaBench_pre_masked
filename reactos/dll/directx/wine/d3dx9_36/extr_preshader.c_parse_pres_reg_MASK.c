
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct d3dx_pres_reg {int table; int offset; } ;
typedef enum pres_reg_tables { ____Placeholder_pres_reg_tables } pres_reg_tables ;


 unsigned int FUNC_0 (int const*) ;
 int FUNC_1 (char*,unsigned int) ;
__attribute__((used)) static unsigned int *FUNC_2(unsigned int *VAR_0, struct d3dx_pres_reg *VAR_1)
{
    static const enum pres_reg_tables VAR_2[8] =
    {
        133, 132, 134, 133,
        130, 131, 129, 128
    };

    if (*VAR_0 >= FUNC_0(VAR_2) || VAR_2[*VAR_0] == 133)
    {
        FUNC_1("Unsupported register table %#x.\n", *VAR_0);
        return ((void*)0);
    }

    VAR_1->table = VAR_2[*VAR_0++];
    VAR_1->offset = *VAR_0++;
    return VAR_0;
}
