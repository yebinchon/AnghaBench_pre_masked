
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int color ;
typedef int UINT32 ;
typedef int HICON ;
typedef int HDC ;
typedef int COLORREF ;
typedef int BOOL ;


 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (int ,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int ,scalar_t__,scalar_t__,int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int,int,int,int ,int *,int) ;
 int FUNC_7 (int,char*,int ,int ,int ,int ,int,...) ;

__attribute__((used)) static void FUNC_8(HDC VAR_2, BOOL VAR_3, UINT32 VAR_4, int VAR_5, COLORREF VAR_6,
                           COLORREF VAR_7, COLORREF VAR_8, int VAR_9)
{
    COLORREF VAR_10;
    HICON VAR_11 = FUNC_6(VAR_2, 1, 1, VAR_5, VAR_3, &VAR_4, sizeof(VAR_4));
    if (!VAR_11) return;
    FUNC_3(VAR_2, 0, 0, VAR_6);
    FUNC_3(VAR_2, FUNC_2(VAR_0)-1, FUNC_2(VAR_1)-1, VAR_6);
    FUNC_3(VAR_2, FUNC_2(VAR_0), FUNC_2(VAR_1), VAR_6);
    FUNC_0(VAR_2, 0, 0, VAR_11);
    VAR_10 = FUNC_1(VAR_2, 0, 0);

    FUNC_7 (FUNC_5(VAR_10, VAR_7) ||
        FUNC_4(FUNC_5(VAR_10, VAR_8)),
        "Overlaying Mask %d on Color %06X with DrawIcon. "
        "Expected a close match to %06X (modern), or %06X (legacy). Got %06X from line %d\n",
        VAR_3, VAR_4, VAR_7, VAR_8, VAR_10, VAR_9);

    VAR_10 = FUNC_1(VAR_2, FUNC_2(VAR_0)-1, FUNC_2(VAR_1)-1);

    FUNC_7 (FUNC_5(VAR_10, VAR_7) ||
        FUNC_4(FUNC_5(VAR_10, VAR_8)),
        "Overlaying Mask %d on Color %06X with DrawIcon. "
        "Expected a close match to %06X (modern), or %06X (legacy). Got %06X from line %d\n",
        VAR_3, VAR_4, VAR_7, VAR_8, VAR_10, VAR_9);

    VAR_10 = FUNC_1(VAR_2, FUNC_2(VAR_0), FUNC_2(VAR_1));

    FUNC_7 (FUNC_5(VAR_10, VAR_6),
        "Overlaying Mask %d on Color %06X with DrawIcon. "
        "Expected unchanged background color %06X. Got %06X from line %d\n",
        VAR_3, VAR_4, VAR_6, VAR_10, VAR_9);
}
