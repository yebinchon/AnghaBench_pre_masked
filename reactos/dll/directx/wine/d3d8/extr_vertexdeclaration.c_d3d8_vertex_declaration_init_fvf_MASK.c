
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct d3d8_vertex_declaration {int wined3d_vertex_declaration; int shader_handle; scalar_t__ elements_size; int * elements; } ;
struct d3d8_device {int wined3d_device; } ;
typedef int HRESULT ;
typedef int DWORD ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*,int ) ;
 int VAR_1 ;
 int FUNC_2 (int ,int ,struct d3d8_vertex_declaration*,int *,int *) ;

HRESULT FUNC_3(struct d3d8_vertex_declaration *VAR_2,
        struct d3d8_device *VAR_3, DWORD VAR_4)
{
    HRESULT VAR_5;

    VAR_2->elements = ((void*)0);
    VAR_2->elements_size = 0;
    VAR_2->shader_handle = VAR_4;

    VAR_5 = FUNC_2(VAR_3->wined3d_device, VAR_4, VAR_2,
            &VAR_1, &VAR_2->wined3d_vertex_declaration);
    if (FUNC_0(VAR_5))
    {
        FUNC_1("Failed to create wined3d vertex declaration, hr %#x.\n", VAR_5);
        return VAR_5;
    }

    return VAR_0;
}
