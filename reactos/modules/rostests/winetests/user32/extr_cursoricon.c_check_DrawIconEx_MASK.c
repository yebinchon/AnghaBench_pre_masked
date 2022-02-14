
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int color ;
typedef int UINT32 ;
typedef int UINT ;
typedef int HICON ;
typedef int HDC ;
typedef int COLORREF ;
typedef int BOOL ;


 int FUNC_0 (int ,int ,int ,int ,int,int,int ,int *,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int,int,int,int ,int *,int) ;
 int FUNC_6 (int,char*,int ,int ,int ,int ,int ,int ,int) ;

__attribute__((used)) static void FUNC_7(HDC VAR_0, BOOL VAR_1, UINT32 VAR_2, int VAR_3, UINT VAR_4, COLORREF VAR_5,
                             COLORREF VAR_6, COLORREF VAR_7, int VAR_8)
{
    COLORREF VAR_9;
    HICON VAR_10 = FUNC_5(VAR_0, 1, 1, VAR_3, VAR_1, &VAR_2, sizeof(VAR_2));
    if (!VAR_10) return;
    FUNC_2(VAR_0, 0, 0, VAR_5);
    FUNC_0(VAR_0, 0, 0, VAR_10, 1, 1, 0, ((void*)0), VAR_4);
    VAR_9 = FUNC_1(VAR_0, 0, 0);

    FUNC_6 (FUNC_4(VAR_9, VAR_6) ||
        FUNC_3(FUNC_4(VAR_9, VAR_7)),
        "Overlaying Mask %d on Color %06X with DrawIconEx flags %08X. "
        "Expected a close match to %06X (modern) or %06X (legacy). Got %06X from line %d\n",
        VAR_1, VAR_2, VAR_4, VAR_6, VAR_7, VAR_9, VAR_8);
}
