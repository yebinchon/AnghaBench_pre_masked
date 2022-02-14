
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_vertex_element {int dummy; } ;
struct d3d8_vertex_declaration {struct wined3d_vertex_element* elements; int wined3d_vertex_declaration; int elements_size; int shader_handle; } ;
struct d3d8_device {int wined3d_device; } ;
typedef int UINT ;
typedef int HRESULT ;
typedef int DWORD ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (int const*,int *,struct wined3d_vertex_element**) ;
 int VAR_2 ;
 struct wined3d_vertex_element* FUNC_4 (int ) ;
 int FUNC_5 (struct wined3d_vertex_element*) ;
 int FUNC_6 (struct wined3d_vertex_element*,int const*,int ) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 (int ,struct wined3d_vertex_element*,int ,struct d3d8_vertex_declaration*,int *,int *) ;

HRESULT FUNC_10(struct d3d8_vertex_declaration *VAR_3,
        struct d3d8_device *VAR_4, const DWORD *VAR_5, DWORD VAR_6)
{
    struct wined3d_vertex_element *VAR_7;
    UINT VAR_8;
    HRESULT VAR_9;

    VAR_3->shader_handle = VAR_6;

    VAR_8 = FUNC_3(VAR_5, &VAR_3->elements_size, &VAR_7);
    if (!(VAR_3->elements = FUNC_4(VAR_3->elements_size)))
    {
        FUNC_0("Failed to allocate vertex declaration elements memory.\n");
        FUNC_5(VAR_7);
        return VAR_1;
    }

    FUNC_6(VAR_3->elements, VAR_5, VAR_3->elements_size);

    FUNC_7();
    VAR_9 = FUNC_9(VAR_4->wined3d_device, VAR_7, VAR_8,
            VAR_3, &VAR_2, &VAR_3->wined3d_vertex_declaration);
    FUNC_8();
    FUNC_5(VAR_7);
    if (FUNC_1(VAR_9))
    {
        FUNC_2("Failed to create wined3d vertex declaration, hr %#x.\n", VAR_9);
        FUNC_5(VAR_3->elements);
        return VAR_9;
    }

    return VAR_0;
}
