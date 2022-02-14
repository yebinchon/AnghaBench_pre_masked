
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {int bottom; int right; } ;
struct TYPE_11__ {scalar_t__ GreenVal; scalar_t__ BlueVal; scalar_t__ RedVal; void* hPreviewBitmap; TYPE_6__ ImageRect; TYPE_2__* Info; void* hBitmap; int hPicPrev; } ;
struct TYPE_10__ {TYPE_1__* ImageEditors; } ;
struct TYPE_9__ {int hBitmap; } ;
typedef TYPE_2__* PMAIN_WND_INFO ;
typedef TYPE_3__* PIMAGEADJUST ;
typedef scalar_t__ LPARAM ;
typedef TYPE_3__ IMAGEADJUST ;
typedef int HWND ;
typedef void* HBITMAP ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ,int ,int ,int ) ;
 int FUNC_1 (int ,TYPE_6__*) ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ,int ,TYPE_3__*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_5 (int ,int) ;
 int VAR_9 ;
 int FUNC_6 (int ,int ,int ,int ,scalar_t__) ;
 int FUNC_7 (int ,int ,int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_8 (char*) ;

__attribute__((used)) static PIMAGEADJUST
FUNC_9(PIMAGEADJUST VAR_13,
             HWND VAR_14,
             LPARAM VAR_15)
{
    VAR_13 = (IMAGEADJUST*) FUNC_3(VAR_9,
                        0,
                        sizeof(IMAGEADJUST));
    if (!VAR_13)
        return ((void*)0);


    VAR_13->Info = (PMAIN_WND_INFO)VAR_15;
    if (!VAR_13->Info->ImageEditors)
        goto fail;


    VAR_13->hPicPrev = FUNC_2(VAR_14, VAR_6);
    FUNC_1(VAR_13->hPicPrev,
                  &VAR_13->ImageRect);


    VAR_13->hBitmap = (HBITMAP) FUNC_0(VAR_13->Info->ImageEditors->hBitmap,
                                 VAR_7,
                                 VAR_13->ImageRect.right,
                                 VAR_13->ImageRect.bottom,
                                 VAR_8);
    if (!VAR_13->hBitmap)
        goto fail;


    VAR_13->hPreviewBitmap = (HBITMAP) FUNC_0(VAR_13->Info->ImageEditors->hBitmap,
                                        VAR_7,
                                        VAR_13->ImageRect.right,
                                        VAR_13->ImageRect.bottom,
                                        VAR_8);
    if (!VAR_13->hPreviewBitmap)
        goto fail;


    VAR_13->RedVal = VAR_13->BlueVal = VAR_13->GreenVal = 0;


    FUNC_6(VAR_14,
                       VAR_4,
                       VAR_1,
                       VAR_2,
                       0);
    FUNC_6(VAR_14,
                       VAR_5,
                       VAR_11,
                       VAR_12,
                       (LPARAM)FUNC_5(0, 200));
    FUNC_6(VAR_14,
                       VAR_5,
                       VAR_10,
                       VAR_12,
                       (LPARAM)VAR_0);
    FUNC_7(VAR_14,
                   VAR_3,
                   FUNC_8("100"));

    return VAR_13;

fail:
    FUNC_4(VAR_9,
             0,
             VAR_13);
    return ((void*)0);
}
