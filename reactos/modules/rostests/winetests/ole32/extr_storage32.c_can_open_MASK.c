
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LPCWSTR ;
typedef scalar_t__ HANDLE ;
typedef int DWORD ;
typedef int BOOL ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ,int ,int ,int *,int ,int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static BOOL FUNC_2(LPCWSTR VAR_5, DWORD VAR_6, DWORD VAR_7)
{
    HANDLE VAR_8;

    VAR_8 = FUNC_1(VAR_5, VAR_6, VAR_7, ((void*)0), VAR_3, VAR_1, ((void*)0));

    if (VAR_8 == VAR_2)
        return VAR_0;

    FUNC_0(VAR_8);
    return VAR_4;
}
