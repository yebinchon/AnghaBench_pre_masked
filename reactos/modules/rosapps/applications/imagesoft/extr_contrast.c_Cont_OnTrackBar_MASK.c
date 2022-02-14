
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_3__ {int hPicPrev; void* BlueVal; void* GreenVal; void* RedVal; int hPreviewBitmap; int hBitmap; } ;
typedef TYPE_1__* PIMAGEADJUST ;
typedef int HWND ;
typedef int HDC ;
typedef void* DWORD ;


 int FUNC_0 (int ,int ,int ,int ,void*,void*,void*) ;
 void* VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (int ,int ,int ,int ,int ) ;
 int FUNC_5 (int ,int ,void*,int ) ;
 int VAR_9 ;

__attribute__((used)) static VOID
FUNC_6(PIMAGEADJUST VAR_10,
           HWND VAR_11)
{
    HDC VAR_12;
    DWORD VAR_13;

    VAR_13 = (DWORD)FUNC_4(VAR_11,
                                         VAR_8,
                                         VAR_9,
                                         0,
                                         0);

    FUNC_5(VAR_11,
                  VAR_4,
                  VAR_13,
                  VAR_2);

    if (FUNC_2(VAR_11, VAR_5) == VAR_1)
    {
        VAR_10->RedVal = VAR_10->GreenVal = VAR_10->BlueVal = VAR_13 - VAR_0 + 100;
    }
    else if (FUNC_2(VAR_11, VAR_7) == VAR_1)
    {
        VAR_10->RedVal = VAR_13 - VAR_0 + 100;
    }
    else if (FUNC_2(VAR_11, VAR_6) == VAR_1)
    {
        VAR_10->GreenVal = VAR_13 - VAR_0 + 100;
    }
    else if (FUNC_2(VAR_11, VAR_3) == VAR_1)
    {
        VAR_10->BlueVal = VAR_13 - VAR_0 + 100;
    }

    VAR_12 = FUNC_1(VAR_10->hPicPrev);

    FUNC_0(VAR_10->hBitmap,
                     VAR_10->hPreviewBitmap,
                     VAR_10->hPicPrev,
                     VAR_12,
                     VAR_10->RedVal,
                     VAR_10->GreenVal,
                     VAR_10->BlueVal);

    FUNC_3(VAR_10->hPicPrev, VAR_12);
}
