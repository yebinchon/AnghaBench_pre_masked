
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int wc ;
typedef int path ;
typedef int buff ;
struct TYPE_5__ {char const* lpszClassName; int hIcon; int lpfnWndProc; } ;
typedef TYPE_1__ WNDCLASSA ;
typedef int ULONG_PTR ;
typedef int LPCWSTR ;
typedef int * HWND ;
typedef int HINSTANCE ;
typedef int HANDLE ;
typedef int BOOL ;
typedef scalar_t__ ATOM ;


 int FUNC_0 (int ,int *) ;
 int VAR_0 ;
 int * FUNC_1 (int ,char const*,char*,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,char const*,TYPE_1__*) ;
 int FUNC_6 (int *,char*,int) ;
 int FUNC_7 () ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int,char*) ;
 scalar_t__ VAR_1 ;
 int FUNC_10 (int ,int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (char const*,int ) ;
 int FUNC_14 (char*,char const*) ;
 int FUNC_15 (char*) ;
 int FUNC_16 (TYPE_1__*,int ,int) ;
 int FUNC_17 (int,char*,...) ;
 int FUNC_18 (char*,char*) ;
 int FUNC_19 (char*,char const*) ;

__attribute__((used)) static void FUNC_20(void)
{
    static const char VAR_3[] =
        "<assembly xmlns=\"urn:schemas-microsoft-com:asm.v1\" manifestVersion=\"1.0\">"
          "<assemblyIdentity version=\"4.3.2.1\" name=\"Wine.WndClass.Test\" type=\"win32\" />"
          "<file name=\"file.exe\">"
            "<windowClass>MyTestClass</windowClass>"
          "</file>"
        "</assembly>";
    static const char *VAR_4 = "MyTestClass";
    WNDCLASSA VAR_5;
    ULONG_PTR VAR_6;
    HANDLE VAR_7;
    BOOL VAR_8;
    ATOM VAR_9;
    HINSTANCE VAR_10;
    char VAR_11[64];
    HWND VAR_12;
    char VAR_13[VAR_2];

    FUNC_9(sizeof(VAR_13)/sizeof(VAR_13[0]), VAR_13);
    FUNC_18(VAR_13, "actctx_classes.manifest");

    FUNC_14(VAR_13, VAR_3);
    VAR_7 = FUNC_15(VAR_13);
    VAR_8 = FUNC_3(VAR_13);
    FUNC_17(VAR_8, "Failed to delete manifest file, error %d.\n", FUNC_7());

    VAR_8 = FUNC_0(VAR_7, &VAR_6);
    FUNC_17(VAR_8, "Failed to activate context.\n");

    FUNC_16(&VAR_5, 0, sizeof(VAR_5));
    VAR_5.lpfnWndProc = VAR_0;
    VAR_5.hIcon = FUNC_10(0, (LPCWSTR)VAR_1);
    VAR_5.lpszClassName = VAR_4;

    VAR_10 = FUNC_8(0);

    VAR_8 = FUNC_5(VAR_10, VAR_4, &VAR_5);
    FUNC_17(!VAR_8, "Expected failure.\n");

    VAR_9 = FUNC_11(&VAR_5);
    FUNC_17(VAR_9 != 0, "Failed to register class.\n");


    VAR_8 = FUNC_5(VAR_10, VAR_4, &VAR_5);
    FUNC_17(VAR_8, "Failed to get class info.\n");

    VAR_12 = FUNC_1(0, VAR_4, "test", 0, 0, 0, 0, 0, 0, 0, VAR_10, 0);
    FUNC_17(VAR_12 != ((void*)0), "Failed to create a window.\n");

    VAR_8 = FUNC_6(VAR_12, VAR_11, sizeof(VAR_11));
    FUNC_17(VAR_8, "Failed to get class name.\n");
    FUNC_17(!FUNC_19(VAR_11, VAR_4), "Unexpected class name.\n");

    VAR_8 = FUNC_5(VAR_10, "4.3.2.1!MyTestClass", &VAR_5);
    FUNC_17(VAR_8, "Failed to get class info.\n");

    VAR_8 = FUNC_13(VAR_4, VAR_10);
    FUNC_17(!VAR_8, "Failed to unregister class.\n");

    VAR_8 = FUNC_2(0, VAR_6);
    FUNC_17(VAR_8, "Failed to deactivate context.\n");

    VAR_8 = FUNC_5(VAR_10, VAR_4, &VAR_5);
    FUNC_17(!VAR_8, "Unexpected ret val %d.\n", VAR_8);

    VAR_8 = FUNC_5(VAR_10, "4.3.2.1!MyTestClass", &VAR_5);
    FUNC_17(VAR_8, "Failed to get class info.\n");

    VAR_8 = FUNC_6(VAR_12, VAR_11, sizeof(VAR_11));
    FUNC_17(VAR_8, "Failed to get class name.\n");
    FUNC_17(!FUNC_19(VAR_11, VAR_4), "Unexpected class name.\n");

    FUNC_4(VAR_12);

    VAR_8 = FUNC_13("MyTestClass", VAR_10);
    FUNC_17(!VAR_8, "Unexpected ret value %d.\n", VAR_8);

    VAR_8 = FUNC_13("4.3.2.1!MyTestClass", VAR_10);
    FUNC_17(VAR_8, "Failed to unregister class.\n");


    VAR_5.lpszClassName = "4.3.2.1!MyTestClass";
    VAR_9 = FUNC_11(&VAR_5);
    FUNC_17(VAR_9 != 0, "Failed to register class.\n");

    VAR_8 = FUNC_0(VAR_7, &VAR_6);
    FUNC_17(VAR_8, "Failed to activate context.\n");

    VAR_5.lpszClassName = "MyTestClass";
    VAR_9 = FUNC_11(&VAR_5);
    FUNC_17(VAR_9 == 0, "Expected failure.\n");

    VAR_8 = FUNC_2(0, VAR_6);
    FUNC_17(VAR_8, "Failed to deactivate context.\n");

    VAR_8 = FUNC_13("4.3.2.1!MyTestClass", VAR_10);
    FUNC_17(VAR_8, "Failed to unregister class.\n");


    VAR_8 = FUNC_0(VAR_7, &VAR_6);
    FUNC_17(VAR_8, "Failed to activate context.\n");

    VAR_5.lpszClassName = "MyTestClass";
    VAR_9 = FUNC_11(&VAR_5);
    FUNC_17(VAR_9 != 0, "Failed to register class\n");

    VAR_8 = FUNC_2(0, VAR_6);
    FUNC_17(VAR_8, "Failed to deactivate context.\n");

    VAR_8 = FUNC_5(VAR_10, "MyTestClass", &VAR_5);
    FUNC_17(!VAR_8, "Expected failure.\n");

    VAR_8 = FUNC_5(VAR_10, "4.3.2.1!MyTestClass", &VAR_5);
    FUNC_17(VAR_8, "Failed to get class info.\n");

    VAR_8 = FUNC_13("4.3.2.1!MyTestClass", VAR_10);
    FUNC_17(VAR_8, "Failed to unregister class.\n");


    VAR_5.lpszClassName = "MyTestClass";
    VAR_9 = FUNC_11(&VAR_5);
    FUNC_17(VAR_9 != 0, "Failed to register class.\n");

    VAR_8 = FUNC_0(VAR_7, &VAR_6);
    FUNC_17(VAR_8, "Failed to activate context.\n");

    VAR_5.lpszClassName = "MyTestClass";
    VAR_9 = FUNC_11(&VAR_5);
    FUNC_17(VAR_9 != 0, "Failed to register class.\n");

    VAR_8 = FUNC_2(0, VAR_6);
    FUNC_17(VAR_8, "Failed to deactivate context.\n");

    VAR_8 = FUNC_13("4.3.2.1!MyTestClass", VAR_10);
    FUNC_17(VAR_8, "Failed to unregister class.\n");

    VAR_8 = FUNC_13("MyTestClass", VAR_10);
    FUNC_17(VAR_8, "Failed to unregister class.\n");

    FUNC_12(VAR_7);
}
