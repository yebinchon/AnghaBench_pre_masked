
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
 int FUNC_0 (int ,int ,int *,int ,int ,int,int,int ,int ,int) ;
 int FUNC_1 (int ,int,int) ;
 int FUNC_2 (int ,int,int,int ) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (int ,int,int,int,int ,int *,int) ;
 int FUNC_6 (int,char*,int ,int ,int,int ,int ,int ,int) ;

__attribute__((used)) static void FUNC_7(HDC VAR_1, BOOL VAR_2, UINT32 VAR_3, int VAR_4, HBRUSH VAR_5, UINT VAR_6,
                             COLORREF VAR_7, COLORREF VAR_8, COLORREF VAR_9, int VAR_10)
{
    COLORREF VAR_11;
    HICON VAR_12 = FUNC_5(VAR_1, 1, 1, VAR_4, VAR_2, &VAR_3, sizeof(VAR_3));
    if (!VAR_12) return;

    FUNC_2(VAR_1, 1, 1, VAR_7);

    FUNC_0(VAR_1, VAR_5, ((void*)0), (LPARAM) VAR_12, 0, 1, 1, 0, 0, ( VAR_0 | VAR_6 ));


    VAR_11 = FUNC_1(VAR_1, 1, 1);

    FUNC_6 (FUNC_4(VAR_11, VAR_8) ||
        FUNC_3(FUNC_4(VAR_11, VAR_9)),
        "DrawState drawing Icon with Overlaying Mask %d on Color %06X with flags %08X. "
        "Expected a close match to %06X (modern) or %06X (legacy). Got %06X from line %d\n",
        VAR_2, VAR_3, (VAR_0 | VAR_6), VAR_8, VAR_9, VAR_11, VAR_10);
}
