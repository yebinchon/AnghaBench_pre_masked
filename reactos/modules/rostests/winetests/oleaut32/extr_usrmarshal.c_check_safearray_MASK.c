
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int WORD ;
typedef int VARTYPE ;
typedef int ULONG ;
struct TYPE_13__ {int cElements; int lLbound; } ;
struct TYPE_12__ {int cDims; int fFeatures; int cLocks; TYPE_6__* rgsabound; } ;
struct TYPE_11__ {int cElements; int lLbound; } ;
typedef int SF_TYPE ;
typedef TYPE_1__ SAFEARRAYBOUND ;
typedef TYPE_2__* LPSAFEARRAY ;
typedef int GUID ;
typedef int DWORD ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *,unsigned char*) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_2__*,int) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 scalar_t__ FUNC_5 (TYPE_1__ const*,TYPE_6__*,int) ;
 int FUNC_6 (int,char*,...) ;
 int FUNC_7 (TYPE_2__*,int *) ;
 int FUNC_8 (TYPE_2__*,int*) ;

__attribute__((used)) static void FUNC_9(void *VAR_1, LPSAFEARRAY VAR_2)
{
    unsigned char *VAR_3 = VAR_1;
    const SAFEARRAYBOUND *VAR_4;
    VARTYPE VAR_5;
    SF_TYPE VAR_6;
    ULONG VAR_7;
    int VAR_8;

    if(!VAR_2)
    {
        FUNC_6(*(DWORD *)VAR_3 == 0, "wiresa + 0x0 should be NULL instead of 0x%08x\n", *(DWORD *)VAR_3);
        return;
    }

    if (!&FUNC_8 || !&FUNC_7)
        return;

    if(FUNC_0(FUNC_8(VAR_2, &VAR_5)))
        VAR_5 = 0;

    VAR_6 = FUNC_4(VAR_2);
    VAR_7 = FUNC_3(VAR_2);

    FUNC_6(*(DWORD *)VAR_3, "wiresa + 0x0 should be non-NULL instead of 0x%08x\n", *(DWORD *)VAR_3);
    VAR_3 += sizeof(DWORD);
    FUNC_6(*(DWORD *)VAR_3 == VAR_2->cDims, "wiresa + 0x4 should be lpsa->cDims instead of 0x%08x\n", *(DWORD *)VAR_3);
    VAR_3 += sizeof(DWORD);
    FUNC_6(*(WORD *)VAR_3 == VAR_2->cDims, "wiresa + 0x8 should be lpsa->cDims instead of 0x%04x\n", *(WORD *)VAR_3);
    VAR_3 += sizeof(WORD);
    FUNC_6(*(WORD *)VAR_3 == VAR_2->fFeatures, "wiresa + 0xa should be lpsa->fFeatures instead of 0x%08x\n", *(WORD *)VAR_3);
    VAR_3 += sizeof(WORD);
    FUNC_6(*(DWORD *)VAR_3 == FUNC_2(VAR_2, VAR_6), "wiresa + 0xc should be 0x%08x instead of 0x%08x\n", FUNC_2(VAR_2, VAR_6), *(DWORD *)VAR_3);
    VAR_3 += sizeof(DWORD);
    FUNC_6(*(WORD *)VAR_3 == VAR_2->cLocks, "wiresa + 0x10 should be lpsa->cLocks instead of 0x%04x\n", *(WORD *)VAR_3);
    VAR_3 += sizeof(WORD);
    FUNC_6(*(WORD *)VAR_3 == VAR_5, "wiresa + 0x12 should be %04x instead of 0x%04x\n", VAR_5, *(WORD *)VAR_3);
    VAR_3 += sizeof(WORD);
    FUNC_6(*(DWORD *)VAR_3 == VAR_6, "wiresa + 0x14 should be %08x instead of 0x%08x\n", (DWORD)VAR_6, *(DWORD *)VAR_3);
    VAR_3 += sizeof(DWORD);
    FUNC_6(*(DWORD *)VAR_3 == VAR_7, "wiresa + 0x18 should be %u instead of %u\n", VAR_7, *(DWORD *)VAR_3);
    VAR_3 += sizeof(DWORD);
    FUNC_6(*(DWORD *)VAR_3, "wiresa + 0x1c should be non-zero instead of 0x%08x\n", *(DWORD *)VAR_3);
    VAR_3 += sizeof(DWORD);
    if(VAR_6 == VAR_0)
    {
        GUID VAR_9;
        FUNC_7(VAR_2, &VAR_9);
        FUNC_6(FUNC_1(&VAR_9, VAR_3), "guid mismatch\n");
        VAR_3 += sizeof(GUID);
    }


    VAR_4 = (SAFEARRAYBOUND*)VAR_3;
    for(VAR_8=0; VAR_8<VAR_2->cDims; VAR_8++)
    {
        FUNC_6(FUNC_5(VAR_4, &VAR_2->rgsabound[VAR_2->cDims-VAR_8-1], sizeof(SAFEARRAYBOUND)) == 0,
           "bounds mismatch for dimension %d, got (%d,%d), expected (%d,%d)\n", VAR_8,
            VAR_4->lLbound, VAR_4->cElements, VAR_2->rgsabound[VAR_2->cDims-VAR_8-1].lLbound,
            VAR_2->rgsabound[VAR_2->cDims-VAR_8-1].cElements);
        VAR_4++;
    }

    VAR_3 += sizeof(VAR_2->rgsabound[0]) * VAR_2->cDims;

    FUNC_6(*(DWORD *)VAR_3 == VAR_7, "wiresa + 0x28 should be %u instead of %u\n", VAR_7, *(DWORD*)VAR_3);
    VAR_3 += sizeof(DWORD);

}
