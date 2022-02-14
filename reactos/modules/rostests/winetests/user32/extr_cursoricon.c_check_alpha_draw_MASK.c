
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int color ;
typedef int UINT32 ;
typedef int HICON ;
typedef int HDC ;
typedef int COLORREF ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ,int ,int,int,int ,int *,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int ,int ,int) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (int,int) ;
 int FUNC_6 (int ,int,int,int,int ,int*,int) ;
 int FUNC_7 (int,char*,char*,int,int,char*,int,int) ;

__attribute__((used)) static void FUNC_8(HDC VAR_1, BOOL VAR_2, BOOL VAR_3, int VAR_4, int VAR_5)
{
    HICON VAR_6;
    UINT32 VAR_7[2];
    COLORREF VAR_8, VAR_9, VAR_10;

    VAR_7[0] = 0x00A0B0C0;
    VAR_7[1] = VAR_3 ? 0xFF000000 : 0x00000000;
    VAR_8 = VAR_3 ? 0x00FFFFFF : 0x00C0B0A0;
    VAR_9 = 0x00C0B0A0;

    VAR_6 = FUNC_6(VAR_1, 2, 1, VAR_4, 0, VAR_7, sizeof(VAR_7));
    if (!VAR_6) return;

    FUNC_3(VAR_1, 0, 0, 0x00FFFFFF);

    if(VAR_2)
        FUNC_1(VAR_1, 0, 0, VAR_6, 2, 1, 0, ((void*)0), VAR_0);
    else
        FUNC_0(VAR_1, 0, 0, VAR_6);

    VAR_10 = FUNC_2(VAR_1, 0, 0);
    FUNC_7 (FUNC_5(VAR_10, VAR_8) ||
        FUNC_4(FUNC_5(VAR_10, VAR_9)),
        "%s. Expected a close match to %06X (modern) or %06X (legacy) with %s. "
        "Got %06X from line %d\n",
        VAR_3 ? "Alpha blending" : "Not alpha blending", VAR_8, VAR_9,
        VAR_2 ? "DrawIconEx" : "DrawIcon", VAR_10, VAR_5);
}
