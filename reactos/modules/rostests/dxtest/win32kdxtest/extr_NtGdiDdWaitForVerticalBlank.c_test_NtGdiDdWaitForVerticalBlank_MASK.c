
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ddRVal; int dwFlags; } ;
typedef int * PDD_WAITFORVERTICALBLANKDATA ;
typedef int * HANDLE ;
typedef TYPE_1__ DDHAL_WAITFORVERTICALBLANKDATA ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (int ,int ,int,char*) ;
 int FUNC_4 (int ,int ,int,char*) ;

void
FUNC_5(HANDLE VAR_5)
{
    int VAR_6=0;
    BOOL VAR_7=VAR_4;
    DDHAL_WAITFORVERTICALBLANKDATA VAR_8;

    FUNC_1(&VAR_8,sizeof(DDHAL_WAITFORVERTICALBLANKDATA));

    VAR_7 = FUNC_0(((void*)0),((void*)0));
    FUNC_3(VAR_7, VAR_0,VAR_6,"1. NtGdiDdWaitForVerticalBlank(NULL,NULL);\0");

    VAR_7 = FUNC_0(VAR_5,((void*)0));
    FUNC_3(VAR_7, VAR_0,VAR_6,"2. NtGdiDdWaitForVerticalBlank(hDirectDrawLocal,NULL);\0");

    VAR_7 = FUNC_0(VAR_5,(PDD_WAITFORVERTICALBLANKDATA)&VAR_8);
    FUNC_3(VAR_7, VAR_0,VAR_6,"3. NtGdiDdWaitForVerticalBlank(hDirectDrawLocal,NULL);\0");
    FUNC_3(VAR_8.ddRVal, VAR_3,VAR_6,"4. NtGdiDdWaitForVerticalBlank(hDirectDrawLocal,NULL);\0");

    FUNC_1(&VAR_8,sizeof(DDHAL_WAITFORVERTICALBLANKDATA));
    VAR_8.dwFlags = VAR_2;
    VAR_7 = FUNC_0(VAR_5,(PDD_WAITFORVERTICALBLANKDATA)&VAR_8);

    FUNC_3(VAR_7, VAR_1,VAR_6,"5. NtGdiDdWaitForVerticalBlank(hDirectDrawLocal,NULL);\0");
    FUNC_4(VAR_8.ddRVal, VAR_3,VAR_6,"6. NtGdiDdWaitForVerticalBlank(hDirectDrawLocal,NULL);\0");

    VAR_7 = FUNC_0(VAR_5,(PDD_WAITFORVERTICALBLANKDATA)&VAR_8);

    FUNC_2(VAR_6, "NtGdiDdWaitForVerticalBlank\0");
}
