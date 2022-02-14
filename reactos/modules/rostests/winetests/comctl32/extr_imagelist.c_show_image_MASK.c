
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LPCSTR ;
typedef int HWND ;
typedef int HIMAGELIST ;
typedef int * HDC ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (int *,int ,int ,int,int,int *,int,int,int ) ;
 int * FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int ,int *) ;
 int VAR_1 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int,int *,int ,int ,int ) ;
 int VAR_2 ;

__attribute__((used)) static HDC FUNC_6(HWND VAR_3, HIMAGELIST VAR_4, int VAR_5, int VAR_6,
                      LPCSTR VAR_7, BOOL VAR_8)
{
    HDC VAR_9;

    if (!VAR_2 || !VAR_4) return ((void*)0);

    FUNC_3(VAR_3, VAR_7);
    VAR_9 = FUNC_1(VAR_3);
    FUNC_5(VAR_4, VAR_5, VAR_9, 0, 0, VAR_0);

    FUNC_4(VAR_3);

    if (VAR_8)
    {
        FUNC_0(VAR_9, 0, 0, VAR_6, VAR_6, VAR_9, VAR_6+1, VAR_6+1, VAR_1);
        FUNC_2(VAR_3, VAR_9);
        VAR_9 = ((void*)0);
    }

    return VAR_9;
}
