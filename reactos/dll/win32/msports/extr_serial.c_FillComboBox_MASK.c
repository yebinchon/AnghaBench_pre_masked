
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int VOID ;
typedef int * PWSTR ;
typedef int HWND ;


 int FUNC_0 (int ,int *) ;
 int VAR_0 ;
 int * FUNC_1 (int *,int) ;

__attribute__((used)) static
VOID
FUNC_2(
    HWND VAR_1,
    PWSTR VAR_2)
{
    PWSTR VAR_3, VAR_4;

    VAR_3 = VAR_2;
    for (;;)
    {
        VAR_4 = FUNC_1(VAR_3, L',');
        if (VAR_4 != ((void*)0))
            *VAR_4 = VAR_0;

        FUNC_0(VAR_1, VAR_3);

        if (VAR_4 == ((void*)0))
            break;

        VAR_3 = VAR_4 + 1;
    }
}
