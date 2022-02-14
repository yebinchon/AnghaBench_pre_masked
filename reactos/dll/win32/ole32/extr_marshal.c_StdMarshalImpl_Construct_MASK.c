
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int * lpVtbl; } ;
struct TYPE_5__ {TYPE_2__ IMarshal_iface; void* dest_context_data; int dest_context; scalar_t__ ref; } ;
typedef TYPE_1__ StdMarshalImpl ;
typedef int REFIID ;
typedef int HRESULT ;
typedef int DWORD ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 () ;
 TYPE_1__* FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int ,TYPE_1__*) ;
 int FUNC_4 (TYPE_2__*,int ,void**) ;
 int VAR_1 ;

__attribute__((used)) static HRESULT FUNC_5(REFIID VAR_2, DWORD VAR_3, void *VAR_4, void** VAR_5)
{
    HRESULT VAR_6;

    StdMarshalImpl *VAR_7 = FUNC_2(FUNC_1(), 0, sizeof(StdMarshalImpl));
    if (!VAR_7)
        return VAR_0;

    VAR_7->IMarshal_iface.lpVtbl = &VAR_1;
    VAR_7->ref = 0;
    VAR_7->dest_context = VAR_3;
    VAR_7->dest_context_data = VAR_4;

    VAR_6 = FUNC_4(&VAR_7->IMarshal_iface, VAR_2, VAR_5);
    if (FUNC_0(VAR_6))
        FUNC_3(FUNC_1(), 0, VAR_7);

    return VAR_6;
}
