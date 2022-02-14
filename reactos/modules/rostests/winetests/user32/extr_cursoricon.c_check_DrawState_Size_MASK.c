
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int color ;
typedef int UINT32 ;
typedef int UINT ;
typedef int LPARAM ;
typedef scalar_t__ HICON ;
typedef int HDC ;
typedef int HBRUSH ;
typedef int COLORREF ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int *,int ,int ,int,int,int,int,int) ;
 int FUNC_1 (int ,int,int) ;
 int FUNC_2 (int ,int,int,int) ;
 int FUNC_3 (int,int) ;
 scalar_t__ FUNC_4 (int ,int,int,int,int,int *,int) ;
 int FUNC_5 (int,char*,int,int ,int,int) ;

__attribute__((used)) static void FUNC_6(HDC VAR_1, BOOL VAR_2, UINT32 VAR_3, int VAR_4, HBRUSH VAR_5, UINT VAR_6, int VAR_7)
{
    COLORREF VAR_8, VAR_9;
    BOOL VAR_10[2];
    HICON VAR_11 = FUNC_4(VAR_1, 1, 1, VAR_4, VAR_2, &VAR_3, sizeof(VAR_3));
    VAR_9 = 0x00FFFFFF;

    FUNC_2(VAR_1, 0, 0, VAR_9);
    FUNC_2(VAR_1, 2, 2, VAR_9);


    FUNC_0(VAR_1, VAR_5, ((void*)0), (LPARAM) VAR_11, 0, 1, 1, 0, 0, (VAR_0 | VAR_6 ));

    VAR_8 = FUNC_1(VAR_1, 0, 0);
    VAR_10[0] = FUNC_3(VAR_8, VAR_9);
    VAR_8 = FUNC_1(VAR_1, 2, 2);
    VAR_10[0] = VAR_10[0] & FUNC_3(VAR_8, VAR_9);
    FUNC_0(VAR_1, VAR_5, ((void*)0), (LPARAM) VAR_11, 0, 1, 1, 2, 2, (VAR_0 | VAR_6 ));

    VAR_8 = FUNC_1(VAR_1, 0, 0);
    VAR_10[1] = FUNC_3(VAR_8, VAR_9);
    VAR_8 = FUNC_1(VAR_1, 2, 2);
    VAR_10[1] = VAR_10[0] & FUNC_3(VAR_8, VAR_9);

    if(!VAR_10[0]&&!VAR_10[1])
        FUNC_5 (VAR_10[1],
        "DrawState failed to draw a 1x1 Icon in the correct size, independent of the "
        "width and height settings passed to it, for Icon with: Overlaying Mask %d on "
        "Color %06X with flags %08X. Line %d\n",
        VAR_2, VAR_3, (VAR_0 | VAR_6), VAR_7);
    else if(!VAR_10[1])
        FUNC_5 (VAR_10[1],
        "DrawState failed to draw a 1x1 Icon in the correct size, if the width and height "
        "parameters passed to it are bigger than the real Icon size, for Icon with: Overlaying "
        "Mask %d on Color %06X with flags %08X. Line %d\n",
        VAR_2, VAR_3, (VAR_0 | VAR_6), VAR_7);
    else
        FUNC_5 (VAR_10[0],
        "DrawState failed to draw a 1x1 Icon in the correct size, if the width and height "
        "parameters passed to it are 0, for Icon with: Overlaying Mask %d on "
        "Color %06X with flags %08X. Line %d\n",
        VAR_2, VAR_3, (VAR_0 | VAR_6), VAR_7);
}
