
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wined3d_vertex_element {int dummy; } ;
struct TYPE_2__ {int * lpVtbl; } ;
struct d3d9_vertex_declaration {int refcount; int element_count; int * parent_device; struct wined3d_vertex_element* elements; int wined3d_declaration; TYPE_1__ IDirect3DVertexDeclaration9_iface; } ;
struct d3d9_device {int IDirect3DDevice9Ex_iface; int wined3d_device; } ;
typedef int UINT ;
typedef int HRESULT ;
typedef int D3DVERTEXELEMENT9 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (int const*,struct wined3d_vertex_element**,int*) ;
 int VAR_2 ;
 int VAR_3 ;
 struct wined3d_vertex_element* FUNC_5 (int) ;
 int FUNC_6 (struct wined3d_vertex_element*) ;
 int FUNC_7 (struct wined3d_vertex_element*,int const*,int) ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 (int ,struct wined3d_vertex_element*,int,struct d3d9_vertex_declaration*,int *,int *) ;

__attribute__((used)) static HRESULT FUNC_11(struct d3d9_vertex_declaration *VAR_4,
        struct d3d9_device *VAR_5, const D3DVERTEXELEMENT9 *VAR_6)
{
    struct wined3d_vertex_element *VAR_7;
    UINT VAR_8;
    UINT VAR_9;
    HRESULT VAR_10;

    VAR_10 = FUNC_4(VAR_6, &VAR_7, &VAR_8);
    if (FUNC_1(VAR_10))
    {
        FUNC_3("Failed to create wined3d vertex declaration elements, hr %#x.\n", VAR_10);
        return VAR_10;
    }

    VAR_4->IDirect3DVertexDeclaration9_iface.lpVtbl = &VAR_2;
    VAR_4->refcount = 1;

    VAR_9 = VAR_8 + 1;
    if (!(VAR_4->elements = FUNC_5(VAR_9 * sizeof(*VAR_4->elements))))
    {
        FUNC_6(VAR_7);
        FUNC_0("Failed to allocate vertex declaration elements memory.\n");
        return VAR_0;
    }
    FUNC_7(VAR_4->elements, VAR_6, VAR_9 * sizeof(*VAR_6));
    VAR_4->element_count = VAR_9;

    FUNC_8();
    VAR_10 = FUNC_10(VAR_5->wined3d_device, VAR_7, VAR_8,
            VAR_4, &VAR_3, &VAR_4->wined3d_declaration);
    FUNC_9();
    FUNC_6(VAR_7);
    if (FUNC_1(VAR_10))
    {
        FUNC_6(VAR_4->elements);
        FUNC_3("Failed to create wined3d vertex declaration, hr %#x.\n", VAR_10);
        return VAR_10;
    }

    VAR_4->parent_device = &VAR_5->IDirect3DDevice9Ex_iface;
    FUNC_2(VAR_4->parent_device);

    return VAR_1;
}
