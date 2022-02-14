
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ WCHAR ;
typedef scalar_t__* PWSTR ;
typedef int * PBOOLEAN ;
typedef scalar_t__ DWORD ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (scalar_t__*,scalar_t__*) ;

DWORD
FUNC_1(
    PWSTR VAR_5,
    PWSTR VAR_6,
    DWORD VAR_7,
    PBOOLEAN VAR_8)
{
    WCHAR VAR_9;
    DWORD VAR_10;
    PWSTR VAR_11;


    if (VAR_5 == ((void*)0) || VAR_6 == ((void*)0) || VAR_8 == ((void*)0))
    {
        return VAR_0;
    }


    *VAR_8 = VAR_2;


    if (VAR_7 == 0)
    {
        return VAR_1;
    }


    VAR_10 = 0;
    VAR_11 = VAR_6;

    while (FUNC_0(VAR_5, VAR_11) != 0)
    {

        ++VAR_10;


        if (VAR_10 > VAR_7)
        {




            return VAR_1;
        }


        do
        {
            VAR_9 = *VAR_11;
            ++VAR_11;
        } while (VAR_9 != VAR_4);
    }





    *VAR_8 = VAR_3;
    return VAR_1;
}
