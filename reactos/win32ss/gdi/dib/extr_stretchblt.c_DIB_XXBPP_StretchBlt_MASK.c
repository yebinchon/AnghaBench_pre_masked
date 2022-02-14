
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_8__ ;
typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


typedef int XLATEOBJ ;
typedef int ULONG ;
struct TYPE_23__ {scalar_t__ (* DIB_GetPixel ) (TYPE_2__*,scalar_t__,scalar_t__) ;int (* DIB_PutPixel ) (TYPE_2__*,scalar_t__,scalar_t__,int) ;} ;
struct TYPE_22__ {int iSolidColor; } ;
struct TYPE_21__ {scalar_t__ y; scalar_t__ x; } ;
struct TYPE_20__ {scalar_t__ left; scalar_t__ top; scalar_t__ right; scalar_t__ bottom; } ;
struct TYPE_18__ {scalar_t__ cy; scalar_t__ cx; } ;
struct TYPE_19__ {size_t iBitmapFormat; TYPE_1__ sizlBitmap; } ;
typedef TYPE_2__ SURFOBJ ;
typedef int ROP4 ;
typedef TYPE_3__ RECTL ;
typedef TYPE_4__ POINTL ;
typedef int (* PFN_DIB_PutPixel ) (TYPE_2__*,scalar_t__,scalar_t__,int) ;
typedef scalar_t__ (* PFN_DIB_GetPixel ) (TYPE_2__*,scalar_t__,scalar_t__) ;
typedef scalar_t__ LONG ;
typedef TYPE_7__ BRUSHOBJ ;
typedef int BOOLEAN ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (int ) ;





 int FUNC_1 (size_t) ;
 int FUNC_2 (int,int,int,int) ;
 int FUNC_3 (char*,int ,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 TYPE_8__* VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (int) ;
 int VAR_2 ;
 scalar_t__ FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int) ;
 int VAR_3 ;
 int FUNC_7 (int *,scalar_t__) ;

