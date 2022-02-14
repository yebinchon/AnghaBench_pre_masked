
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int ULONG ;
struct TYPE_10__ {int palPalEntry; } ;
struct TYPE_9__ {scalar_t__ hpalDefault; } ;
struct TYPE_8__ {void* peFlags; void* peBlue; void* peGreen; void* peRed; } ;
struct TYPE_7__ {int ulBitCount; scalar_t__ hpalDefault; int flBlue; int flGreen; int flRed; TYPE_2__* pPal; } ;
typedef int PULONG ;
typedef TYPE_1__* PPDEV ;
typedef TYPE_2__* PPALETTEENTRY ;
typedef int PALETTEENTRY ;
typedef scalar_t__ HPALETTE ;
typedef TYPE_3__ DEVINFO ;
typedef void* BYTE ;
typedef int BOOL ;


 int VAR_0 ;
 void** VAR_1 ;
 scalar_t__ FUNC_0 (int ,int,int ) ;
 void* FUNC_1 (int ,int,int ,int ,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (char*) ;
 int VAR_5 ;
 TYPE_4__ VAR_6 ;

BOOL FUNC_3(PPDEV VAR_7, DEVINFO *VAR_8)
{
        VAR_7->hpalDefault =
        VAR_8->hpalDefault = FUNC_1(VAR_4,

                                                   16,
                                                   (PULONG) &VAR_6.palPalEntry,

                                                   0,0,0);

        if (VAR_7->hpalDefault == (HPALETTE) 0)
        {
            FUNC_2("DISP bInitDefaultPalette failed EngCreatePalette\n");



            return(VAR_2);
        }





        return(VAR_5);
}
