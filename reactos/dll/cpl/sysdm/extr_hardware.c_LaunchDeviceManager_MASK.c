
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int (* PDEVMGREXEC ) (int ,int ,int *,int ) ;
typedef int INT_PTR ;
typedef int HWND ;
typedef int HMODULE ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,char*) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (int *,char*,char*,int *,int *,int ) ;
 int FUNC_4 (char*) ;
 int VAR_3 ;

__attribute__((used)) static BOOL
FUNC_5(HWND VAR_4)
{




    HMODULE VAR_5;
    PDEVMGREXEC VAR_6;
    BOOL VAR_7;

    VAR_5 = FUNC_2(FUNC_4("devmgr.dll"));
    if(!VAR_5)
        return VAR_0;

    VAR_6 = (PDEVMGREXEC)FUNC_1(VAR_5, "DeviceManager_ExecuteW");
    if(!VAR_6)
    {
        FUNC_0(VAR_5);
        return VAR_0;
    }


    VAR_7 = VAR_6(VAR_4, VAR_3, ((void*)0) , VAR_1);
    FUNC_0(VAR_5);
    return VAR_7;

}
