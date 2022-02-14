
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef scalar_t__ ulong ;
struct TYPE_18__ {scalar_t__ haskids; int tag; } ;
struct TYPE_17__ {int * p; int * ep; } ;
struct TYPE_14__ {int * data; } ;
struct TYPE_16__ {TYPE_1__ info; } ;
struct TYPE_15__ {int * childoff; TYPE_5__ b; TYPE_6__ attrs; int unit; int aoff; scalar_t__ num; } ;
typedef TYPE_2__ DwarfSym ;
typedef int DwarfAbbrev ;
typedef TYPE_3__ Dwarf ;


 scalar_t__ FUNC_0 (TYPE_5__*) ;
 int * FUNC_1 (TYPE_3__*,int ,scalar_t__) ;
 int FUNC_2 (TYPE_3__*,TYPE_2__*,TYPE_2__*) ;
 int * VAR_0 ;
 scalar_t__ FUNC_3 (TYPE_3__*,TYPE_5__*,int ,int ,int *,TYPE_6__*) ;
 int FUNC_4 (char*,scalar_t__,...) ;

int
FUNC_5(Dwarf *VAR_1, DwarfSym *VAR_2)
{
    ulong VAR_3;
    DwarfAbbrev *VAR_4;

    FUNC_4("sym at %x (left %x)\n", VAR_2->b.p - VAR_1->info.data, VAR_2->b.ep - VAR_2->b.p);

    VAR_3 = FUNC_0(&VAR_2->b);
    FUNC_4("abbrev num %x\n", VAR_3);
    VAR_2->num = VAR_3;
    if(VAR_3 == 0){
        return -1;
    }

    VAR_4 = FUNC_1(VAR_1, VAR_2->aoff, VAR_3);
    FUNC_4("a %p\n", VAR_4);
    if(VAR_4 == VAR_0){
        FUNC_4("getabbrev %x %x for %x", VAR_2->aoff, VAR_3, VAR_2->unit);
        return -1;
    }

    if(FUNC_3(VAR_1, &VAR_2->b, VAR_2->attrs.tag, VAR_2->unit, VAR_4, &VAR_2->attrs) < 0) {
        return -1;
    }

    if (VAR_2->attrs.haskids) {
        DwarfSym VAR_5 = { };
        VAR_2->childoff = VAR_2->b.p - VAR_1->info.data;
        FUNC_4("Set childoff at %x\n", VAR_2->childoff);
        int VAR_6 = FUNC_2(VAR_1, VAR_2, &VAR_5);
        while (VAR_6 == 0) {
            VAR_6 = FUNC_5(VAR_1, &VAR_5);
        }
        VAR_2->b = VAR_5.b;
    } else {
        VAR_2->childoff = 0;
    }
    return 0;
}
