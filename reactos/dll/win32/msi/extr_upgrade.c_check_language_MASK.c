
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__* LPCWSTR ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__*) ;
 int VAR_1 ;

__attribute__((used)) static BOOL FUNC_1(DWORD VAR_2, LPCWSTR VAR_3, DWORD VAR_4)
{
    DWORD VAR_5;

    if (!VAR_3 || VAR_3[0]==0)
        return VAR_0;

    VAR_5 = FUNC_0(VAR_3);

    if (VAR_4 & VAR_1)
        return (VAR_2 != VAR_5);
    else
        return (VAR_2 == VAR_5);
}
