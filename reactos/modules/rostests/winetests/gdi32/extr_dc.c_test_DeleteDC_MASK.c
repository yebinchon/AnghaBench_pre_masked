
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int cls ;
struct TYPE_4__ {int cbSize; char* lpszClassName; void* lpfnWndProc; void* hInstance; int style; } ;
typedef TYPE_1__ WNDCLASSEXA ;
typedef scalar_t__ HWND ;
typedef scalar_t__ HDC ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,char*,int *,int,int ,int ,int,int,int ,int ,int ,int *) ;
 void* VAR_2 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 () ;
 void* FUNC_5 (int *) ;
 int FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 int VAR_3 ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (scalar_t__,scalar_t__) ;
 int FUNC_10 (char*,void*) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_11 (int) ;
 int FUNC_12 (TYPE_1__*,int ,int) ;
 int FUNC_13 (int,char*,...) ;

__attribute__((used)) static void FUNC_14(void)
{
    HWND VAR_6;
    HDC VAR_7, VAR_8;
    WNDCLASSEXA VAR_9;
    int VAR_10;


    VAR_6 = FUNC_0(0, "static", ((void*)0), VAR_4|VAR_5, 0,0,100,100,
                           0, 0, 0, ((void*)0));
    FUNC_13(VAR_6 != 0, "CreateWindowExA failed\n");

    VAR_7 = FUNC_3(VAR_6);
    FUNC_13(VAR_7 != 0, "GetDC failed\n");
    VAR_10 = FUNC_6(VAR_7);
    FUNC_13(VAR_10 == VAR_3, "expected OBJ_DC, got %d\n", VAR_10);
    VAR_10 = FUNC_1(VAR_7);
    FUNC_13(VAR_10, "DeleteDC failed\n");
    VAR_10 = FUNC_6(VAR_7);
    FUNC_13(!VAR_10 || FUNC_11(VAR_10) , "GetObjectType should fail for a deleted DC\n");

    VAR_7 = FUNC_7(VAR_6);
    FUNC_13(VAR_7 != 0, "GetDC failed\n");
    VAR_10 = FUNC_6(VAR_7);
    FUNC_13(VAR_10 == VAR_3, "expected OBJ_DC, got %d\n", VAR_10);
    VAR_10 = FUNC_1(VAR_7);
    FUNC_13(VAR_10, "DeleteDC failed\n");
    VAR_10 = FUNC_6(VAR_7);
    FUNC_13(!VAR_10 || FUNC_11(VAR_10) , "GetObjectType should fail for a deleted DC\n");

    FUNC_2(VAR_6);


    VAR_6 = FUNC_4();
    FUNC_13(VAR_6 != 0, "GetDesktopWindow failed\n");

    VAR_7 = FUNC_3(VAR_6);
    FUNC_13(VAR_7 != 0, "GetDC failed\n");
    VAR_10 = FUNC_6(VAR_7);
    FUNC_13(VAR_10 == VAR_3, "expected OBJ_DC, got %d\n", VAR_10);
    VAR_10 = FUNC_1(VAR_7);
    FUNC_13(VAR_10, "DeleteDC failed\n");
    VAR_10 = FUNC_6(VAR_7);
    FUNC_13(!VAR_10 || FUNC_11(VAR_10) , "GetObjectType should fail for a deleted DC\n");

    VAR_7 = FUNC_7(VAR_6);
    FUNC_13(VAR_7 != 0, "GetDC failed\n");
    VAR_10 = FUNC_6(VAR_7);
    FUNC_13(VAR_10 == VAR_3, "expected OBJ_DC, got %d\n", VAR_10);
    VAR_10 = FUNC_1(VAR_7);
    FUNC_13(VAR_10, "DeleteDC failed\n");
    VAR_10 = FUNC_6(VAR_7);
    FUNC_13(!VAR_10 || FUNC_11(VAR_10) , "GetObjectType should fail for a deleted DC\n");


    FUNC_12(&VAR_9, 0, sizeof(VAR_9));
    VAR_9.cbSize = sizeof(VAR_9);
    VAR_9.style = VAR_0;
    VAR_9.hInstance = FUNC_5(((void*)0));
    VAR_9.lpszClassName = "Wine class DC";
    VAR_9.lpfnWndProc = VAR_2;
    VAR_10 = FUNC_8(&VAR_9);
    FUNC_13(VAR_10, "RegisterClassExA failed\n");

    VAR_6 = FUNC_0(0, "Wine class DC", ((void*)0), VAR_4|VAR_5, 0,0,100,100,
                           0, 0, 0, ((void*)0));
    FUNC_13(VAR_6 != 0, "CreateWindowExA failed\n");

    VAR_7 = FUNC_3(VAR_6);
    FUNC_13(VAR_7 != 0, "GetDC failed\n");
    VAR_10 = FUNC_6(VAR_7);
    FUNC_13(VAR_10 == VAR_3, "expected OBJ_DC, got %d\n", VAR_10);
    VAR_10 = FUNC_1(VAR_7);
    FUNC_13(VAR_10, "DeleteDC failed\n");
    VAR_10 = FUNC_6(VAR_7);
    FUNC_13(VAR_10 == VAR_3, "expected OBJ_DC, got %d\n", VAR_10);
    VAR_10 = FUNC_9(VAR_6, VAR_7);
    FUNC_13(VAR_10, "ReleaseDC failed\n");
    VAR_10 = FUNC_6(VAR_7);
    FUNC_13(VAR_10 == VAR_3, "expected OBJ_DC, got %d\n", VAR_10);

    VAR_8 = VAR_7;

    VAR_7 = FUNC_7(VAR_6);
    FUNC_13(VAR_7 != 0, "GetDC failed\n");
    VAR_10 = FUNC_6(VAR_7);
    FUNC_13(VAR_10 == VAR_3, "expected OBJ_DC, got %d\n", VAR_10);
    VAR_10 = FUNC_1(VAR_7);
    FUNC_13(VAR_10, "DeleteDC failed\n");
    VAR_10 = FUNC_6(VAR_7);
    FUNC_13(!VAR_10 || FUNC_11(VAR_10) , "GetObjectType should fail for a deleted DC\n");

    FUNC_2(VAR_6);

    VAR_10 = FUNC_6(VAR_8);
    FUNC_13(VAR_10 == VAR_3, "expected OBJ_DC, got %d\n", VAR_10);

    VAR_10 = FUNC_10("Wine class DC", FUNC_5(((void*)0)));
    FUNC_13(VAR_10, "UnregisterClassA failed\n");

    VAR_10 = FUNC_6(VAR_8);
    FUNC_13(!VAR_10, "GetObjectType should fail for a deleted DC\n");


    FUNC_12(&VAR_9, 0, sizeof(VAR_9));
    VAR_9.cbSize = sizeof(VAR_9);
    VAR_9.style = VAR_1;
    VAR_9.hInstance = FUNC_5(((void*)0));
    VAR_9.lpszClassName = "Wine own DC";
    VAR_9.lpfnWndProc = VAR_2;
    VAR_10 = FUNC_8(&VAR_9);
    FUNC_13(VAR_10, "RegisterClassExA failed\n");

    VAR_6 = FUNC_0(0, "Wine own DC", ((void*)0), VAR_4|VAR_5, 0,0,100,100,
                           0, 0, 0, ((void*)0));
    FUNC_13(VAR_6 != 0, "CreateWindowExA failed\n");

    VAR_7 = FUNC_3(VAR_6);
    FUNC_13(VAR_7 != 0, "GetDC failed\n");
    VAR_10 = FUNC_6(VAR_7);
    FUNC_13(VAR_10 == VAR_3, "expected OBJ_DC, got %d\n", VAR_10);
    VAR_10 = FUNC_1(VAR_7);
    FUNC_13(VAR_10, "DeleteDC failed\n");
    VAR_10 = FUNC_6(VAR_7);
    FUNC_13(VAR_10 == VAR_3, "expected OBJ_DC, got %d\n", VAR_10);
    VAR_10 = FUNC_9(VAR_6, VAR_7);
    FUNC_13(VAR_10, "ReleaseDC failed\n");
    VAR_10 = FUNC_6(VAR_7);
    FUNC_13(VAR_10 == VAR_3, "expected OBJ_DC, got %d\n", VAR_10);

    VAR_7 = FUNC_7(VAR_6);
    FUNC_13(VAR_7 != 0, "GetDC failed\n");
    VAR_10 = FUNC_6(VAR_7);
    FUNC_13(VAR_10 == VAR_3, "expected OBJ_DC, got %d\n", VAR_10);
    VAR_10 = FUNC_1(VAR_7);
    FUNC_13(VAR_10, "DeleteDC failed\n");
    VAR_10 = FUNC_6(VAR_7);
    FUNC_13(!VAR_10 || FUNC_11(VAR_10) , "GetObjectType should fail for a deleted DC\n");

    FUNC_2(VAR_6);

    VAR_10 = FUNC_10("Wine own DC", FUNC_5(((void*)0)));
    FUNC_13(VAR_10, "UnregisterClassA failed\n");
}
