
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct d3dx_parameter {scalar_t__ class; int bytes; int type; scalar_t__ data; } ;
struct d3dx9_base_effect {int dummy; } ;
typedef size_t UINT ;
typedef int INT ;
typedef int HRESULT ;
typedef int DWORD ;
typedef int D3DXHANDLE ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char*) ;
 struct d3dx_parameter* FUNC_1 (struct d3dx9_base_effect*,int ) ;
 size_t FUNC_2 (size_t,int) ;
 int FUNC_3 (int *,int ,int *,int ) ;

__attribute__((used)) static HRESULT FUNC_4(struct d3dx9_base_effect *VAR_7,
        D3DXHANDLE VAR_8, INT *VAR_9, UINT VAR_10)
{
    struct d3dx_parameter *VAR_11 = FUNC_1(VAR_7, VAR_8);

    if (VAR_9 && VAR_11 && (VAR_11->class == VAR_3
            || VAR_11->class == VAR_4
            || VAR_11->class == VAR_2
            || VAR_11->class == VAR_1))
    {
        UINT VAR_12, VAR_13 = FUNC_2(VAR_10, VAR_11->bytes / sizeof(DWORD));

        for (VAR_12 = 0; VAR_12 < VAR_13; ++VAR_12)
        {
            FUNC_3(&VAR_9[VAR_12], VAR_5, (DWORD *)VAR_11->data + VAR_12, VAR_11->type);
        }
        return VAR_6;
    }

    FUNC_0("Parameter not found.\n");

    return VAR_0;
}
