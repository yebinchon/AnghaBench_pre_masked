
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int ULONG ;
struct TYPE_8__ {int cSlotsPerSection; int ulTag; } ;
struct TYPE_7__ {int bitmap; int aulBits; scalar_t__ cAllocCount; scalar_t__ ulCommitBitmap; int * pvBaseAddress; } ;
typedef int SIZE_T ;
typedef int * PVOID ;
typedef TYPE_1__* PGDI_POOL_SECTION ;
typedef TYPE_2__* PGDI_POOL ;
typedef int NTSTATUS ;
typedef int GDI_POOL_SECTION ;


 TYPE_1__* FUNC_0 (int ,int,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int VAR_2 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ,int) ;
 int FUNC_6 (int ,int **,int ,int*,int ,int ) ;

__attribute__((used)) static
PGDI_POOL_SECTION
FUNC_7(PGDI_POOL VAR_3)
{
    PGDI_POOL_SECTION VAR_4;
    PVOID VAR_5;
    SIZE_T VAR_6;
    NTSTATUS VAR_7;


    VAR_6 = sizeof(GDI_POOL_SECTION) + VAR_3->cSlotsPerSection / sizeof(ULONG);
    VAR_4 = FUNC_0(0, VAR_6, VAR_3->ulTag);
    if (!VAR_4)
    {
        return ((void*)0);
    }


    VAR_6 = VAR_0;
    VAR_5 = ((void*)0);
    VAR_7 = FUNC_6(FUNC_3(),
                                     &VAR_5,
                                     0,
                                     &VAR_6,
                                     VAR_1,
                                     VAR_2);
    if (!FUNC_2(VAR_7))
    {
        FUNC_1(VAR_4);
        return ((void*)0);
    }


    VAR_4->pvBaseAddress = VAR_5;
    VAR_4->ulCommitBitmap = 0;
    VAR_4->cAllocCount = 0;
    FUNC_5(&VAR_4->bitmap,
                        VAR_4->aulBits,
                        VAR_3->cSlotsPerSection);
    FUNC_4(&VAR_4->bitmap);


    return VAR_4;
}
