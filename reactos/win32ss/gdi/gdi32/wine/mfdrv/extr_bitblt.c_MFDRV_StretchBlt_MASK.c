
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct bitblt_coords {int log_height; int log_width; int log_y; int log_x; } ;
typedef int WORD ;
typedef int UINT ;
struct TYPE_15__ {int bmPlanes; int bmBitsPixel; int bmWidth; int bmHeight; int bmWidthBytes; } ;
struct TYPE_14__ {int biSize; int biWidth; int biHeight; int biPlanes; int biBitCount; int biClrUsed; void* biYPelsPerMeter; scalar_t__ biClrImportant; void* biXPelsPerMeter; int biCompression; int biSizeImage; } ;
struct TYPE_13__ {int* rdParm; int rdSize; int rdFunction; } ;
struct TYPE_12__ {scalar_t__ funcs; int hdc; } ;
typedef int RGBQUAD ;
typedef TYPE_1__* PHYSDEV ;
typedef TYPE_2__ METARECORD ;
typedef scalar_t__ LPSTR ;
typedef TYPE_3__* LPBITMAPINFOHEADER ;
typedef int LPBITMAPINFO ;
typedef int INT16 ;
typedef int HBITMAP ;
typedef int DWORD ;
typedef int BOOL ;
typedef int BITMAPINFOHEADER ;
typedef int BITMAPINFO ;
typedef TYPE_4__ BITMAP ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int,int*) ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ,int ,int ,int ,scalar_t__,int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int,TYPE_4__*) ;
 int FUNC_5 () ;
 int FUNC_6 (int) ;
 TYPE_2__* FUNC_7 (int ,int ,int) ;
 int FUNC_8 (int ,int ,TYPE_2__*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_9 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_10 (TYPE_1__*,TYPE_2__*,int) ;
 void* FUNC_11 (int ,int,int) ;
 int VAR_7 ;
 int FUNC_12 (char*,int,int,...) ;
 int FUNC_13 (char*,int ,int ) ;
 int FUNC_14 (int *) ;
 scalar_t__ FUNC_15 (int *,int ) ;
 int FUNC_16 (int,int) ;

BOOL FUNC_17( PHYSDEV VAR_8, struct bitblt_coords *VAR_9,
                       PHYSDEV VAR_10, struct bitblt_coords *VAR_11, DWORD VAR_12 )
{
    BOOL VAR_13;
    DWORD VAR_14;
    METARECORD *VAR_15;
    BITMAP VAR_16;




    HBITMAP VAR_17 = FUNC_1(VAR_10->hdc, VAR_7);

    if (VAR_10->funcs == VAR_8->funcs) return VAR_2;

    if (FUNC_4(VAR_17, sizeof(BITMAP), &VAR_16) != sizeof(BITMAP))
    {
        FUNC_13("bad bitmap object %p passed for hdc %p\n", VAR_17, VAR_10->hdc);
        return VAR_2;
    }
    VAR_14 = sizeof(METARECORD) + 15 * sizeof(INT16) + VAR_16.bmWidthBytes * VAR_16.bmHeight;
    if (!(VAR_15 = FUNC_7( FUNC_5(), 0, VAR_14 )))
 return VAR_2;
    VAR_15->rdFunction = VAR_6;
    *(VAR_15->rdParm +10) = VAR_16.bmWidth;
    *(VAR_15->rdParm +11) = VAR_16.bmHeight;
    *(VAR_15->rdParm +12) = VAR_16.bmWidthBytes;
    *(VAR_15->rdParm +13) = VAR_16.bmPlanes;
    *(VAR_15->rdParm +14) = VAR_16.bmBitsPixel;
    FUNC_12("len = %ld  rop=%lx\n", VAR_14, VAR_12);
    if (FUNC_0( VAR_17, VAR_16.bmWidthBytes * VAR_16.bmHeight, VAR_15->rdParm + 15))

    {
      VAR_15->rdSize = VAR_14 / sizeof(INT16);
      *(VAR_15->rdParm) = FUNC_9(VAR_12);
      *(VAR_15->rdParm + 1) = FUNC_6(VAR_12);
      *(VAR_15->rdParm + 2) = VAR_11->log_height;
      *(VAR_15->rdParm + 3) = VAR_11->log_width;
      *(VAR_15->rdParm + 4) = VAR_11->log_y;
      *(VAR_15->rdParm + 5) = VAR_11->log_x;
      *(VAR_15->rdParm + 6) = VAR_9->log_height;
      *(VAR_15->rdParm + 7) = VAR_9->log_width;
      *(VAR_15->rdParm + 8) = VAR_9->log_y;
      *(VAR_15->rdParm + 9) = VAR_9->log_x;
      VAR_13 = FUNC_10( VAR_8, VAR_15, VAR_15->rdSize * 2);
    }
    else
        VAR_13 = VAR_2;
    FUNC_8( FUNC_5(), 0, VAR_15);
    return VAR_13;
}
