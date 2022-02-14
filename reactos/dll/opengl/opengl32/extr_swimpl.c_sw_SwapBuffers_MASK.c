
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct wgl_dc_data {struct sw_framebuffer* sw_data; } ;
struct sw_framebuffer {int height; TYPE_3__* pixel_format; int BackBuffer; int width; int Hdc; TYPE_1__* gl_visual; } ;
struct TYPE_7__ {int biSize; int biBitCount; int biPlanes; int biSizeImage; int biHeight; int biCompression; int biWidth; scalar_t__ biYPelsPerMeter; scalar_t__ biXPelsPerMeter; scalar_t__ biClrUsed; scalar_t__ biClrImportant; } ;
struct TYPE_9__ {int * bmiColors; TYPE_2__ bmiHeader; } ;
struct TYPE_8__ {int cColorBits; scalar_t__ iPixelType; } ;
struct TYPE_6__ {int DBflag; } ;
typedef int HDC ;
typedef int DWORD ;
typedef int BYTE ;
typedef int BOOL ;
typedef int BITMAPINFOHEADER ;
typedef TYPE_4__ BITMAPINFO ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (int ,int ,int ,int ,int,int ,int ,int ,int,int ,TYPE_4__*,int ) ;
 int VAR_6 ;
 int FUNC_1 (int ,int) ;

BOOL FUNC_2(HDC VAR_7, struct wgl_dc_data* VAR_8)
{
    struct sw_framebuffer* VAR_9 = VAR_8->sw_data;
    char VAR_10[sizeof(BITMAPINFOHEADER) + 3 * sizeof(DWORD)];
    BITMAPINFO *VAR_11 = (BITMAPINFO*)VAR_10;
    BYTE VAR_12 = VAR_9->pixel_format->cColorBits;

    if (!VAR_9->gl_visual->DBflag)
        return VAR_6;

    if (!VAR_9->BackBuffer)
        return VAR_4;

    VAR_11->bmiHeader.biSize = sizeof(VAR_11->bmiHeader);
    VAR_11->bmiHeader.biBitCount = VAR_12;
    VAR_11->bmiHeader.biClrImportant = 0;
    VAR_11->bmiHeader.biClrUsed = 0;
    VAR_11->bmiHeader.biPlanes = 1;
    VAR_11->bmiHeader.biSizeImage = FUNC_1(VAR_9->width, VAR_12) * VAR_9->height;
    VAR_11->bmiHeader.biXPelsPerMeter = 0;
    VAR_11->bmiHeader.biYPelsPerMeter = 0;
    VAR_11->bmiHeader.biHeight = VAR_9->height;
    VAR_11->bmiHeader.biWidth = VAR_9->width;
    VAR_11->bmiHeader.biCompression = VAR_12 == 16 ? VAR_0 : VAR_1;

    if (VAR_12 == 16)
    {
        DWORD* VAR_13 = (DWORD*)(&VAR_11->bmiColors[0]);
        VAR_13[0] = 0x0000F800;
        VAR_13[1] = 0x000007E0;
        VAR_13[2] = 0x0000001F;
    }

    return FUNC_0(VAR_9->Hdc, 0, 0, VAR_9->width, VAR_9->height, 0, 0, 0, VAR_9->height, VAR_9->BackBuffer, VAR_11,
            VAR_9->pixel_format->iPixelType == VAR_5 ? VAR_2 : VAR_3) != 0;
}
