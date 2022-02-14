
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int XLATEOBJ ;
typedef scalar_t__ ULONG_PTR ;
typedef int UCHAR ;
struct TYPE_18__ {scalar_t__ BlendOp; scalar_t__ BlendFlags; int AlphaFormat; int SourceConstantAlpha; } ;
struct TYPE_17__ {TYPE_6__ BlendFunction; } ;
struct TYPE_13__ {int red; int green; int blue; int alpha; } ;
struct TYPE_16__ {int ul; TYPE_1__ col; } ;
struct TYPE_15__ {int left; int top; int right; int bottom; } ;
struct TYPE_14__ {int lDelta; scalar_t__ pvScan0; int iBitmapFormat; } ;
typedef TYPE_2__ SURFOBJ ;
typedef TYPE_3__ RECTL ;
typedef int * PULONG ;
typedef TYPE_4__ NICEPIXEL32 ;
typedef int INT ;
typedef int CLIPOBJ ;
typedef int BOOLEAN ;
typedef TYPE_5__ BLENDOBJ ;
typedef TYPE_6__ BLENDFUNCTION ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (TYPE_2__*,int,int,int *) ;
 int FUNC_3 (char*,int,int,int,int,int,int,int,int) ;
 int FUNC_4 (char*,...) ;
 int VAR_2 ;
 int VAR_3 ;

BOOLEAN
FUNC_5(SURFOBJ* VAR_4, SURFOBJ* VAR_5, RECTL* VAR_6,
                     RECTL* VAR_7, CLIPOBJ* VAR_8,
                     XLATEOBJ* VAR_9, BLENDOBJ* VAR_10)
{
  INT VAR_11, VAR_12, VAR_13, VAR_14;
  register PULONG VAR_15;
  BLENDFUNCTION VAR_16;
  register NICEPIXEL32 VAR_17, VAR_18;
  UCHAR VAR_19, VAR_20;

  FUNC_3("DIB_32BPP_AlphaBlend: srcRect: (%d,%d)-(%d,%d), dstRect: (%d,%d)-(%d,%d)\n",
    VAR_7->left, VAR_7->top, VAR_7->right, VAR_7->bottom,
    VAR_6->left, VAR_6->top, VAR_6->right, VAR_6->bottom);

  VAR_16 = VAR_10->BlendFunction;
  if (VAR_16.BlendOp != VAR_1)
  {
    FUNC_4("BlendOp != AC_SRC_OVER\n");
    return VAR_2;
  }
  if (VAR_16.BlendFlags != 0)
  {
    FUNC_4("BlendFlags != 0\n");
    return VAR_2;
  }
  if ((VAR_16.AlphaFormat & ~VAR_0) != 0)
  {
    FUNC_4("Unsupported AlphaFormat (0x%x)\n", VAR_16.AlphaFormat);
    return VAR_2;
  }
  if ((VAR_16.AlphaFormat & VAR_0) != 0 &&
       FUNC_0(VAR_5->iBitmapFormat) != 32)
  {
    FUNC_4("Source bitmap must be 32bpp when AC_SRC_ALPHA is set\n");
    return VAR_2;
  }

  VAR_15 = (PULONG)((ULONG_PTR)VAR_4->pvScan0 + (VAR_6->top * VAR_4->lDelta) +
    (VAR_6->left << 2));
  VAR_20 = FUNC_0(VAR_5->iBitmapFormat);

  VAR_11 = 0;
   VAR_14 = VAR_7->top;
   while (++VAR_11 <= VAR_6->bottom - VAR_6->top)
  {
    VAR_12 = 0;
    VAR_13 = VAR_7->left;
    while (++VAR_12 <= VAR_6->right - VAR_6->left)
    {
      VAR_18.ul = FUNC_2(VAR_5, VAR_13, VAR_14, VAR_9);
      VAR_18.col.red = (VAR_18.col.red * VAR_16.SourceConstantAlpha) / 255;
      VAR_18.col.green = (VAR_18.col.green * VAR_16.SourceConstantAlpha) / 255;
      VAR_18.col.blue = (VAR_18.col.blue * VAR_16.SourceConstantAlpha) / 255;
      VAR_18.col.alpha = (32 == VAR_20) ?
                        (VAR_18.col.alpha * VAR_16.SourceConstantAlpha) / 255 :
                        VAR_16.SourceConstantAlpha ;

      VAR_19 = ((VAR_16.AlphaFormat & VAR_0) != 0) ?
           VAR_18.col.alpha : VAR_16.SourceConstantAlpha ;

      VAR_17.ul = *VAR_15;
      VAR_17.col.red = FUNC_1((VAR_17.col.red * (255 - VAR_19)) / 255 + VAR_18.col.red) ;
      VAR_17.col.green = FUNC_1((VAR_17.col.green * (255 - VAR_19)) / 255 + VAR_18.col.green) ;
      VAR_17.col.blue = FUNC_1((VAR_17.col.blue * (255 - VAR_19)) / 255 + VAR_18.col.blue) ;
      VAR_17.col.alpha = FUNC_1((VAR_17.col.alpha * (255 - VAR_19)) / 255 + VAR_18.col.alpha) ;
      *VAR_15++ = VAR_17.ul;
      VAR_13 = VAR_7->left + (VAR_12*(VAR_7->right - VAR_7->left))/(VAR_6->right - VAR_6->left);
    }
    VAR_15 = (PULONG)((ULONG_PTR)VAR_4->pvScan0 + ((VAR_6->top + VAR_11) * VAR_4->lDelta) +
                (VAR_6->left << 2));
    VAR_14 = VAR_7->top + (VAR_11*(VAR_7->bottom - VAR_7->top))/(VAR_6->bottom - VAR_6->top);
  }

  return VAR_3;
}
