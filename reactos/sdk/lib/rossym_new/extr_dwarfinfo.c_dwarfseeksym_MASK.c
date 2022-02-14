
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef scalar_t__ ulong ;
struct TYPE_13__ {scalar_t__ data; } ;
struct TYPE_17__ {TYPE_1__ info; } ;
struct TYPE_14__ {int tag; } ;
struct TYPE_15__ {int ep; scalar_t__ p; TYPE_5__* d; } ;
struct TYPE_16__ {TYPE_2__ attrs; TYPE_3__ b; } ;
typedef TYPE_4__ DwarfSym ;
typedef TYPE_5__ Dwarf ;


 scalar_t__ FUNC_0 (TYPE_5__*,scalar_t__,TYPE_4__*) ;
 int FUNC_1 (TYPE_5__*,TYPE_4__*,TYPE_4__*) ;
 int FUNC_2 (char*,scalar_t__,scalar_t__,...) ;

int
FUNC_3(Dwarf *VAR_0, ulong VAR_1, ulong VAR_2, DwarfSym *VAR_3)
{
    DwarfSym VAR_4 = { };
    if(FUNC_0(VAR_0, VAR_1, &VAR_4) < 0)
        return -1;
    FUNC_2("dwarfseeksym: unit %x off %x\n", VAR_1, VAR_2);
    VAR_3->b.d = VAR_0;
    VAR_3->b.p = VAR_0->info.data + VAR_1 + VAR_2;
    VAR_3->b.ep = VAR_4.b.ep;
    if(FUNC_1(VAR_0, &VAR_4, VAR_3) == -1)
        return -1;
    FUNC_2("dwarfseeksym: unit %x off %x, tag %x", VAR_1, VAR_2, VAR_3->attrs.tag);
    return 0;
}
