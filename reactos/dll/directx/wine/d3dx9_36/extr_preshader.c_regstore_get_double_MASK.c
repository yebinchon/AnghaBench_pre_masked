
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct d3dx_regstore {scalar_t__* tables; } ;
struct TYPE_2__ {unsigned int component_size; int type; } ;
typedef int BYTE ;


 int FUNC_0 (char*,unsigned int) ;
 double VAR_0 ;


 TYPE_1__* VAR_1 ;

__attribute__((used)) static double FUNC_1(struct d3dx_regstore *VAR_2, unsigned int VAR_3, unsigned int VAR_4)
{
    BYTE *VAR_5;

    VAR_5 = (BYTE *)VAR_2->tables[VAR_3] + VAR_1[VAR_3].component_size * VAR_4;
    switch (VAR_1[VAR_3].type)
    {
        case 128:
            return *(float *)VAR_5;
        case 129:
            return *(double *)VAR_5;
        default:
            FUNC_0("Unexpected preshader input from table %u.\n", VAR_3);
            return VAR_0;
    }
}
