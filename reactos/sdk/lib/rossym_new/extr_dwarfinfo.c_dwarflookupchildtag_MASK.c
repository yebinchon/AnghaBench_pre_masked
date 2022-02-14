
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ ulong ;
struct TYPE_8__ {scalar_t__ tag; scalar_t__ haskids; } ;
struct TYPE_9__ {TYPE_1__ attrs; } ;
typedef TYPE_2__ DwarfSym ;
typedef int Dwarf ;


 int FUNC_0 (int *,TYPE_2__*) ;
 int FUNC_1 (int *,TYPE_2__*,TYPE_2__*) ;

int
FUNC_2(Dwarf *VAR_0, DwarfSym *VAR_1, ulong VAR_2, DwarfSym *VAR_3)
{
    int VAR_4 = FUNC_1(VAR_0, VAR_1, VAR_3);
    while (VAR_4 == 0 && VAR_3->attrs.tag != VAR_2) {
        if (VAR_3->attrs.haskids) {
            DwarfSym VAR_5 = *VAR_3;
            int VAR_6 = FUNC_2(VAR_0, &VAR_5, VAR_2, VAR_3);
            if (VAR_6 == 0) {
                return VAR_6;
            }
        }
        VAR_4 = FUNC_0(VAR_0, VAR_3);
    }
    return VAR_4;
}
