
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int bits ;
typedef int LPCSTR ;
typedef int HWND ;
typedef int HIMAGELIST ;
typedef int HDC ;
typedef scalar_t__ COLORREF ;
typedef int BYTE ;


 int FUNC_0 (int ,int ,int ,int,int,int ,int,int,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ,int,int) ;
 int FUNC_2 (int ,int ) ;
 int VAR_1 ;
 int FUNC_3 (int*,int const*,int) ;
 scalar_t__ FUNC_4 (int*,int const*,int) ;
 int FUNC_5 (int*,int ,int) ;
 int FUNC_6 (int,char*,int ) ;
 int FUNC_7 (int ,int ,int,int,int ,int ) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_8(HWND VAR_3, HIMAGELIST VAR_4, int VAR_5, int VAR_6,
                       const BYTE *VAR_7, LPCSTR VAR_8)
{
    BYTE VAR_9[100*100/8];
    COLORREF VAR_10;
    HDC VAR_11;
    int VAR_12, VAR_13, VAR_14 = -1;

    if (!VAR_2 || !VAR_4) return;

    FUNC_5(VAR_9, 0, sizeof(VAR_9));
    VAR_11 = FUNC_7(VAR_3, VAR_4, VAR_5, VAR_6, VAR_8, VAR_0);

    VAR_10 = FUNC_1(VAR_11, 0, 0);

    for (VAR_13 = 0; VAR_13 < VAR_6; VAR_13 ++)
    {
        for (VAR_12 = 0; VAR_12 < VAR_6; VAR_12++)
        {
            if (!(VAR_12 & 0x7)) VAR_14++;
            if (FUNC_1(VAR_11, VAR_12, VAR_13) != VAR_10) VAR_9[VAR_14] |= (0x80 >> (VAR_12 & 0x7));
        }
    }

    FUNC_0(VAR_11, 0, 0, VAR_6, VAR_6, VAR_11, VAR_6+1, VAR_6+1, VAR_1);
    FUNC_2(VAR_3, VAR_11);

    FUNC_6 (FUNC_4(VAR_9, VAR_7, (VAR_6 * VAR_6)/8) == 0,
        "%s: bits different\n", VAR_8);
    if (FUNC_4(VAR_9, VAR_7, (VAR_6 * VAR_6)/8))
        FUNC_3(VAR_9, VAR_7, VAR_6);
}
