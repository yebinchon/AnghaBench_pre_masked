
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int member_2; int member_3; int member_1; int member_0; } ;
typedef TYPE_1__ RECT ;
typedef scalar_t__ HWND ;


 scalar_t__ FUNC_0 (int ,char*,char*,int,int,int,int,int,scalar_t__,int ,int ,int *) ;
 int FUNC_1 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (scalar_t__,int,int,int *,int *) ;
 int FUNC_3 (scalar_t__,int,int,TYPE_1__*,int *,int *,int *,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (scalar_t__) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (int,char*) ;
 int FUNC_8 (int ,char*,int ) ;
 int FUNC_9 (char*) ;

__attribute__((used)) static void FUNC_10(void)
{
    HWND VAR_12, VAR_13;
    RECT VAR_14={0,0,130,130};

    VAR_12 = FUNC_0(0, "TestWindowClass", "Test Scroll",
            VAR_10|VAR_9,
            100, 100, 200, 200, 0, 0, 0, ((void*)0));
    FUNC_7 (VAR_12 != 0, "Failed to create overlapped window\n");
    VAR_13 = FUNC_0(0, "TestWindowClass", "Test child",
            VAR_10|VAR_7|VAR_8,
            10, 10, 150, 150, VAR_12, 0, 0, ((void*)0));
    FUNC_7 (VAR_13 != 0, "Failed to create child\n");
    FUNC_4(VAR_12);
    FUNC_5();
    FUNC_6();


    FUNC_9("start scroll\n");
    FUNC_3( VAR_12, 10, 10, &VAR_14, ((void*)0), ((void*)0), ((void*)0),
            VAR_1|VAR_2);
    FUNC_8(VAR_11, "ScrollWindowEx", VAR_0);
    FUNC_9("end scroll\n");
    FUNC_6();
    FUNC_5();
    FUNC_8(VAR_4, "ScrollWindowEx", VAR_0);
    FUNC_5();
    FUNC_6();


    FUNC_9("start scroll\n");
    FUNC_3( VAR_12, 10, 10, &VAR_14, ((void*)0), ((void*)0), ((void*)0), VAR_2);
    FUNC_8(VAR_11, "ScrollWindowEx", VAR_0);
    FUNC_9("end scroll\n");
    FUNC_6();
    FUNC_5();
    FUNC_8(VAR_5, "ScrollWindowEx", VAR_0);
    FUNC_5();
    FUNC_6();


    FUNC_9("start scroll\n");
    FUNC_3( VAR_12, 10, 10, &VAR_14, ((void*)0), ((void*)0), ((void*)0),
            VAR_3|VAR_1|VAR_2);


    FUNC_8(VAR_11, "ScrollWindowEx", VAR_6);
    FUNC_9("end scroll\n");
    FUNC_6();
    FUNC_5();
    FUNC_8(VAR_4, "ScrollWindowEx", VAR_0);
    FUNC_5();
    FUNC_6();


    FUNC_9("start scroll with ScrollWindow\n");
    FUNC_2( VAR_12, 5, 5, ((void*)0), ((void*)0));
    FUNC_9("end scroll\n");
    FUNC_6();
    FUNC_5();
    FUNC_8(VAR_4, "ScrollWindow", VAR_0);

    FUNC_7(FUNC_1(VAR_13), "failed to destroy window\n");
    FUNC_7(FUNC_1(VAR_12), "failed to destroy window\n");
    FUNC_6();
}
