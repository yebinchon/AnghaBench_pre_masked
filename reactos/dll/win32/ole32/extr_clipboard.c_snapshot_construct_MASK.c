
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * lpVtbl; } ;
struct TYPE_6__ {int * data; int seq_no; scalar_t__ ref; TYPE_1__ IDataObject_iface; } ;
typedef TYPE_2__ snapshot ;
typedef int DWORD ;


 int FUNC_0 () ;
 TYPE_2__* FUNC_1 (int ,int ,int) ;
 int VAR_0 ;

__attribute__((used)) static snapshot *FUNC_2(DWORD VAR_1)
{
    snapshot *VAR_2;

    VAR_2 = FUNC_1( FUNC_0(), 0, sizeof(*VAR_2) );
    if (!VAR_2) return ((void*)0);

    VAR_2->IDataObject_iface.lpVtbl = &VAR_0;
    VAR_2->ref = 0;
    VAR_2->seq_no = VAR_1;
    VAR_2->data = ((void*)0);

    return VAR_2;
}
