
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef scalar_t__ WORD ;
typedef int VOID ;
struct TYPE_15__ {int bmHeight; int bmWidth; } ;
struct TYPE_14__ {scalar_t__ bfType; int bfOffBits; int bfSize; } ;
struct TYPE_13__ {int Height; int Width; int * hBitmap; TYPE_4__* pBits; TYPE_4__* pbmi; TYPE_2__* OpenInfo; } ;
struct TYPE_11__ {int lpImagePath; } ;
struct TYPE_12__ {TYPE_1__ Open; } ;
typedef TYPE_3__* PEDIT_WND_INFO ;
typedef scalar_t__ HANDLE ;
typedef int DWORD ;
typedef scalar_t__ BOOL ;
typedef TYPE_4__ BITMAPFILEHEADER ;
typedef TYPE_5__ BITMAP ;


 int FUNC_0 (scalar_t__) ;
 int * FUNC_1 (int *,TYPE_4__*,int ,int *,int *,int ) ;
 scalar_t__ FUNC_2 (int ,int ,int ,int *,int ,int ,int *) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int,TYPE_5__*) ;
 TYPE_4__* FUNC_5 (int ,int ,int) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_6 (scalar_t__,TYPE_4__*,int,int*,int *) ;
 scalar_t__ VAR_8 ;

__attribute__((used)) static BOOL
FUNC_7(PEDIT_WND_INFO VAR_9)
{
    BITMAPFILEHEADER VAR_10;
    HANDLE VAR_11;
    BITMAP VAR_12;
    DWORD VAR_13;
    BOOL VAR_14, VAR_15 = VAR_1;

    VAR_11 = FUNC_2(VAR_9->OpenInfo->Open.lpImagePath,
                       VAR_4,
                       VAR_3,
                       ((void*)0),
                       VAR_6,
                       VAR_2,
                       ((void*)0));
    if (VAR_11 == VAR_5)
        return VAR_15;

    VAR_14 = FUNC_6(VAR_11,
                        &VAR_10,
                        sizeof(BITMAPFILEHEADER),
                        &VAR_13,
                        ((void*)0));

    if (VAR_14 && (VAR_13 == sizeof(BITMAPFILEHEADER))
                 && (VAR_10.bfType == *(WORD *)"BM"))
    {
        DWORD VAR_16 = VAR_10.bfOffBits - sizeof(BITMAPFILEHEADER);

        VAR_9->pbmi = FUNC_5(VAR_7,
                               0,
                               VAR_16);
        if (VAR_9->pbmi)
        {
            VAR_14 = FUNC_6(VAR_11,
                                VAR_9->pbmi,
                                VAR_16,
                                &VAR_13,
                                ((void*)0));

            if (VAR_14 && (VAR_13 == VAR_16))
            {
                VAR_9->hBitmap = FUNC_1(((void*)0),
                                                 VAR_9->pbmi,
                                                 VAR_0,
                                                 (VOID *)&VAR_9->pBits,
                                                 ((void*)0),
                                                 0);
                if (VAR_9->hBitmap != ((void*)0))
                {
                    FUNC_6(VAR_11,
                             VAR_9->pBits,
                             VAR_10.bfSize - VAR_10.bfOffBits,
                             &VAR_13,
                             ((void*)0));

                    FUNC_4(VAR_9->hBitmap,
                              sizeof(BITMAP),
                              &VAR_12);

                    VAR_9->Width = VAR_12.bmWidth;
                    VAR_9->Height = VAR_12.bmHeight;

                    VAR_15 = VAR_8;
                }
            }
        }
    }
    else if (!VAR_14)
    {
        FUNC_3(0);
    }

    FUNC_0(VAR_11);

    return VAR_15;
}
