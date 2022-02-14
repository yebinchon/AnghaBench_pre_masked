
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LPWSTR ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int,int *) ;
 int FUNC_3 (int ,int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (char*) ;

int FUNC_5(int VAR_3, LPWSTR VAR_4[])
{
    if (!FUNC_2(VAR_3, VAR_4))
    {
        FUNC_4(L"Usage: gflags [/p [image.exe] [/enable|/disable [/full]]]\n"
                L"              [/i <image.exe> [<Flags>]]\n"
                L"    image.exe:  Image you want to deal with\n"
                L"    /enable:    enable page heap for the image\n"
                L"    /disable:   disable page heap for the image\n"
                L"    /full:      activate full debug page heap\n"
                L"    <Flags>:    A 32 bit hex number (0x00000001) that specifies\n"
                L"                one or more global flags to set.\n"
                L"                Without any flags, the current settings are shown.\n"
                L"                Specify FFFFFFFF to delete the GlobalFlags entry.\n"
                L"                Additionally, instead of a single hex number,\n"
                L"                specify a list of abbreviations prefixed with\n"
                L"                a '+' to add, and '-' to remove a bit.\n"
                L"                Valid abbreviations:\n");
        FUNC_3(~0, VAR_0);
        return 1;
    }

    if (VAR_2)
    {
        return FUNC_1();
    }
    else if (VAR_1)
    {
        return FUNC_0();
    }
    return 2;
}
