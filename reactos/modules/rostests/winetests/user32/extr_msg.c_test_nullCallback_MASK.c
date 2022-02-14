
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ HWND ;


 scalar_t__ FUNC_0 (int ,char*,char*,int ,int,int,int,int,int ,int ,int ,int *) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,int ,int ,int ,int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 () ;
 int FUNC_4 (int,char*) ;

__attribute__((used)) static void FUNC_5(void)
{
    HWND VAR_2;

    VAR_2 = FUNC_0(0, "TestWindowClass", "Test overlapped", VAR_1,
                           100, 100, 200, 200, 0, 0, 0, ((void*)0));
    FUNC_4 (VAR_2 != 0, "Failed to create overlapped window\n");

    FUNC_2(VAR_2,VAR_0,0,0,((void*)0),0);
    FUNC_3();
    FUNC_1(VAR_2);
}
