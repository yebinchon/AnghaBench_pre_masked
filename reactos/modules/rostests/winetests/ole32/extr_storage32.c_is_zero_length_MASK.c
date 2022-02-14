
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LPCSTR ;
typedef scalar_t__ HANDLE ;
typedef scalar_t__ DWORD ;
typedef int BOOL ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ,int ,int ,int *,int ,int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (scalar_t__,int *) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static BOOL FUNC_3(LPCSTR VAR_4)
{
    HANDLE VAR_5;
    DWORD VAR_6;

    VAR_5 = FUNC_1(VAR_4, VAR_1, 0, ((void*)0),
                VAR_3, 0, ((void*)0));
    if (VAR_5==VAR_2)
        return VAR_0;
    VAR_6 = FUNC_2(VAR_5, ((void*)0));
    FUNC_0(VAR_5);
    return VAR_6 == 0;
}
