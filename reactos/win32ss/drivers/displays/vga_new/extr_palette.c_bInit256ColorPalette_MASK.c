
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef size_t ULONG ;
struct TYPE_10__ {int ulBitCount; int cPaletteShift; int hDriver; TYPE_1__* pPal; } ;
struct TYPE_9__ {int NumEntries; int * LookupTable; scalar_t__ FirstEntry; } ;
struct TYPE_8__ {int Red; int Green; int Blue; scalar_t__ Unused; } ;
struct TYPE_7__ {int peRed; int peGreen; int peBlue; } ;
typedef TYPE_2__* PVIDEO_CLUTDATA ;
typedef TYPE_3__* PVIDEO_CLUT ;
typedef TYPE_4__* PPDEV ;
typedef int BYTE ;
typedef int BOOL ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ,int ,TYPE_3__*,int,int *,int ,size_t*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

BOOL FUNC_2(PPDEV VAR_4)
{
    BYTE VAR_5[VAR_2];
    PVIDEO_CLUT VAR_6;
    ULONG VAR_7;
    ULONG VAR_8;
    PVIDEO_CLUTDATA VAR_9;

    if (VAR_4->ulBitCount == 8)
    {




        VAR_6 = (PVIDEO_CLUT) VAR_5;
        VAR_6->NumEntries = 256;
        VAR_6->FirstEntry = 0;





        VAR_8 = 256;
        VAR_9 = (PVIDEO_CLUTDATA) (&(VAR_6->LookupTable[0]));

        while(VAR_8--)
        {
            VAR_9[VAR_8].Red = VAR_4->pPal[VAR_8].peRed >>
                                              VAR_4->cPaletteShift;
            VAR_9[VAR_8].Green = VAR_4->pPal[VAR_8].peGreen >>
                                              VAR_4->cPaletteShift;
            VAR_9[VAR_8].Blue = VAR_4->pPal[VAR_8].peBlue >>
                                              VAR_4->cPaletteShift;
            VAR_9[VAR_8].Unused = 0;
        }





        if (FUNC_1(VAR_4->hDriver,
                               VAR_1,
                               VAR_6,
                               VAR_2,
                               ((void*)0),
                               0,
                               &VAR_7))
        {
            FUNC_0((0, "Failed bEnablePalette"));
            return(VAR_0);
        }
    }

    FUNC_0((5, "Passed bEnablePalette"));

    return(VAR_3);
}
