
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_9__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_12__ ;


typedef int ULONG ;
struct TYPE_21__ {int lDelta; scalar_t__ pvScan0; } ;
struct TYPE_15__ {int cy; int cx; } ;
struct TYPE_20__ {TYPE_2__ sizlBitmap; } ;
struct TYPE_14__ {int y; int x; } ;
struct TYPE_18__ {int right; int left; int top; int bottom; } ;
struct TYPE_17__ {int y; int x; } ;
struct TYPE_19__ {TYPE_7__* PatternSurface; int Rop4; TYPE_9__* DestSurface; TYPE_1__ BrushOrigin; int XlateSourceToDest; int SourceSurface; TYPE_5__ DestRect; TYPE_4__ SourcePoint; TYPE_3__* Brush; } ;
struct TYPE_16__ {int iSolidColor; } ;
struct TYPE_13__ {int x; } ;
typedef int* PULONG ;
typedef int* PBYTE ;
typedef TYPE_6__* PBLTINFO ;
typedef int LONG ;
typedef scalar_t__ BOOLEAN ;


 TYPE_12__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_9__*,int,int) ;
 int FUNC_1 (TYPE_9__*,int,int,int) ;
 int FUNC_2 (int ,int,int,int) ;
 int FUNC_3 (int ,int,int,int ) ;
 int FUNC_4 (TYPE_7__*,int,int) ;
 int VAR_2 ;
 TYPE_7__* VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

BOOLEAN
FUNC_7(PBLTINFO VAR_9)
{
  LONG VAR_10, VAR_11;
  LONG VAR_12, VAR_13;
  LONG VAR_14 = 0;
  ULONG VAR_15, VAR_16 = 0, VAR_17 = 0;
  ULONG VAR_18;
  BOOLEAN VAR_19;
  BOOLEAN VAR_20;
  PULONG VAR_21;
  LONG VAR_22;

  VAR_19 = FUNC_6(VAR_9->Rop4);
  VAR_20 = FUNC_5(VAR_9->Rop4);

  VAR_22 = VAR_9->DestRect.right -
    ((VAR_9->DestRect.right - VAR_9->DestRect.left) & 31);
  VAR_13 = VAR_9->SourcePoint.y;

  if (VAR_20)
  {
    if (VAR_9->PatternSurface)
    {
      VAR_14 = (VAR_9->DestRect.top + VAR_9->BrushOrigin.y) %
        VAR_9->PatternSurface->sizlBitmap.cy;
    }
    else
    {

      if (VAR_9->Brush)
        VAR_17 = VAR_9->Brush->iSolidColor;
    }
  }

  for (VAR_11 = VAR_9->DestRect.top; VAR_11 < VAR_9->DestRect.bottom; VAR_11++)
  {
    VAR_10 = VAR_9->DestRect.left;
    VAR_12 = VAR_9->SourcePoint.x;
    VAR_21 = (PULONG)(
      (PBYTE)VAR_9->DestSurface->pvScan0 +
      (VAR_9->DestRect.left >> 3) +
      VAR_11 * VAR_9->DestSurface->lDelta);

    if (VAR_10 & 31)
    {
    }

    for (; VAR_10 < VAR_22; VAR_10 += 32, VAR_21++, VAR_12 += 32)
    {
      VAR_15 = *VAR_21;

      if (VAR_19)
      {
        VAR_16 = 0;
        for (VAR_18 = 0; VAR_18 < 8; VAR_18++)
        {
          VAR_16 |= FUNC_3(VAR_9->SourceSurface, VAR_12 + VAR_18, VAR_13, VAR_9->XlateSourceToDest) << (7 - VAR_18);
          VAR_16 |= FUNC_3(VAR_9->SourceSurface, VAR_12 + VAR_18 + 8, VAR_13, VAR_9->XlateSourceToDest) << (8 + (7 - VAR_18));
          VAR_16 |= FUNC_3(VAR_9->SourceSurface, VAR_12 + VAR_18 + 16, VAR_13, VAR_9->XlateSourceToDest) << (16 + (7 - VAR_18));
          VAR_16 |= FUNC_3(VAR_9->SourceSurface, VAR_12 + VAR_18 + 24, VAR_13, VAR_9->XlateSourceToDest) << (24 + (7 - VAR_18));
        }
      }

      if (VAR_9->PatternSurface)
      {
        VAR_17 = 0;
        for (VAR_18 = 0; VAR_18 < 8; VAR_18++)
        {
          VAR_17 |= FUNC_4(VAR_9->PatternSurface, (VAR_10 + VAR_9->BrushOrigin.x + VAR_18) % VAR_9->PatternSurface->sizlBitmap.cx, VAR_14) << (7 - VAR_18);
          VAR_17 |= FUNC_4(VAR_9->PatternSurface, (VAR_10 + VAR_9->BrushOrigin.x + VAR_18 + 8) % VAR_9->PatternSurface->sizlBitmap.cx, VAR_14) << (8 + (7 - VAR_18));
          VAR_17 |= FUNC_4(VAR_9->PatternSurface, (VAR_10 + VAR_9->BrushOrigin.x + VAR_18 + 16) % VAR_9->PatternSurface->sizlBitmap.cx, VAR_14) << (16 + (7 - VAR_18));
          VAR_17 |= FUNC_4(VAR_9->PatternSurface, (VAR_10 + VAR_9->BrushOrigin.x + VAR_18 + 24) % VAR_9->PatternSurface->sizlBitmap.cx, VAR_14) << (24 + (7 - VAR_18));
        }
      }

      *VAR_21 = FUNC_2(VAR_9->Rop4, VAR_15, VAR_16, VAR_17);
    }

    if (VAR_10 < VAR_9->DestRect.right)
    {
      for (; VAR_10 < VAR_9->DestRect.right; VAR_10++, VAR_12++)
      {
        VAR_15 = FUNC_0(VAR_9->DestSurface, VAR_10, VAR_11);

        if (VAR_19)
        {
          VAR_16 = FUNC_3(VAR_9->SourceSurface, VAR_12, VAR_13, VAR_9->XlateSourceToDest);
        }

        if (VAR_9->PatternSurface)
        {
          VAR_17 = FUNC_4(VAR_9->PatternSurface, (VAR_10 + VAR_9->BrushOrigin.x) % VAR_9->PatternSurface->sizlBitmap.cx, VAR_14);
        }

        FUNC_1(VAR_9->DestSurface, VAR_10, VAR_11, FUNC_2(VAR_9->Rop4, VAR_15, VAR_16, VAR_17) & 0xF);
      }
    }

    VAR_13++;
    if (VAR_9->PatternSurface)
    {
      VAR_14++;
      VAR_14 %= VAR_9->PatternSurface->sizlBitmap.cy;
    }
  }

  return VAR_6;
}
