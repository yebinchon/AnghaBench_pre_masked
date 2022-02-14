
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct d3dx_regstore {scalar_t__* tables; } ;
struct TYPE_2__ {unsigned int component_size; int type; } ;
typedef int BYTE ;
typedef int BOOL ;


 int FUNC_0 (char*,int) ;




 int FUNC_1 (double) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static void FUNC_2(struct d3dx_regstore *VAR_1, unsigned int VAR_2, unsigned int VAR_3, double VAR_4)
{
    BYTE *VAR_5;

    VAR_5 = (BYTE *)VAR_1->tables[VAR_2] + VAR_0[VAR_2].component_size * VAR_3;
    switch (VAR_0[VAR_2].type)
    {
        case 129 : *(float *)VAR_5 = VAR_4; break;
        case 130: *(double *)VAR_5 = VAR_4; break;
        case 128 : *(int *)VAR_5 = FUNC_1(VAR_4); break;
        case 131 : *(BOOL *)VAR_5 = !!VAR_4; break;
        default:
            FUNC_0("Bad type %u.\n", VAR_0[VAR_2].type);
            break;
    }
}
