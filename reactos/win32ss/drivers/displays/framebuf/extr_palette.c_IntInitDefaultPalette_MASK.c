
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int ULONG ;
struct TYPE_10__ {int * hpalDefault; } ;
struct TYPE_9__ {int peRed; int peGreen; int peBlue; scalar_t__ peFlags; } ;
struct TYPE_8__ {int BitsPerPixel; int * DefaultPalette; TYPE_2__* PaletteEntries; int BlueMask; int GreenMask; int RedMask; } ;
typedef int * PULONG ;
typedef TYPE_1__* PPDEV ;
typedef TYPE_2__* PPALETTEENTRY ;
typedef TYPE_3__* PDEVINFO ;
typedef int PALETTEENTRY ;
typedef int BOOL ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_2__* FUNC_0 (int ,int,int ) ;
 void* FUNC_1 (int ,int,int *,int ,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (TYPE_2__*,scalar_t__,int) ;

BOOL
FUNC_3(
   PPDEV VAR_5,
   PDEVINFO VAR_6)
{
   ULONG VAR_7;
   PPALETTEENTRY VAR_8;

   if (VAR_5->BitsPerPixel > 8)
   {
      VAR_5->DefaultPalette = VAR_6->hpalDefault =
         FUNC_1(VAR_3, 0, ((void*)0),
            VAR_5->RedMask, VAR_5->GreenMask, VAR_5->BlueMask);
   }
   else
   {
      VAR_5->PaletteEntries = FUNC_0(0, sizeof(PALETTEENTRY) << 8, VAR_0);
      if (VAR_5->PaletteEntries == ((void*)0))
      {
         return VAR_2;
      }

      for (VAR_7 = 256, VAR_8 = VAR_5->PaletteEntries;
           VAR_7 != 0;
           VAR_7--, VAR_8++)
      {
         VAR_8->peRed = ((VAR_7 >> 5) & 7) * 255 / 7;
         VAR_8->peGreen = ((VAR_7 >> 3) & 3) * 255 / 3;
         VAR_8->peBlue = (VAR_7 & 7) * 255 / 7;
         VAR_8->peFlags = 0;
      }

      FUNC_2(VAR_5->PaletteEntries, VAR_1, 10 * sizeof(PALETTEENTRY));
      FUNC_2(VAR_5->PaletteEntries + 246, VAR_1 + 10, 10 * sizeof(PALETTEENTRY));

      VAR_5->DefaultPalette = VAR_6->hpalDefault =
         FUNC_1(VAR_4, 256, (PULONG)VAR_5->PaletteEntries, 0, 0, 0);
    }

    return VAR_5->DefaultPalette != ((void*)0);
}
