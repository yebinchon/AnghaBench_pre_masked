
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int ULONG ;
struct TYPE_13__ {int cy; int cx; } ;
struct TYPE_17__ {TYPE_4__ sizlBitmap; } ;
struct TYPE_14__ {int left; int top; int bottom; int right; } ;
struct TYPE_12__ {int y; int x; } ;
struct TYPE_11__ {int y; int x; } ;
struct TYPE_16__ {TYPE_6__* DestSurface; TYPE_5__ DestRect; TYPE_8__* PatternSurface; int Rop4; TYPE_3__ BrushOrigin; int XlateSourceToDest; int SourceSurface; TYPE_2__ SourcePoint; TYPE_1__* Brush; } ;
struct TYPE_15__ {int lDelta; scalar_t__ pvScan0; } ;
struct TYPE_10__ {int iSolidColor; } ;
typedef int* PUSHORT ;
typedef int* PBYTE ;
typedef TYPE_7__* PBLTINFO ;
typedef int LONG ;
typedef int BYTE ;
typedef int BOOLEAN ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (int ,int,int,int) ;
 int FUNC_1 (int ,int,int,int ) ;
 int FUNC_2 (TYPE_8__*,int,int) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int VAR_0 ;

BOOLEAN
FUNC_5(PBLTINFO VAR_1)
{
   LONG VAR_2, VAR_3;
   LONG VAR_4, VAR_5;
   LONG VAR_6 = 0;
   ULONG VAR_7, VAR_8 = 0, VAR_9 = 0;
   BOOL VAR_10;
   BOOL VAR_11;
   PBYTE VAR_12;

   VAR_10 = FUNC_4(VAR_1->Rop4);
   VAR_11 = FUNC_3(VAR_1->Rop4);

   VAR_5 = VAR_1->SourcePoint.y;
   VAR_12 = (PBYTE)(
      (PBYTE)VAR_1->DestSurface->pvScan0 +
      (VAR_1->DestRect.left << 1) + VAR_1->DestRect.left +
      VAR_1->DestRect.top * VAR_1->DestSurface->lDelta);

   if (VAR_11)
   {
      if (VAR_1->PatternSurface)
      {
         VAR_6 = (VAR_1->DestRect.top - VAR_1->BrushOrigin.y) %
                    VAR_1->PatternSurface->sizlBitmap.cy;
      }
      else
      {
         if (VAR_1->Brush)
            VAR_9 = VAR_1->Brush->iSolidColor;
      }
   }

   for (VAR_3 = VAR_1->DestRect.top; VAR_3 < VAR_1->DestRect.bottom; VAR_3++)
   {
      VAR_4 = VAR_1->SourcePoint.x;

      for (VAR_2 = VAR_1->DestRect.left; VAR_2 < VAR_1->DestRect.right; VAR_2++, VAR_12 += 3, VAR_4++)
      {
         VAR_7 = *((PUSHORT)VAR_12) + (*(VAR_12 + 2) << 16);

         if (VAR_10)
         {
            VAR_8 = FUNC_1(VAR_1->SourceSurface, VAR_4, VAR_5, VAR_1->XlateSourceToDest);
         }

         if (VAR_1->PatternSurface)
         {
            VAR_9 = FUNC_2(VAR_1->PatternSurface, (VAR_2 - VAR_1->BrushOrigin.x) % VAR_1->PatternSurface->sizlBitmap.cx, VAR_6);
         }

         VAR_7 = FUNC_0(VAR_1->Rop4, VAR_7, VAR_8, VAR_9) & 0xFFFFFF;
         *(PUSHORT)(VAR_12) = VAR_7 & 0xFFFF;
         *(VAR_12 + 2) = (BYTE)(VAR_7 >> 16);
      }

      VAR_5++;
      if (VAR_1->PatternSurface)
      {
         VAR_6++;
         VAR_6 %= VAR_1->PatternSurface->sizlBitmap.cy;
      }
      VAR_12 -= (VAR_1->DestRect.right - VAR_1->DestRect.left) * 3;
      VAR_12 += VAR_1->DestSurface->lDelta;
   }

   return VAR_0;
}
