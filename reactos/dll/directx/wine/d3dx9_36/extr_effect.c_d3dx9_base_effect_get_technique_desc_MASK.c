
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct d3dx_technique {int annotation_count; int pass_count; int name; } ;
struct d3dx9_base_effect {struct d3dx_technique* techniques; } ;
struct TYPE_3__ {int Annotations; int Passes; int Name; } ;
typedef int HRESULT ;
typedef TYPE_1__ D3DXTECHNIQUE_DESC ;
typedef scalar_t__ D3DXHANDLE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 struct d3dx_technique* FUNC_1 (struct d3dx9_base_effect*,scalar_t__) ;

__attribute__((used)) static HRESULT FUNC_2(struct d3dx9_base_effect *VAR_2,
        D3DXHANDLE VAR_3, D3DXTECHNIQUE_DESC *VAR_4)
{
    struct d3dx_technique *VAR_5 = VAR_3 ? FUNC_1(VAR_2, VAR_3) : &VAR_2->techniques[0];

    if (!VAR_4 || !VAR_5)
    {
        FUNC_0("Invalid argument specified.\n");
        return VAR_0;
    }

    VAR_4->Name = VAR_5->name;
    VAR_4->Passes = VAR_5->pass_count;
    VAR_4->Annotations = VAR_5->annotation_count;

    return VAR_1;
}
