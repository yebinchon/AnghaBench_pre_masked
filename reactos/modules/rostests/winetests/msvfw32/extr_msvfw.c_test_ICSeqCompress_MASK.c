
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int pc ;
typedef int output_nkf ;
typedef int output_kf ;
struct TYPE_18__ {int cbSize; int fccType; int fccHandler; int lKey; int lDataRate; int * lpbiOut; int * lpbiIn; scalar_t__ cbState; int * lpState; int lQ; int lpBitsPrev; int lpBitsOut; int * hic; int dwFlags; } ;
struct TYPE_17__ {int member_0; int member_1; int member_2; } ;
struct TYPE_16__ {int member_2; int member_1; int member_0; } ;
struct TYPE_15__ {int member_1; int member_2; int member_0; } ;
struct TYPE_14__ {int member_0; int member_2; int member_1; } ;
struct TYPE_13__ {TYPE_6__ member_3; TYPE_5__ member_2; TYPE_4__ member_1; TYPE_3__ member_0; } ;
struct TYPE_12__ {int member_0; int member_1; int member_2; int member_3; int member_4; int member_6; int member_9; int member_10; int member_8; int member_7; int member_5; } ;
typedef int RGBQUAD ;
typedef int PBITMAPINFO ;
typedef int LONG ;
typedef int * HIC ;
typedef int DWORD ;
typedef TYPE_7__ COMPVARS ;
typedef int BYTE ;
typedef scalar_t__ BOOL ;
typedef int BITMAPINFOHEADER ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_7__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_2 (int,int,int ) ;
 int VAR_3 ;
 char* FUNC_3 (TYPE_7__*,int ,int*,scalar_t__*,int*) ;
 int FUNC_4 (TYPE_7__*) ;
 scalar_t__ FUNC_5 (TYPE_7__*,int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_6 (int const*,char*,int) ;
 int FUNC_7 (char,char,char,char) ;
 int FUNC_8 (int,char*,...) ;

__attribute__((used)) static void FUNC_9(void)
{




    HIC VAR_5;
    DWORD VAR_6, VAR_7 = FUNC_7('v','i','d','c'), VAR_8 = FUNC_7('m', 'r', 'l', 'e');
    DWORD VAR_9;
    LONG VAR_10;
    BOOL VAR_11, VAR_12;
    char *VAR_13;
    COMPVARS VAR_14;
    struct { BITMAPINFOHEADER header; RGBQUAD map[256]; }
    VAR_15 = { {sizeof(BITMAPINFOHEADER), 32, 1, 1, 8, 0, 32*8, 0, 0, 256, 256},
                     {{255,0,0}, {0,255,0}, {0,0,255}, {255,255,255}}};
    PBITMAPINFO VAR_16 = (PBITMAPINFO) &VAR_15;
    static BYTE VAR_17[32] = {1,2,3,3,3,3,2,3,1};
    static const BYTE VAR_18[] = {1,1,1,2,4,3,0,3,2,3,1,0,23,0,0,0,0,1},
                      VAR_19[] = {0,0,0,1};

    VAR_5 = FUNC_2(VAR_7, VAR_8, VAR_2);
    FUNC_8(VAR_5 != ((void*)0), "Expected non-NULL\n");

    VAR_14.cbSize = sizeof(VAR_14);
    VAR_14.dwFlags = VAR_1;
    VAR_14.fccType = VAR_7;
    VAR_14.fccHandler = VAR_8;
    VAR_14.hic = VAR_5;
    VAR_14.lpbiIn = ((void*)0);
    VAR_14.lpbiOut = ((void*)0);
    VAR_14.lpBitsOut = VAR_14.lpBitsPrev = *(VAR_14.lpState = ((void*)0));
    VAR_14.lQ = VAR_3;
    VAR_14.lKey = 1;
    VAR_14.lDataRate = 300;
    VAR_14.lpState = ((void*)0);
    VAR_14.cbState = 0;

    VAR_12 = FUNC_5(&VAR_14, VAR_16);
    FUNC_8(VAR_12 == VAR_4, "Expected TRUE\n");

    FUNC_8(VAR_14.lpbiIn != ((void*)0), "Expected non-NULL\n");
    FUNC_8(VAR_14.lpbiOut != ((void*)0), "Expected non-NULL\n");

    for(VAR_9 = 0; VAR_9 < 9; VAR_9++)
    {
        VAR_10 = 0;
        VAR_13 = FUNC_3(&VAR_14, 0, VAR_17, &VAR_11, &VAR_10);
        FUNC_8(VAR_13 != ((void*)0), "Frame[%d]: Expected non-NULL\n", VAR_9);
        if (VAR_10 == sizeof(VAR_19))
            FUNC_8(!FUNC_6(VAR_19, VAR_13, VAR_10), "Frame[%d]: Contents do not match\n", VAR_9);
        else if (VAR_10 == sizeof(VAR_18))
            FUNC_8(!FUNC_6(VAR_18, VAR_13, VAR_10), "Frame[%d]: Contents do not match\n", VAR_9);
        else
            FUNC_8(0, "Unknown frame size of %d byten\n", VAR_10);
    }

    FUNC_4(&VAR_14);
    FUNC_1(&VAR_14);

    VAR_6 = FUNC_0(VAR_5);
    FUNC_8(VAR_6 == VAR_0, "Expected -8, got %d\n", VAR_6);
}
