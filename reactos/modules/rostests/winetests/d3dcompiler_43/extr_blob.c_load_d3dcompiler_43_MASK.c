
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
 void* VAR_4 ;

__attribute__((used)) static BOOL FUNC_2(void)
{
    HMODULE VAR_5;

    if (!(VAR_5 = FUNC_1("d3dcompiler_43.dll"))) return VAR_0;

    VAR_2 = (void*)FUNC_0(VAR_5, "D3DCreateBlob");
    VAR_3 = (void*)FUNC_0(VAR_5, "D3DGetBlobPart");
    VAR_4 = (void*)FUNC_0(VAR_5, "D3DStripShader");
    return VAR_1;
}
