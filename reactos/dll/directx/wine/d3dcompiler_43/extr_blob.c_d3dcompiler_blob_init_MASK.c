
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * lpVtbl; } ;
struct d3dcompiler_blob {int refcount; int data; int size; TYPE_1__ ID3DBlob_iface; } ;
typedef int SIZE_T ;
typedef int HRESULT ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 () ;
 int VAR_1 ;
 int FUNC_2 (int ,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static HRESULT FUNC_3(struct d3dcompiler_blob *VAR_4, SIZE_T VAR_5)
{
    VAR_4->ID3DBlob_iface.lpVtbl = &VAR_3;
    VAR_4->refcount = 1;
    VAR_4->size = VAR_5;

    VAR_4->data = FUNC_2(FUNC_1(), VAR_1, VAR_5);
    if (!VAR_4->data)
    {
        FUNC_0("Failed to allocate D3D blob data memory\n");
        return VAR_0;
    }

    return VAR_2;
}
