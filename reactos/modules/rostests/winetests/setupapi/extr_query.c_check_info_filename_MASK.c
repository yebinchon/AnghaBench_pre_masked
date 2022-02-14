
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PSP_INF_INFORMATION ;
typedef int * LPSTR ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 () ;
 int * FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ,int *) ;
 int FUNC_3 (int ,int ,int *,int ,int *) ;
 int VAR_1 ;
 int FUNC_4 (int *,int *) ;

__attribute__((used)) static BOOL FUNC_5(PSP_INF_INFORMATION VAR_2, LPSTR VAR_3)
{
    LPSTR VAR_4;
    DWORD VAR_5;
    BOOL VAR_6 = VAR_0;

    if (!FUNC_3(VAR_2, 0, ((void*)0), 0, &VAR_5))
        return VAR_0;

    VAR_4 = FUNC_1(FUNC_0(), 0, VAR_5);
    if (!VAR_4)
        return VAR_0;

    FUNC_3(VAR_2, 0, VAR_4, VAR_5, &VAR_5);

    if (!FUNC_4(VAR_3, VAR_4))
        VAR_6 = VAR_1;

    FUNC_2(FUNC_0(), 0, VAR_4);
    return VAR_6;
}
