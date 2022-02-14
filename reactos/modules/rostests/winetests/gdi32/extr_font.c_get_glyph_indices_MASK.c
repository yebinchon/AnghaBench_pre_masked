
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int name ;
typedef int lf ;
typedef int WORD ;
typedef int WCHAR ;
typedef int UINT ;
struct TYPE_10__ {int ciACP; } ;
struct TYPE_9__ {unsigned int* fsCsb; } ;
struct TYPE_8__ {int lfHeight; int lfFaceName; scalar_t__ lfCharSet; } ;
typedef TYPE_1__ LOGFONTA ;
typedef scalar_t__ INT_PTR ;
typedef scalar_t__ INT ;
typedef scalar_t__ HFONT ;
typedef int HDC ;
typedef TYPE_2__ FONTSIGNATURE ;
typedef int DWORD ;
typedef TYPE_3__ CHARSETINFO ;
typedef char BYTE ;
typedef scalar_t__ BOOL ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (int ,TYPE_2__*,int ) ;
 int FUNC_5 (int ,int,char*) ;
 int FUNC_6 (int,int ,char*,int,int *,int) ;
 int FUNC_7 (int ,int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_8 (int ,scalar_t__) ;
 int FUNC_9 (int) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_10 (int*,TYPE_3__*,int ) ;
 int FUNC_11 (int) ;
 int FUNC_12 (int ,char*) ;
 int FUNC_13 (TYPE_1__*,int ,int) ;
 int FUNC_14 (int,char*,...) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ,char*,int,int *,int ) ;
 int FUNC_17 (int ,int *,int,int *,int ) ;
 int FUNC_18 (char*,int,int) ;
 int FUNC_19 (char*,char*) ;
 int FUNC_20 (char*,scalar_t__) ;

__attribute__((used)) static BOOL FUNC_21(INT VAR_4, UINT VAR_5, WORD *VAR_6, UINT VAR_7, BOOL VAR_8)
{
    HDC VAR_9;
    LOGFONTA VAR_10;
    HFONT VAR_11, VAR_12;
    CHARSETINFO VAR_13;
    FONTSIGNATURE VAR_14;
    INT VAR_15;
    DWORD VAR_16, VAR_17;
    char VAR_18[64];

    FUNC_11(VAR_7 <= 128);

    FUNC_13(&VAR_10, 0, sizeof(VAR_10));

    VAR_10.lfCharSet = VAR_4;
    VAR_10.lfHeight = 10;
    FUNC_12(VAR_10.lfFaceName, "Arial");
    FUNC_9(0xdeadbeef);
    VAR_11 = FUNC_0(&VAR_10);
    FUNC_14(VAR_11 != 0, "CreateFontIndirectA error %u\n", FUNC_3());

    VAR_9 = FUNC_2(0);
    VAR_12 = FUNC_8(VAR_9, VAR_11);

    VAR_15 = FUNC_4(VAR_9, &VAR_14, 0);
    FUNC_14(VAR_15 == VAR_4, "expected %d, got %d\n", VAR_4, VAR_15);

    FUNC_9(0xdeadbeef);
    VAR_17 = FUNC_5(VAR_9, sizeof(VAR_18), VAR_18);
    FUNC_14(VAR_17, "GetTextFaceA error %u\n", FUNC_3());

    if (VAR_4 == VAR_1)
    {
        FUNC_14(FUNC_19("Arial", VAR_18), "face name should NOT be Arial\n");
        FUNC_14(VAR_14.fsCsb[0] & (1u << 31), "symbol encoding should be available\n");
    }
    else
    {
        FUNC_14(!FUNC_19("Arial", VAR_18), "face name should be Arial, not %s\n", VAR_18);
        FUNC_14(!(VAR_14.fsCsb[0] & (1u << 31)), "symbol encoding should NOT be available\n");
    }

    if (!FUNC_10((DWORD *)(INT_PTR)VAR_15, &VAR_13, VAR_2))
    {
        FUNC_20("Can't find codepage for charset %d\n", VAR_15);
        FUNC_7(0, VAR_9);
        return VAR_0;
    }
    FUNC_14(VAR_13.ciACP == VAR_5, "expected %d, got %d\n", VAR_5, VAR_13.ciACP);

    if (&FUNC_15 != ((void*)0) && FUNC_15(VAR_9) != VAR_5)
    {
        FUNC_18("Font code page %d, looking for code page %d\n",
             FUNC_15(VAR_9), VAR_5);
        FUNC_7(0, VAR_9);
        return VAR_0;
    }

    if (VAR_8)
    {
        char VAR_19[128];
        WCHAR VAR_20[128];

        for (VAR_16 = 0; VAR_16 < VAR_7; VAR_16++) VAR_19[VAR_16] = (BYTE)(VAR_16 + 128);

        FUNC_6(VAR_5, 0, VAR_19, VAR_7, VAR_20, VAR_7);

        FUNC_9(0xdeadbeef);
        VAR_17 = FUNC_17(VAR_9, VAR_20, VAR_7, VAR_6, 0);
        FUNC_14(VAR_17 == VAR_7, "GetGlyphIndicesW expected %d got %d, error %u\n",
           VAR_7, VAR_17, FUNC_3());
    }
    else
    {
        char VAR_21[128];

        for (VAR_16 = 0; VAR_16 < VAR_7; VAR_16++) VAR_21[VAR_16] = (BYTE)(VAR_16 + 128);

        FUNC_9(0xdeadbeef);
        VAR_17 = FUNC_16(VAR_9, VAR_21, VAR_7, VAR_6, 0);
        FUNC_14(VAR_17 == VAR_7, "GetGlyphIndicesA expected %d got %d, error %u\n",
           VAR_7, VAR_17, FUNC_3());
    }

    FUNC_8(VAR_9, VAR_12);
    FUNC_1(VAR_11);

    FUNC_7(0, VAR_9);

    return VAR_3;
}
