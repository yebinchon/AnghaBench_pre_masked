
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int HWND ;
typedef scalar_t__ HMODULE ;
typedef int (* ETDTProc ) (int ,int ) ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__,char*) ;
 scalar_t__ FUNC_2 (char*) ;
 int VAR_2 ;

BOOL FUNC_3(HWND VAR_3)
{
    HMODULE VAR_4;
    ETDTProc VAR_5;

    VAR_4 = FUNC_2("uxtheme.dll");

    if(VAR_4)
    {
        VAR_5 =
            (ETDTProc)FUNC_1(VAR_4, "EnableThemeDialogTexture");

        if(VAR_5)
        {
            VAR_5(VAR_3, VAR_0);

            FUNC_0(VAR_4);
            return VAR_2;
        }
        else
        {

            FUNC_0(VAR_4);
            return VAR_1;
        }
    }
    else
    {

        return VAR_1;
    }
}
