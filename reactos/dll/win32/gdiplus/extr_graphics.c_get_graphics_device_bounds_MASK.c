
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int bmp ;
struct TYPE_13__ {int bmWidth; int bmHeight; } ;
struct TYPE_12__ {int hdc; scalar_t__ image; scalar_t__ hwnd; } ;
struct TYPE_11__ {int X; int Y; int Width; int Height; } ;
struct TYPE_10__ {int left; int top; int right; int bottom; } ;
typedef TYPE_1__ RECT ;
typedef scalar_t__ HBITMAP ;
typedef scalar_t__ GpUnit ;
typedef scalar_t__ GpStatus ;
typedef TYPE_2__ GpRectF ;
typedef TYPE_3__ GpGraphics ;
typedef TYPE_4__ BITMAP ;


 int FUNC_0 (char*,scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__,TYPE_2__*,scalar_t__*) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (scalar_t__,TYPE_1__*) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 void* FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (scalar_t__,int,TYPE_4__*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static GpStatus FUNC_7(GpGraphics* VAR_7, GpRectF* VAR_8)
{
    RECT VAR_9;
    GpStatus VAR_10=VAR_4;
    GpUnit VAR_11;

    if(VAR_7->hwnd) {
        if(!FUNC_2(VAR_7->hwnd, &VAR_9))
            return VAR_0;

        VAR_8->X = VAR_9.left;
        VAR_8->Y = VAR_9.top;
        VAR_8->Width = VAR_9.right - VAR_9.left;
        VAR_8->Height = VAR_9.bottom - VAR_9.top;
    }else if (VAR_7->image){
        VAR_10 = FUNC_1(VAR_7->image, VAR_8, &VAR_11);
        if (VAR_10 == VAR_4 && VAR_11 != VAR_5)
            FUNC_0("need to convert from unit %i\n", VAR_11);
    }else if (FUNC_5(VAR_7->hdc) == VAR_3){
        HBITMAP VAR_12;
        BITMAP VAR_13;

        VAR_8->X = 0;
        VAR_8->Y = 0;

        VAR_12 = FUNC_3(VAR_7->hdc, VAR_2);
        if (VAR_12 && FUNC_6(VAR_12, sizeof(VAR_13), &VAR_13))
        {
            VAR_8->Width = VAR_13.bmWidth;
            VAR_8->Height = VAR_13.bmHeight;
        }
        else
        {

            VAR_8->Width = 1;
            VAR_8->Height = 1;
        }
    }else{
        VAR_8->X = 0;
        VAR_8->Y = 0;
        VAR_8->Width = FUNC_4(VAR_7->hdc, VAR_1);
        VAR_8->Height = FUNC_4(VAR_7->hdc, VAR_6);
    }

    return VAR_10;
}
