
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int HMODULE ;
typedef int BOOL ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,char*) ;
 int FUNC_1 (char*) ;
 int VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;

__attribute__((used)) static BOOL FUNC_2(void)
{
    HMODULE VAR_4;

    if (!(VAR_4 = FUNC_1("d3dcompiler_43.dll"))) return VAR_0;

    VAR_2 = (void*)FUNC_0(VAR_4, "D3DAssemble");
    VAR_3 = (void*)FUNC_0(VAR_4, "D3DPreprocess");
    return VAR_1;
}
