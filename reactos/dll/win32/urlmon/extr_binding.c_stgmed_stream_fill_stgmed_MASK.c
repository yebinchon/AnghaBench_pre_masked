
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int stgmed_obj_t ;
struct TYPE_9__ {TYPE_2__* buf; int IStream_iface; } ;
struct TYPE_6__ {int * pstm; } ;
struct TYPE_8__ {int * pUnkForRelease; TYPE_1__ u; int tymed; } ;
struct TYPE_7__ {int IUnknown_iface; } ;
typedef TYPE_3__ STGMEDIUM ;
typedef TYPE_4__ ProtocolStream ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static HRESULT FUNC_0(stgmed_obj_t *VAR_2, STGMEDIUM *VAR_3)
{
    ProtocolStream *VAR_4 = (ProtocolStream*)VAR_2;

    VAR_3->tymed = VAR_1;
    VAR_3->u.pstm = &VAR_4->IStream_iface;
    VAR_3->pUnkForRelease = &VAR_4->buf->IUnknown_iface;

    return VAR_0;
}
