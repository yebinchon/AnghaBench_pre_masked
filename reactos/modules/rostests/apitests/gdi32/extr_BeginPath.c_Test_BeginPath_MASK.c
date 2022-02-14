
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int HDC ;
typedef int BOOL ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int,char*,int) ;

void FUNC_6()
{
    HDC VAR_1;
    BOOL VAR_2;

    FUNC_4(0);
    VAR_2 = FUNC_0(0);
    FUNC_5(VAR_2 == 0, "BeginPath(0) succeeded, ret == %d\n", VAR_2);
    FUNC_5(FUNC_3() == VAR_0, "GetLastError() == %ld\n", FUNC_3());

    VAR_1 = FUNC_1(((void*)0));

    FUNC_4(0);
    VAR_2 = FUNC_0(VAR_1);
    FUNC_5(VAR_2 == 1, "BeginPath(hdc) failed, ret == %d\n", VAR_2);
    FUNC_5(FUNC_3() == 0, "GetLastError() == %ld\n", FUNC_3());

    FUNC_2(VAR_1);

}
