
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * PSP_INF_INFORMATION ;
typedef int * PDWORD ;
typedef int LPCSTR ;
typedef int DWORD ;
typedef int BOOL ;


 int FUNC_0 () ;
 int * FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ,int *,int ,int *) ;

__attribute__((used)) static PSP_INF_INFORMATION FUNC_3(LPCSTR VAR_0, DWORD VAR_1, PDWORD VAR_2)
{
    PSP_INF_INFORMATION VAR_3;
    BOOL VAR_4;

    VAR_4 = FUNC_2(VAR_0, VAR_1, ((void*)0), 0, VAR_2);
    if (!VAR_4)
        return ((void*)0);

    VAR_3 = FUNC_1(FUNC_0(), 0, *VAR_2);
    return VAR_3;
}
