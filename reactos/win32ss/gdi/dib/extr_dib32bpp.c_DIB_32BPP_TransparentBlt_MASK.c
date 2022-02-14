
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int XLATEOBJ ;
typedef scalar_t__ ULONG_PTR ;
typedef int ULONG ;
struct TYPE_11__ {scalar_t__ bottom; scalar_t__ top; scalar_t__ right; scalar_t__ left; } ;
struct TYPE_9__ {scalar_t__ cx; scalar_t__ cy; } ;
struct TYPE_10__ {int lDelta; TYPE_1__ sizlBitmap; scalar_t__ pvScan0; } ;
typedef TYPE_2__ SURFOBJ ;
typedef TYPE_3__ RECTL ;
typedef scalar_t__ PBYTE ;
typedef scalar_t__ LONG ;
typedef int BOOLEAN ;


 int FUNC_0 (TYPE_2__*,scalar_t__,scalar_t__) ;
 int VAR_0 ;
 int FUNC_1 (int *,int) ;

BOOLEAN
FUNC_2(SURFOBJ *VAR_1, SURFOBJ *VAR_2,
                         RECTL* VAR_3, RECTL *VAR_4,
                         XLATEOBJ *VAR_5, ULONG VAR_6)
{
  LONG VAR_7, VAR_8, VAR_9, VAR_10 = 0, VAR_11;
  ULONG *VAR_12, VAR_13 = 0;

  LONG VAR_14;
  LONG VAR_15;
  LONG VAR_16;
  LONG VAR_17;

  VAR_14 = VAR_3->bottom - VAR_3->top;
  VAR_15 = VAR_3->right - VAR_3->left;
  VAR_16 = VAR_4->bottom - VAR_4->top;
  VAR_17 = VAR_4->right - VAR_4->left;

  VAR_12 = (ULONG*)((PBYTE)VAR_1->pvScan0 +
    (VAR_3->left << 2) +
    VAR_3->top * VAR_1->lDelta);
  VAR_11 = VAR_1->lDelta - ((VAR_3->right - VAR_3->left) << 2);

  for (VAR_8 = VAR_3->top; VAR_8 < VAR_3->bottom; VAR_8++)
  {
    VAR_10 = VAR_4->top+(VAR_8 - VAR_3->top) * VAR_16 / VAR_14;
    for (VAR_7 = VAR_3->left; VAR_7 < VAR_3->right; VAR_7++, VAR_12++)
    {
      VAR_9 = VAR_4->left+(VAR_7 - VAR_3->left) * VAR_17 / VAR_15;
      if (VAR_9 >= 0 && VAR_10 >= 0 &&
        VAR_2->sizlBitmap.cx > VAR_9 && VAR_2->sizlBitmap.cy > VAR_10)
      {
        VAR_13 = FUNC_0(VAR_2, VAR_9, VAR_10);
        if ((0x00FFFFFF & VAR_13) != (0x00FFFFFF & VAR_6))
        {
          *VAR_12 = FUNC_1(VAR_5, VAR_13);
        }
      }
    }

    VAR_12 = (ULONG*)((ULONG_PTR)VAR_12 + VAR_11);
  }

  return VAR_0;
}
