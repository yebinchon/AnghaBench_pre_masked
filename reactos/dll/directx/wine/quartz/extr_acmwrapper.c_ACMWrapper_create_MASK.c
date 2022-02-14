
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int IBaseFilter_iface; } ;
struct TYPE_5__ {TYPE_1__ filter; } ;
struct TYPE_6__ {int lasttime_real; int lasttime_sent; TYPE_2__ tf; } ;
typedef int * LPVOID ;
typedef int IUnknown ;
typedef int IBaseFilter ;
typedef int HRESULT ;
typedef TYPE_3__ ACMWrapperImpl ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*,int *,int **) ;
 int FUNC_2 (int *,int,int *,int *,int **) ;

HRESULT FUNC_3(IUnknown * VAR_4, LPVOID * VAR_5)
{
    HRESULT VAR_6;
    ACMWrapperImpl* VAR_7;

    FUNC_1("(%p, %p)\n", VAR_4, VAR_5);

    *VAR_5 = ((void*)0);

    if (VAR_4)
        return VAR_2;

    VAR_6 = FUNC_2(&VAR_1, sizeof(ACMWrapperImpl), &VAR_3, &VAR_0, (IBaseFilter**)&VAR_7);

    if (FUNC_0(VAR_6))
        return VAR_6;

    *VAR_5 = &VAR_7->tf.filter.IBaseFilter_iface;
    VAR_7->lasttime_real = VAR_7->lasttime_sent = -1;

    return VAR_6;
}
