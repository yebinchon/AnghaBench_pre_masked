
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int XLATEOBJ ;
typedef scalar_t__ USHORT ;
typedef scalar_t__ ULONG_PTR ;
typedef scalar_t__ ULONG ;
struct TYPE_11__ {int bottom; int top; int right; int left; } ;
struct TYPE_9__ {int cx; int cy; } ;
struct TYPE_10__ {int lDelta; TYPE_1__ sizlBitmap; scalar_t__ pvScan0; } ;
typedef TYPE_2__ SURFOBJ ;
typedef TYPE_3__ RECTL ;
typedef scalar_t__* PULONG ;
typedef scalar_t__ PBYTE ;
typedef int LONG ;
typedef int BOOLEAN ;


 scalar_t__ FUNC_0 (TYPE_2__*,int,int) ;
 int VAR_0 ;
 int FUNC_1 (int *,scalar_t__) ;

BOOLEAN
FUNC_2(SURFOBJ *VAR_1, SURFOBJ *VAR_2,
                         RECTL* VAR_3, RECTL *VAR_4,
                         XLATEOBJ *VAR_5, ULONG VAR_6)
{
  LONG VAR_7, VAR_8, VAR_9, VAR_10 = 0, VAR_11 = 0, VAR_12;
  ULONG *VAR_13, VAR_14, VAR_15;

  LONG VAR_16;
  LONG VAR_17;
  LONG VAR_18;
  LONG VAR_19;

  VAR_16 = VAR_3->bottom - VAR_3->top;
  VAR_17 = VAR_3->right - VAR_3->left;
  VAR_18 = VAR_4->bottom - VAR_4->top;
  VAR_19 = VAR_4->right - VAR_4->left;

  VAR_7 = VAR_3->right - ((VAR_3->right - VAR_3->left) & 0x1);
  VAR_13 = (ULONG*)((PBYTE)VAR_1->pvScan0 +
    (VAR_3->left << 1) +
    VAR_3->top * VAR_1->lDelta);
  VAR_12 = VAR_1->lDelta - ((VAR_3->right - VAR_3->left) << 1);

  for(VAR_9 = VAR_3->top; VAR_9 < VAR_3->bottom; VAR_9++)
  {
    VAR_11 = VAR_4->top+(VAR_9 - VAR_3->top) * VAR_18 / VAR_16;
    for(VAR_8 = VAR_3->left; VAR_8 < VAR_7; VAR_8 += 2, VAR_13++, VAR_10 += 2)
    {
      VAR_15 = *VAR_13;

      VAR_10 = VAR_4->left+(VAR_8 - VAR_3->left) * VAR_19 / VAR_17;
      if (VAR_10 >= 0 && VAR_11 >= 0 &&
        VAR_2->sizlBitmap.cx > VAR_10 && VAR_2->sizlBitmap.cy > VAR_11)
      {
        VAR_14 = FUNC_0(VAR_2, VAR_10, VAR_11);
        if(VAR_14 != VAR_6)
        {
          VAR_15 &= 0xFFFF0000;
          VAR_15 |= (FUNC_1(VAR_5, VAR_14) & 0xFFFF);
        }
      }

      VAR_10 = VAR_4->left+(VAR_8+1 - VAR_3->left) * VAR_19 / VAR_17;
      if (VAR_10 >= 0 && VAR_11 >= 0 &&
        VAR_2->sizlBitmap.cx > VAR_10 && VAR_2->sizlBitmap.cy > VAR_11)
      {
        VAR_14 = FUNC_0(VAR_2, VAR_10, VAR_11);
        if(VAR_14 != VAR_6)
        {
          VAR_15 &= 0xFFFF;
          VAR_15 |= (FUNC_1(VAR_5, VAR_14) << 16);
        }
      }

      *VAR_13 = VAR_15;
    }

    if(VAR_8 < VAR_3->right)
    {
      VAR_10 = VAR_4->left+(VAR_8 - VAR_3->left) * VAR_19 / VAR_17;
      if (VAR_10 >= 0 && VAR_11 >= 0 &&
        VAR_2->sizlBitmap.cx > VAR_10 && VAR_2->sizlBitmap.cy > VAR_11)
      {
        VAR_14 = FUNC_0(VAR_2, VAR_10, VAR_11);
        if(VAR_14 != VAR_6)
        {
          *((USHORT*)VAR_13) = (USHORT)FUNC_1(VAR_5,
            VAR_14);
        }
      }

      VAR_13 = (PULONG)((ULONG_PTR)VAR_13 + 2);
    }

    VAR_13 = (ULONG*)((ULONG_PTR)VAR_13 + VAR_12);
  }

  return VAR_0;
}
