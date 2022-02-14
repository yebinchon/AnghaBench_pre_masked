
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int bmfh ;
typedef int WORD ;
struct TYPE_8__ {int biSizeImage; void* bfSize; void* bfOffBits; scalar_t__ bfReserved2; scalar_t__ bfReserved1; int bfType; } ;
struct TYPE_7__ {TYPE_1__* lpbi; TYPE_3__* lpvBits; } ;
struct TYPE_6__ {TYPE_3__ bmiHeader; } ;
typedef TYPE_2__* PSCREENSHOT ;
typedef int LPTSTR ;
typedef scalar_t__ HANDLE ;
typedef int DWORD ;
typedef scalar_t__ BOOL ;
typedef int BITMAPINFOHEADER ;
typedef TYPE_3__ BITMAPFILEHEADER ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ,int ,int ,int *,int ,int ,int *) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 () ;
 scalar_t__ VAR_6 ;
 void* FUNC_4 (scalar_t__,int ,int ,int ) ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_5 (scalar_t__,TYPE_3__*,int,int*,int *) ;

__attribute__((used)) static BOOL
FUNC_6(PSCREENSHOT VAR_8,
            LPTSTR VAR_9)
{
    BITMAPFILEHEADER VAR_10;
    BOOL VAR_11;
    DWORD VAR_12;
    HANDLE VAR_13;


    VAR_13 = FUNC_1(VAR_9,
                       VAR_5,
                       0,
                       ((void*)0),
                       VAR_0,
                       VAR_2,
                       ((void*)0));

    if (VAR_13 == VAR_6)
        return VAR_1;


    VAR_10.bfType = *(WORD *)"BM";
    VAR_10.bfReserved1 = 0;
    VAR_10.bfReserved2 = 0;
    VAR_11 = FUNC_5(VAR_13,
                         &VAR_10,
                         sizeof(VAR_10),
                         &VAR_12,
                         ((void*)0));
    if ((!VAR_11) || (VAR_12 < sizeof(VAR_10)))
        goto fail;


    VAR_11 = FUNC_5(VAR_13,
                         &VAR_8->lpbi->bmiHeader,
                         sizeof(BITMAPINFOHEADER),
                         &VAR_12,
                         ((void*)0));
    if ((!VAR_11) || (VAR_12 < sizeof(BITMAPINFOHEADER)))
        goto fail;
    VAR_10.bfOffBits = FUNC_4(VAR_13, 0, 0, VAR_4);


    VAR_11 = FUNC_5(VAR_13,
                         VAR_8->lpvBits,
                         VAR_8->lpbi->bmiHeader.biSizeImage,
                         &VAR_12,
                         ((void*)0));
    if ((!VAR_11) || (VAR_12 < VAR_8->lpbi->bmiHeader.biSizeImage))
        goto fail;


    VAR_10.bfSize = FUNC_4(VAR_13, 0, 0, VAR_4);


    FUNC_4(VAR_13, 0, 0, VAR_3);
    VAR_11 = FUNC_5(VAR_13,
                         &VAR_10,
                         sizeof(VAR_10),
                         &VAR_12,
                         ((void*)0));
    if ((!VAR_11) || (VAR_12 < sizeof(VAR_10)))
        goto fail;

    return VAR_7;

fail:
    FUNC_3();
    if (VAR_13) FUNC_0(VAR_13);
    FUNC_2(VAR_9);
    return VAR_1;

}
