
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int bmp ;
typedef int UINT ;
struct TYPE_11__ {int hMainWnd; } ;
struct TYPE_10__ {int bmHeight; int bmWidth; } ;
struct TYPE_9__ {int bcHeight; int bcWidth; } ;
struct TYPE_8__ {int biSize; int biHeight; int biWidth; } ;
struct TYPE_7__ {int cy; int cx; int member_1; int member_0; } ;
typedef int SIZE_T ;
typedef TYPE_1__ SIZE ;
typedef void* PVOID ;
typedef int PRECT ;
typedef int * LPCWSTR ;
typedef int * LPCSTR ;
typedef TYPE_2__* LPBITMAPINFOHEADER ;
typedef TYPE_3__* LPBITMAPCOREHEADER ;
typedef int HGLOBAL ;
typedef int HDC ;
typedef int HBITMAP ;
typedef int DWORD ;
typedef int BOOL ;
typedef int BITMAPV5HEADER ;
typedef int BITMAPV4HEADER ;
typedef int BITMAPINFOHEADER ;
typedef int BITMAPCOREHEADER ;
typedef TYPE_4__ BITMAP ;


 int VAR_0 ;
 int FUNC_0 () ;
 int VAR_1 ;
 int FUNC_1 (int const) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (void*,int **) ;
 int FUNC_4 (void*,int **) ;
 int FUNC_5 (int ,int,TYPE_4__*) ;
 int FUNC_6 (int ,void*,int ,int ,int *) ;
 int FUNC_7 (int ,void*,int ,int ,int *) ;
 void* FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 TYPE_5__ VAR_2 ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ,int ) ;
 int FUNC_14 (int ,int ,int ,int ,int ) ;
 int FUNC_15 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_16 (int ,int ) ;

BOOL FUNC_17(UINT VAR_5, PRECT VAR_6)
{
    FUNC_15(VAR_6);

    if (!FUNC_12(VAR_2.hMainWnd))
    {
        return VAR_1;
    }

    switch (VAR_5)
    {
        case 132:
        case 135:
        {
            HBITMAP VAR_7;
            BITMAP VAR_8;

            VAR_7 = (HBITMAP)FUNC_1(135);
            FUNC_5(VAR_7, sizeof(VAR_8), &VAR_8);
            FUNC_14(VAR_6, 0, 0, VAR_8.bmWidth, VAR_8.bmHeight);
            break;
        }

        case 134:
        case 133:
        {
            HGLOBAL VAR_9;
            LPBITMAPINFOHEADER VAR_10;

            VAR_9 = FUNC_1(VAR_5);
            if (!VAR_9)
                break;

            VAR_10 = FUNC_8(VAR_9);
            if (!VAR_10)
                break;

            if (VAR_10->biSize == sizeof(BITMAPCOREHEADER))
            {
                LPBITMAPCOREHEADER VAR_11 = (LPBITMAPCOREHEADER)VAR_10;
                FUNC_14(VAR_6, 0, 0,
                        VAR_11->bcWidth,
                        VAR_11->bcHeight);
            }
            else if ((VAR_10->biSize == sizeof(BITMAPINFOHEADER)) ||
                     (VAR_10->biSize == sizeof(BITMAPV4HEADER)) ||
                     (VAR_10->biSize == sizeof(BITMAPV5HEADER)))
            {
                FUNC_14(VAR_6, 0, 0,
                        VAR_10->biWidth,

                        (VAR_10->biHeight > 0) ? VAR_10->biHeight
                                                     : -VAR_10->biHeight);
            }
            else
            {

            }

            FUNC_9(VAR_9);
            break;
        }

        case 131:
        case 129:
        case 130:
        case 128:
        {
            HDC VAR_12;
            HGLOBAL VAR_13;
            PVOID VAR_14, VAR_15;
            DWORD VAR_16;
            SIZE VAR_17 = {0, 0};
            SIZE_T VAR_18;

            VAR_13 = FUNC_1(VAR_5);
            if (!VAR_13)
                break;

            VAR_14 = FUNC_8(VAR_13);
            if (!VAR_14)
                break;

            VAR_12 = FUNC_2(VAR_2.hMainWnd);


            for (;;)
            {
                if (VAR_5 == 128)
                {
                    if (*(LPCWSTR)VAR_14 == VAR_4)
                        break;
                    VAR_18 = FUNC_4(VAR_14, (LPCWSTR*)&VAR_15);
                    VAR_16 = FUNC_7(VAR_12, VAR_14, VAR_18, 0, ((void*)0));
                }
                else
                {
                    if (*(LPCSTR)VAR_14 == VAR_0)
                        break;
                    VAR_18 = FUNC_3(VAR_14, (LPCSTR*)&VAR_15);
                    VAR_16 = FUNC_6(VAR_12, VAR_14, VAR_18, 0, ((void*)0));
                }
                VAR_17.cx = FUNC_16(VAR_17.cx, FUNC_11(VAR_16));
                VAR_17.cy += FUNC_10(VAR_16);
                VAR_14 = VAR_15;
            }

            FUNC_13(VAR_2.hMainWnd, VAR_12);

            FUNC_9(VAR_13);

            FUNC_14(VAR_6, 0, 0, VAR_17.cx, VAR_17.cy);
            break;
        }

        default:
        {
            break;
        }
    }

    FUNC_0();

    return VAR_3;
}
