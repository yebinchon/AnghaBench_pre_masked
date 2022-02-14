
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * HANDLE ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (int ,int ,int,char*) ;

void
FUNC_4(HANDLE VAR_2)
{
    int VAR_3=0;
    BOOL VAR_4=VAR_0;
    FUNC_1("Start testing of NtGdiDdDeleteDirectDrawObject\n");

    VAR_4 = FUNC_0(VAR_2);
    FUNC_3(VAR_4,VAR_0,VAR_3,"NtGdiDdDeleteDirectDrawObject(hDirectDrawLocal);\0");

    VAR_4 = FUNC_0(((void*)0));
    FUNC_3(VAR_4,VAR_1,VAR_3,"NtGdiDdDeleteDirectDrawObject(NULL);\0");

    FUNC_2(VAR_3, "NtGdiDdDeleteDirectDrawObject\0");
}
