
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef scalar_t__ uint ;
struct TYPE_16__ {scalar_t__ len; scalar_t__ data; } ;
struct TYPE_21__ {TYPE_3__ info; } ;
struct TYPE_19__ {scalar_t__ p; TYPE_5__* d; } ;
struct TYPE_14__ {scalar_t__ sibling; } ;
struct TYPE_15__ {scalar_t__ sibling; TYPE_1__ have; int haskids; } ;
struct TYPE_20__ {scalar_t__ childoff; scalar_t__ unit; TYPE_6__ b; TYPE_2__ attrs; scalar_t__ depth; int aoff; } ;
struct TYPE_17__ {scalar_t__ data; } ;
struct TYPE_18__ {TYPE_4__ info; } ;
typedef TYPE_7__ DwarfSym ;
typedef TYPE_8__ Dwarf ;


 int FUNC_0 (TYPE_8__*,TYPE_7__*) ;
 int FUNC_1 (char*,scalar_t__,...) ;

int
FUNC_2(Dwarf *VAR_0, DwarfSym *VAR_1, DwarfSym *VAR_2)
{
    uint VAR_3;

    if (!VAR_1->attrs.haskids || !VAR_1->childoff)
        return -1;

 VAR_2->unit = VAR_1->unit;
    VAR_2->aoff = VAR_1->aoff;
    VAR_2->depth = VAR_1->depth + 1;
    if(VAR_2->attrs.have.sibling){
        VAR_3 = VAR_2->attrs.sibling;
        if(VAR_3 < VAR_0->info.len && VAR_0->info.data+VAR_3 > VAR_2->b.p)
            VAR_2->b.p = VAR_0->info.data+VAR_3;
        else if (VAR_3 >= VAR_0->info.len) {
            FUNC_1("sibling reported as out of bounds %d vs %d", VAR_3, VAR_0->info.len);
            return -1;
        } else if (VAR_0->info.data+VAR_3+VAR_1->unit < VAR_2->b.p) {
            FUNC_1("subsequent sibling is listed before prev %d vs %d", VAR_3+VAR_1->unit, VAR_2->b.p - VAR_0->info.data);
            return -1;
        }
    }


    if (!VAR_2->b.d) {
        VAR_2->b = VAR_1->b;
        VAR_2->b.p = VAR_1->childoff + VAR_1->b.d->info.data;
        FUNC_1("Rewound to childoff %x\n", VAR_1->childoff);
    }

    return FUNC_0(VAR_0, VAR_2);
}
