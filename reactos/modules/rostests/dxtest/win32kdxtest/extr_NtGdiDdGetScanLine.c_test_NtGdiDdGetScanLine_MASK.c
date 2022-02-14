
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int dwScanLine; int ddRVal; } ;
typedef int * HANDLE ;
typedef TYPE_1__ DD_GETSCANLINEDATA ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int,char*) ;
 int FUNC_4 (int ,int ,int,char*) ;
 int FUNC_5 (int ,int ,int,char*) ;

void
FUNC_6(HANDLE VAR_5)
{
    int VAR_6=0;
    BOOL VAR_7=VAR_4;
    DD_GETSCANLINEDATA VAR_8;

    FUNC_2("Start testing of NtGdiDdGetScanLine\n");
    FUNC_1(&VAR_8,sizeof(DD_GETSCANLINEDATA));

    VAR_7 = FUNC_0(((void*)0),((void*)0));
    FUNC_4(VAR_7, VAR_1,VAR_6,"1. NtGdiDdGetScanLine(NULL,NULL);\0");

    VAR_7 = FUNC_0(VAR_5,((void*)0));
    FUNC_4(VAR_7, VAR_1,VAR_6,"2. NtGdiDdGetScanLine(hDirectDrawLocal,NULL);\0");

    VAR_8.ddRVal = VAR_0;
    VAR_7 = FUNC_0(VAR_5,&VAR_8);
    FUNC_4(VAR_7,VAR_2,VAR_6,"3. NtGdiDdGetScanLine(hDirectDrawLocal,puGetScanLineData);\0");
    FUNC_5(VAR_8.ddRVal,VAR_3,VAR_6,"4. NtGdiDdGetScanLine(hDirectDrawLocal,puGetScanLineData);\0");
    FUNC_4(VAR_8.dwScanLine,0,VAR_6,"4. NtGdiDdGetScanLine(hDirectDrawLocal,puGetScanLineData);\0");




    FUNC_3(VAR_6, "NtGdiDdGetScanLine\0");
}
