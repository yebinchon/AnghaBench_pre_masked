
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int lindex; int dwAspect; scalar_t__ ptd; } ;
struct TYPE_8__ {int advise_flags; TYPE_1__ fmtetc; } ;
struct TYPE_7__ {int tdSize; scalar_t__ dwSize; scalar_t__ dwObjectExtentY; scalar_t__ dwObjectExtentX; scalar_t__ unknown7; int advf; int lindex; int dvAspect; } ;
typedef TYPE_2__ PresentationDataHeader ;
typedef TYPE_3__ DataCacheEntry ;


 int FUNC_0 (char*) ;

__attribute__((used)) static void FUNC_1(DataCacheEntry *VAR_0, PresentationDataHeader *VAR_1)
{
    if (VAR_0->fmtetc.ptd)
        FUNC_0("ptd not serialized\n");
    VAR_1->tdSize = sizeof(VAR_1->tdSize);
    VAR_1->dvAspect = VAR_0->fmtetc.dwAspect;
    VAR_1->lindex = VAR_0->fmtetc.lindex;
    VAR_1->advf = VAR_0->advise_flags;
    VAR_1->unknown7 = 0;
    VAR_1->dwObjectExtentX = 0;
    VAR_1->dwObjectExtentY = 0;
    VAR_1->dwSize = 0;
}
