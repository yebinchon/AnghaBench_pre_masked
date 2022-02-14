
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct d3dx9_base_effect {int technique_count; int parameter_count; } ;
struct TYPE_3__ {int Techniques; int Parameters; scalar_t__ Functions; int * Creator; } ;
typedef int HRESULT ;
typedef TYPE_1__ D3DXEFFECT_DESC ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static HRESULT FUNC_2(struct d3dx9_base_effect *VAR_2, D3DXEFFECT_DESC *VAR_3)
{
    if (!VAR_3)
    {
        FUNC_1("Invalid argument specified.\n");
        return VAR_0;
    }

    FUNC_0("partial stub!\n");


    VAR_3->Creator = ((void*)0);
    VAR_3->Functions = 0;
    VAR_3->Parameters = VAR_2->parameter_count;
    VAR_3->Techniques = VAR_2->technique_count;

    return VAR_1;
}
