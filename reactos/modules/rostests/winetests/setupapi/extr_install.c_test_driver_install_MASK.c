
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * SC_HANDLE ;
typedef int HANDLE ;
typedef scalar_t__ DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 char* VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,int ,int ,int *,int ,int ,int *) ;
 int VAR_2 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int *) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_5 (char*) ;
 scalar_t__ FUNC_6 () ;
 int FUNC_7 (char*,int) ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int * FUNC_8 (int *,int *,int ) ;
 int * FUNC_9 (int *,char*,int ) ;
 int FUNC_10 (int) ;
 int FUNC_11 (char*,char const*) ;
 char* VAR_9 ;
 int FUNC_12 (char*,char*) ;
 int FUNC_13 (char*,char*) ;
 int FUNC_14 (int,char*,...) ;
 int FUNC_15 (char*,int,char*) ;
 int FUNC_16 (char*) ;
 int FUNC_17 (char*,char*,char*,char*) ;

__attribute__((used)) static void FUNC_18(void)
{
    HANDLE VAR_10;
    SC_HANDLE VAR_11, VAR_12;
    BOOL VAR_13;
    char VAR_14[VAR_8], VAR_15[VAR_8], VAR_16[VAR_8];
    DWORD VAR_17;

    static const char *VAR_18 =
        "[Version]\n"
        "Signature=\"$Chicago$\"\n"
        "[DestinationDirs]\n"
        "Winetest.DriverFiles=12\n"
        "[DefaultInstall]\n"
        "CopyFiles=Winetest.DriverFiles\n"
        "[DefaultInstall.Services]\n"
        "AddService=Winetest,,Winetest.Service\n"
        "[Winetest.Service]\n"
        "ServiceBinary=%12%\\winetest.sys\n"
        "ServiceType=1\n"
        "StartType=4\n"
        "ErrorControl=1\n"
        "[Winetest.DriverFiles]\n"
        "winetest.sys";


    FUNC_10(0xdeadbeef);
    VAR_11 = FUNC_8(((void*)0), ((void*)0), VAR_5);
    if (!VAR_11 && (FUNC_6() == VAR_3))
    {
        FUNC_16("Not enough rights to install the service\n");
        return;
    }
    FUNC_1(VAR_11);


    FUNC_7(VAR_15, VAR_8);
    FUNC_13(VAR_16, VAR_15);
    FUNC_12(VAR_16, "\\system32\\drivers\\winetest.sys");


    VAR_10 = FUNC_2("winetest.sys", VAR_6, 0, ((void*)0),
                           VAR_0, VAR_4, ((void*)0));
    FUNC_0(VAR_10);

    FUNC_11(VAR_9, VAR_18);
    FUNC_17(VAR_14, "%s\\%s", VAR_1, VAR_9);
    FUNC_15("DefaultInstall", 128, VAR_14);


    VAR_17 = FUNC_5(VAR_16);
    FUNC_14(VAR_17 != VAR_7, "Expected driver to exist\n");

    VAR_11 = FUNC_8(((void*)0), ((void*)0), VAR_5);


    VAR_12 = FUNC_9(VAR_11, "Winetest", VAR_2);
    FUNC_14(VAR_12 != ((void*)0), "Service was not created\n");

    FUNC_10(0xdeadbeef);
    VAR_13 = FUNC_4(VAR_12);
    FUNC_14(VAR_13, "Service could not be deleted : %d\n", FUNC_6());

    FUNC_1(VAR_12);
    FUNC_1(VAR_11);


    FUNC_3(VAR_9);
    FUNC_3("winetest.sys");
    FUNC_3(VAR_16);
}
