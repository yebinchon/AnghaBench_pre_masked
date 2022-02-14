
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int IBindStatusCallbackEx_iface; int * callback; } ;
typedef int IBindStatusCallback ;
typedef int IBindCtx ;
typedef int HRESULT ;
typedef TYPE_1__ BindStatusCallback ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *,void**) ;
 int FUNC_4 (int *) ;
 int VAR_0 ;
 int * FUNC_5 (int *) ;

IBindStatusCallback *FUNC_6(IBindCtx *VAR_1)
{
    BindStatusCallback *VAR_2;
    IBindStatusCallback *VAR_3;
    HRESULT VAR_4;

    VAR_3 = FUNC_5(VAR_1);
    if(!VAR_3)
        return ((void*)0);

    VAR_4 = FUNC_3(VAR_3, &VAR_0, (void**)&VAR_2);
    if(FUNC_0(VAR_4))
        return VAR_3;

    if(VAR_2->callback) {
        FUNC_4(VAR_3);
        VAR_3 = VAR_2->callback;
        FUNC_2(VAR_3);
    }

    FUNC_1(&VAR_2->IBindStatusCallbackEx_iface);
    return VAR_3;
}