BOOLEAN FUNC_8(SURFOBJ *VAR_4, SURFOBJ *VAR_5, SURFOBJ *VAR_6,
                            SURFOBJ *VAR_7,
                            RECTL *VAR_8, RECTL *VAR_9,
                            POINTL *VAR_10, BRUSHOBJ *VAR_11,
                            POINTL *VAR_12, XLATEOBJ *VAR_13,
                            ROP4 VAR_14)
{
  LONG VAR_15 = 0;
  LONG VAR_16 = 0;
  LONG VAR_17;
  LONG VAR_18;

  LONG VAR_19;
  LONG VAR_20;
  LONG VAR_21;
  LONG VAR_22;
  LONG VAR_23;
  LONG VAR_24;

  ULONG VAR_25;
  ULONG VAR_26, VAR_27 = 0, VAR_28 = 0;
  ULONG VAR_29;
  BOOLEAN VAR_30;

  PFN_DIB_GetPixel VAR_31 = ((void*)0);
  PFN_DIB_GetPixel VAR_32 = ((void*)0);
  PFN_DIB_PutPixel VAR_33 = ((void*)0);
  PFN_DIB_GetPixel VAR_34 = ((void*)0);
  PFN_DIB_GetPixel VAR_35 = ((void*)0);

  LONG VAR_36 = 0, VAR_37 = 0;

  BOOL VAR_38 = FUNC_6(VAR_14);
  BOOL VAR_39 = FUNC_5(VAR_14);

  FUNC_0(FUNC_4(VAR_14));

  VAR_32 = VAR_0[VAR_4->iBitmapFormat].DIB_GetPixel;
  VAR_33 = VAR_0[VAR_4->iBitmapFormat].DIB_PutPixel;

  FUNC_3("Dest BPP: %u, dstRect: (%d,%d)-(%d,%d)\n",
    FUNC_1(VAR_4->iBitmapFormat), VAR_8->left, VAR_8->top, VAR_8->right, VAR_8->bottom);

  if (VAR_38)
  {
    VAR_24 = VAR_5->sizlBitmap.cy;
    VAR_31 = VAR_0[VAR_5->iBitmapFormat].DIB_GetPixel;
    FUNC_3("Source BPP: %u, srcRect: (%d,%d)-(%d,%d)\n",
      FUNC_1(VAR_5->iBitmapFormat), VAR_9->left, VAR_9->top, VAR_9->right, VAR_9->bottom);
  }

  if (VAR_6)
  {
    VAR_35 = VAR_0[VAR_6->iBitmapFormat].DIB_GetPixel;
    VAR_23 = VAR_6->sizlBitmap.cy;
  }

  VAR_19 = VAR_8->bottom - VAR_8->top;
  VAR_20 = VAR_8->right - VAR_8->left;
  VAR_21 = VAR_9->bottom - VAR_9->top;
  VAR_22 = VAR_9->right - VAR_9->left;



  switch(VAR_4->iBitmapFormat)
  {
  case 131: VAR_29 = 0x1; break;
  case 129: VAR_29 = 0xF; break;
  case 128: VAR_29 = 0xFF; break;
  case 132: VAR_29 = 0xFFFF; break;
  case 130: VAR_29 = 0xFFFFFF; break;
  default:
    VAR_29 = 0xFFFFFFFF;
  }

  if (VAR_39)
  {
    if (VAR_7)
    {
      VAR_37 = (VAR_8->top - VAR_12->y) % VAR_7->sizlBitmap.cy;
      if (VAR_37 < 0)
      {
        VAR_37 += VAR_7->sizlBitmap.cy;
      }
      VAR_34 = VAR_0[VAR_7->iBitmapFormat].DIB_GetPixel;
    }
    else
    {
      if (VAR_11)
        VAR_28 = VAR_11->iSolidColor;
    }
  }


  for (VAR_18 = VAR_8->top; VAR_18 < VAR_8->bottom; VAR_18++)
  {
    if (VAR_7)
    {
      VAR_36 = (VAR_8->left - VAR_12->x) % VAR_7->sizlBitmap.cx;
      if (VAR_36 < 0)
      {
        VAR_36 += VAR_7->sizlBitmap.cx;
      }
    }
    if (VAR_38)
      VAR_16 = VAR_9->top+(VAR_18 - VAR_8->top) * VAR_21 / VAR_19;

    for (VAR_17 = VAR_8->left; VAR_17 < VAR_8->right; VAR_17++)
    {
      VAR_30 = VAR_3;

      if (VAR_35)
      {
        VAR_15 = VAR_9->left+(VAR_17 - VAR_8->left) * VAR_22 / VAR_20;
        if (VAR_15 < 0 || VAR_16 < 0 ||
          VAR_6->sizlBitmap.cx < VAR_15 || VAR_23 < VAR_16 ||
          VAR_35(VAR_6, VAR_15, VAR_16) != 0)
        {
          VAR_30 = VAR_1;
        }
      }

      if (VAR_38 && VAR_30)
      {
        VAR_15 = VAR_9->left+(VAR_17 - VAR_8->left) * VAR_22 / VAR_20;
        if (VAR_15 >= 0 && VAR_16 >= 0 &&
          VAR_5->sizlBitmap.cx > VAR_15 && VAR_24 > VAR_16)
        {
          VAR_27 = FUNC_7(VAR_13, VAR_31(VAR_5, VAR_15, VAR_16));
        }
        else
        {
          VAR_27 = 0;
          VAR_30 = ((VAR_14 & 0xFF) != VAR_2);
        }
      }

      if (VAR_30)
      {
        if (VAR_39 && VAR_7)
        {
          VAR_28 = VAR_34(VAR_7, VAR_36, VAR_37);
          VAR_36++;
          VAR_36 %= VAR_7->sizlBitmap.cx;
        }

        VAR_26 = VAR_32(VAR_4, VAR_17, VAR_18);
        VAR_25 = FUNC_2(VAR_14, VAR_26, VAR_27, VAR_28) & VAR_29;

        VAR_33(VAR_4, VAR_17, VAR_18, VAR_25);
      }
    }

    if (VAR_7)
    {
      VAR_37++;
      VAR_37 %= VAR_7->sizlBitmap.cy;
    }
  }

  return VAR_3;
}
