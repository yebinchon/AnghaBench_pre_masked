
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int ulong ;
struct TYPE_8__ {int tag; } ;
struct TYPE_9__ {TYPE_1__ attrs; } ;
typedef TYPE_2__ DwarfSym ;
typedef int Dwarf ;


 scalar_t__ FUNC_0 (int *,int ,TYPE_2__*) ;
 scalar_t__ FUNC_1 (int *,TYPE_2__*,int ,TYPE_2__*) ;
 scalar_t__ FUNC_2 (int *,TYPE_2__*) ;
 int FUNC_3 (char*,int ) ;

int
FUNC_4(Dwarf *VAR_0, ulong VAR_1, ulong VAR_2, DwarfSym *VAR_3)
{
    DwarfSym VAR_4 = { };
    if (FUNC_0(VAR_0, VAR_1, &VAR_4) < 0) {
        return -1;
    }
    do {
        if (VAR_4.attrs.tag == VAR_2) {
            *VAR_3 = VAR_4;
            return 0;
        }
        if (FUNC_1(VAR_0, &VAR_4, VAR_2, VAR_3) == 0)
            return 0;
    } while(FUNC_2(VAR_0, &VAR_4) == 0);
    FUNC_3("symbol with tag 0x%lux not found", VAR_2);
    return -1;
}
