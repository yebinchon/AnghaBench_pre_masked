
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ ulong ;
struct TYPE_6__ {int type; size_t reg; scalar_t__ offset; } ;
struct TYPE_5__ {scalar_t__* Registers; } ;
typedef TYPE_1__* PROSSYM_REGISTERS ;
typedef TYPE_2__ DwarfExpr ;
typedef int Dwarf ;



 int FUNC_0 (char*,int,...) ;

int FUNC_1(Dwarf *VAR_0, DwarfExpr *VAR_1, PROSSYM_REGISTERS VAR_2, ulong *VAR_3)
{
    switch (VAR_1->type) {
    case 128:
        *VAR_3 = VAR_2->Registers[VAR_1->reg] + VAR_1->offset;
        FUNC_0("cfa reg %d (%x) offset %x = %x", VAR_1->reg, (ulong)VAR_2->Registers[VAR_1->reg], VAR_1->offset, VAR_3);
        break;
    default:
        FUNC_0("cfa->type %x", VAR_1->type);
        return -1;
    }

    return 0;
}
