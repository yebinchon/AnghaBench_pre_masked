
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ddraw {int d3dversion; int IDirectDraw7_iface; } ;
struct TYPE_4__ {int * lpVtbl; } ;
struct d3d_vertex_buffer {int ref; int version; int Caps; int fvf; int size; int wined3d_declaration; int wined3d_buffer; struct ddraw* ddraw; TYPE_1__ IDirect3DVertexBuffer7_iface; } ;
struct TYPE_5__ {int dwSize; int dwCaps; int dwFVF; int dwNumVertices; } ;
typedef scalar_t__ HRESULT ;
typedef TYPE_2__ D3DVERTEXBUFFERDESC ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*,int) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int VAR_3 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (char*,scalar_t__) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_5 (struct d3d_vertex_buffer*,int ,int *) ;
 int FUNC_6 (struct ddraw*,int) ;
 int FUNC_7 (int) ;
 struct d3d_vertex_buffer* FUNC_8 (int) ;
 int FUNC_9 (struct d3d_vertex_buffer*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 int FUNC_13 (int ) ;

HRESULT FUNC_14(struct d3d_vertex_buffer **VAR_6,
        struct ddraw *VAR_7, D3DVERTEXBUFFERDESC *VAR_8)
{
    struct d3d_vertex_buffer *VAR_9;
    HRESULT VAR_10 = VAR_0;

    FUNC_3("Vertex buffer description:\n");
    FUNC_3("    dwSize %u\n", VAR_8->dwSize);
    FUNC_3("    dwCaps %#x\n", VAR_8->dwCaps);
    FUNC_3("    FVF %#x\n", VAR_8->dwFVF);
    FUNC_3("    dwNumVertices %u\n", VAR_8->dwNumVertices);

    if (!(VAR_9 = FUNC_8(sizeof(*VAR_9))))
        return VAR_2;

    VAR_9->IDirect3DVertexBuffer7_iface.lpVtbl = &VAR_5;
    VAR_9->ref = 1;
    VAR_9->version = VAR_7->d3dversion;
    if (VAR_9->version == 7)
        FUNC_2(&VAR_7->IDirectDraw7_iface);
    VAR_9->ddraw = VAR_7;
    VAR_9->Caps = VAR_8->dwCaps;
    VAR_9->fvf = VAR_8->dwFVF;
    VAR_9->size = FUNC_7(VAR_8->dwFVF) * VAR_8->dwNumVertices;

    FUNC_11();

    if (FUNC_1(VAR_10 = FUNC_5(VAR_9, VAR_3, &VAR_9->wined3d_buffer)))
    {
        FUNC_4("Failed to create wined3d vertex buffer, hr %#x.\n", VAR_10);
        if (VAR_10 == VAR_4)
            VAR_10 = VAR_1;
        goto end;
    }

    if (!(VAR_9->wined3d_declaration = FUNC_6(VAR_7, VAR_8->dwFVF)))
    {
        FUNC_0("Failed to find vertex declaration for fvf %#x.\n", VAR_8->dwFVF);
        FUNC_10(VAR_9->wined3d_buffer);
        VAR_10 = VAR_1;
        goto end;
    }
    FUNC_13(VAR_9->wined3d_declaration);

end:
    FUNC_12();
    if (VAR_10 == VAR_0)
        *VAR_6 = VAR_9;
    else
        FUNC_9(VAR_9);

    return VAR_10;
}
