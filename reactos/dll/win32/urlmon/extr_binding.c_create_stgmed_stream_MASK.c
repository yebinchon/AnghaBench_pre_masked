
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int * vtbl; } ;
typedef TYPE_2__ stgmed_obj_t ;
struct TYPE_10__ {int IUnknown_iface; } ;
typedef TYPE_3__ stgmed_buf_t ;
struct TYPE_8__ {int * lpVtbl; } ;
struct TYPE_11__ {int ref; TYPE_2__ stgmed_obj; TYPE_3__* buf; TYPE_1__ IStream_iface; } ;
typedef TYPE_4__ ProtocolStream ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 () ;
 TYPE_4__* FUNC_2 (int) ;
 int VAR_1 ;

__attribute__((used)) static stgmed_obj_t *FUNC_3(stgmed_buf_t *VAR_2)
{
    ProtocolStream *VAR_3 = FUNC_2(sizeof(ProtocolStream));

    VAR_3->stgmed_obj.vtbl = &VAR_1;
    VAR_3->IStream_iface.lpVtbl = &VAR_0;
    VAR_3->ref = 1;

    FUNC_0(&VAR_2->IUnknown_iface);
    VAR_3->buf = VAR_2;

    FUNC_1();

    return &VAR_3->stgmed_obj;
}
