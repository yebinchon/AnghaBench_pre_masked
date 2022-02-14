
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PWSTR ;
typedef int* PDWORD ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ) ;

__attribute__((used)) static
BOOL
FUNC_1(
    PWSTR VAR_2,
    PWSTR *VAR_3,
    PWSTR *VAR_4,
    PDWORD VAR_5)
{
    DWORD VAR_6;

    for (VAR_6 = 0; VAR_6 < 7; VAR_6++)
    {
        if (FUNC_0(VAR_2, VAR_3[VAR_6]) == 0 ||
            FUNC_0(VAR_2, VAR_4[VAR_6]) == 0)
        {
            *VAR_5 = VAR_6;
            return VAR_1;
        }
    }

    return VAR_0;
}
