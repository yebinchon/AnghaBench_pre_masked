
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct d3dx_parameter {scalar_t__ type; scalar_t__ data; int element_count; } ;
struct d3dx9_base_effect {int dummy; } ;
struct IDirect3DBaseTexture9 {int dummy; } ;
typedef int HRESULT ;
typedef int D3DXHANDLE ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct IDirect3DBaseTexture9*) ;
 int FUNC_1 (struct IDirect3DBaseTexture9*) ;
 int FUNC_2 (char*) ;
 struct d3dx_parameter* FUNC_3 (struct d3dx9_base_effect*,int ) ;
 int FUNC_4 (struct d3dx_parameter*) ;

__attribute__((used)) static HRESULT FUNC_5(struct d3dx9_base_effect *VAR_7,
        D3DXHANDLE VAR_8, struct IDirect3DBaseTexture9 *VAR_9)
{
    struct d3dx_parameter *VAR_10 = FUNC_3(VAR_7, VAR_8);

    if (VAR_10 && !VAR_10->element_count &&
            (VAR_10->type == VAR_1 || VAR_10->type == VAR_2
            || VAR_10->type == VAR_3 || VAR_10->type == VAR_4
            || VAR_10->type == VAR_5))
    {
        struct IDirect3DBaseTexture9 *VAR_11 = *(struct IDirect3DBaseTexture9 **)VAR_10->data;

        if (VAR_9 == VAR_11)
            return VAR_6;

        if (VAR_9) FUNC_0(VAR_9);
        if (VAR_11) FUNC_1(VAR_11);

        *(struct IDirect3DBaseTexture9 **)VAR_10->data = VAR_9;
        FUNC_4(VAR_10);

        return VAR_6;
    }

    FUNC_2("Parameter not found.\n");

    return VAR_0;
}
