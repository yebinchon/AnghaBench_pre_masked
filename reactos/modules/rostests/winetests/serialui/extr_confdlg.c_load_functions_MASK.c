
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int VOID ;
typedef char* LPCSTR ;


 scalar_t__ FUNC_0 (int ,char*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int * VAR_1 ;
 int * VAR_2 ;
 int * VAR_3 ;
 int * VAR_4 ;

__attribute__((used)) static LPCSTR FUNC_2(void)
{
    LPCSTR VAR_5;

    VAR_5 = "serialui.dll";
    VAR_0 = FUNC_1(VAR_5);
    if (!VAR_0) return VAR_5;

    VAR_5 = "drvCommConfigDialogA";
    VAR_1 = (VOID *) FUNC_0(VAR_0, VAR_5);
    if (!VAR_1) return VAR_5;

    VAR_5 = "drvCommConfigDialogW";
    VAR_2 = (VOID *) FUNC_0(VAR_0, VAR_5);
    if (!VAR_2) return VAR_5;

    VAR_5 = "drvGetDefaultCommConfigA";
    VAR_3 = (VOID *) FUNC_0(VAR_0, VAR_5);
    if (!VAR_3) return VAR_5;

    VAR_5 = "drvGetDefaultCommConfigW";
    VAR_4 = (VOID *) FUNC_0(VAR_0, VAR_5);
    if (!VAR_4) return VAR_5;


    return ((void*)0);
}
