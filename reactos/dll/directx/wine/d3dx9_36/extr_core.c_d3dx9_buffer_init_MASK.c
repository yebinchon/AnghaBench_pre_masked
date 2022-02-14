
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * lpVtbl; } ;
struct ID3DXBufferImpl {int ref; int buffer; int size; TYPE_1__ ID3DXBuffer_iface; } ;
typedef int HRESULT ;
typedef int DWORD ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int FUNC_1 () ;
 int VAR_2 ;
 int FUNC_2 (int ,int ,int ) ;
 int VAR_3 ;

__attribute__((used)) static HRESULT FUNC_3(struct ID3DXBufferImpl *VAR_4, DWORD VAR_5)
{
    VAR_4->ID3DXBuffer_iface.lpVtbl = &VAR_3;
    VAR_4->ref = 1;
    VAR_4->size = VAR_5;

    VAR_4->buffer = FUNC_2(FUNC_1(), VAR_2, VAR_5);
    if (!VAR_4->buffer)
    {
        FUNC_0("Failed to allocate buffer memory\n");
        return VAR_1;
    }

    return VAR_0;
}
