
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int VIDEO_POINTER_ATTRIBUTES ;
typedef int ULONG ;
struct TYPE_7__ {int Width; int Height; int WidthInBytes; scalar_t__ Row; scalar_t__ Column; scalar_t__ Enable; scalar_t__ Flags; } ;
struct TYPE_5__ {scalar_t__ y; scalar_t__ x; } ;
struct TYPE_6__ {int ImageBehindCursor; TYPE_4__* pPointerAttributes; TYPE_1__ xyHotSpot; } ;
typedef TYPE_2__* PPDEV ;
typedef int BOOL ;


 int VAR_0 ;
 TYPE_4__* FUNC_0 (int ,int,int ) ;
 int VAR_1 ;
 int FUNC_1 (int) ;

BOOL FUNC_2(PPDEV VAR_2)
{
    ULONG VAR_3 = 32, VAR_4 = 32;
    ULONG VAR_5;
    ULONG VAR_6;

    VAR_2->xyHotSpot.x = 0;
    VAR_2->xyHotSpot.y = 0;


    VAR_5 = sizeof(VIDEO_POINTER_ATTRIBUTES) +
      ((VAR_3 * VAR_4 * 2) >> 3);


    VAR_2->pPointerAttributes = FUNC_0(0, VAR_5, VAR_0);

    VAR_2->pPointerAttributes->Flags = 0;
    VAR_2->pPointerAttributes->Width = VAR_3;
    VAR_2->pPointerAttributes->Height = VAR_4;
    VAR_2->pPointerAttributes->WidthInBytes = VAR_3 >> 3;
    VAR_2->pPointerAttributes->Enable = 0;
    VAR_2->pPointerAttributes->Column = 0;
    VAR_2->pPointerAttributes->Row = 0;


    VAR_6 = ((((VAR_3 + 7) & ~0x7) + 16) * VAR_4) >> 3;
    VAR_2->ImageBehindCursor = FUNC_1(VAR_6);

    return VAR_1;
}
