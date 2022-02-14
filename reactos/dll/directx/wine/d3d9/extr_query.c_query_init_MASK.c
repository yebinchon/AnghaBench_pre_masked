
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * lpVtbl; } ;
struct d3d9_query {int refcount; int data_size; int * parent_device; int wined3d_query; TYPE_1__ IDirect3DQuery9_iface; } ;
struct d3d9_device {int IDirect3DDevice9Ex_iface; int wined3d_device; } ;
typedef int HRESULT ;
typedef int DWORD ;
typedef int D3DQUERYTYPE ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (int ,int,struct d3d9_query*,int *,int *) ;
 int FUNC_7 (int ) ;

HRESULT FUNC_8(struct d3d9_query *VAR_7, struct d3d9_device *VAR_8, D3DQUERYTYPE VAR_9)
{
    HRESULT VAR_10;

    if (VAR_9 > VAR_1)
    {
        if (VAR_9 == 0x16)
            FUNC_1("Undocumented query %#x created.\n", VAR_9);
        else
            FUNC_3("Invalid query type %#x.\n", VAR_9);

        return VAR_0;
    }

    VAR_7->IDirect3DQuery9_iface.lpVtbl = &VAR_6;
    VAR_7->refcount = 1;

    FUNC_4();
    if (FUNC_0(VAR_10 = FUNC_6(VAR_8->wined3d_device, VAR_9,
            VAR_7, &VAR_5, &VAR_7->wined3d_query)))
    {
        FUNC_5();
        FUNC_3("Failed to create wined3d query, hr %#x.\n", VAR_10);
        return VAR_10;
    }

    if (VAR_9 == VAR_2)
        VAR_7->data_size = sizeof(DWORD);
    else if (VAR_9 == VAR_3)
        VAR_7->data_size = sizeof(BOOL);
    else
        VAR_7->data_size = FUNC_7(VAR_7->wined3d_query);
    FUNC_5();

    VAR_7->parent_device = &VAR_8->IDirect3DDevice9Ex_iface;
    FUNC_2(VAR_7->parent_device);

    return VAR_4;
}
