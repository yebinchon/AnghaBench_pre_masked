
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int stgmed_obj_t ;
struct TYPE_4__ {int IStream_iface; TYPE_1__* buf; } ;
struct TYPE_3__ {scalar_t__ file; scalar_t__ hres; } ;
typedef TYPE_2__ ProtocolStream ;
typedef int HRESULT ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static HRESULT FUNC_1(stgmed_obj_t *VAR_5, DWORD VAR_6, void **VAR_7)
{
    ProtocolStream *VAR_8 = (ProtocolStream*)VAR_5;

    if(!(VAR_6 & VAR_0) && VAR_8->buf->file == VAR_2
       && VAR_8->buf->hres != VAR_3)
        return VAR_1;

    FUNC_0(&VAR_8->IStream_iface);
    *VAR_7 = &VAR_8->IStream_iface;
    return VAR_4;
}
