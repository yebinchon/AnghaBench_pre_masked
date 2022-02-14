
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT ;
typedef int LPCWSTR ;
typedef int HKEY ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 () ;

__attribute__((used)) static UINT FUNC_4(LPCWSTR VAR_0, UINT VAR_1)
{
    HKEY VAR_2;

    VAR_2 = FUNC_3();
    if (VAR_1 > 0)
        FUNC_2( VAR_2, VAR_0, VAR_1 );
    else
        FUNC_1(VAR_2,VAR_0);
    FUNC_0(VAR_2);
    return VAR_1;
}
