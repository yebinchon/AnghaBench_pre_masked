
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int buffer ;
typedef int UINT32 ;
struct TYPE_5__ {int biSize; int biWidth; int biHeight; int biPlanes; int biBitCount; int biSizeImage; int biCompression; } ;
struct TYPE_6__ {TYPE_1__ bmiHeader; } ;
typedef int HDC ;
typedef int DWORD ;
typedef int BITMAPINFOHEADER ;
typedef TYPE_2__ BITMAPINFO ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int,int,int ,int ,int,int,int const**,TYPE_2__*,int ,int ) ;
 int FUNC_1 (TYPE_2__*,int ,int) ;
 int FUNC_2 (int,char*,int ,int,int,int) ;

__attribute__((used)) static void FUNC_3(HDC VAR_2, UINT32 *VAR_3, UINT32 *VAR_4,
                                      DWORD VAR_5, UINT32 VAR_6, int VAR_7)
{
    const UINT32 VAR_8[2] = { 0xFEDCBA98, 0 };
    BITMAPINFO VAR_9;

    FUNC_1(&VAR_9, 0, sizeof(BITMAPINFO));
    VAR_9.bmiHeader.biSize = sizeof(BITMAPINFOHEADER);
    VAR_9.bmiHeader.biWidth = 2;
    VAR_9.bmiHeader.biHeight = 1;
    VAR_9.bmiHeader.biPlanes = 1;
    VAR_9.bmiHeader.biBitCount = 32;
    VAR_9.bmiHeader.biCompression = VAR_0;
    VAR_9.bmiHeader.biSizeImage = sizeof(VAR_8);

    *VAR_3 = 0x89ABCDEF;

    FUNC_0(VAR_2, 0, 0, 2, 1, 0, 0, 1, 1, &VAR_8, &VAR_9, VAR_1, VAR_5);
    FUNC_2(VAR_6 == *VAR_3,
        "StretchDIBits with dwRop %06X. Expected 0x%08X, got 0x%08X from line %d\n",
        VAR_5, VAR_6, *VAR_3, VAR_7);
}
