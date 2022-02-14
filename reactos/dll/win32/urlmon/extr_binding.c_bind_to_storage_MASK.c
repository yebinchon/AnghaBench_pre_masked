
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {TYPE_2__* vtbl; } ;
struct TYPE_10__ {scalar_t__ hres; scalar_t__ download_state; int state; int bindf; int IBinding_iface; TYPE_4__* stgmed_obj; TYPE_1__* protocol; } ;
struct TYPE_9__ {scalar_t__ (* get_result ) (TYPE_4__*,int,void**) ;} ;
struct TYPE_8__ {int IInternetProtocolEx_iface; } ;
typedef int REFIID ;
typedef int IUri ;
typedef int IBindCtx ;
typedef scalar_t__ HRESULT ;
typedef TYPE_3__ Binding ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_4 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 TYPE_3__* FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,TYPE_3__*,int *,int *,int ,int ,TYPE_3__**) ;
 scalar_t__ FUNC_5 (TYPE_4__*,int,void**) ;

HRESULT FUNC_6(IUri *VAR_7, IBindCtx *VAR_8, REFIID VAR_9, void **VAR_10)
{
    Binding *VAR_11 = ((void*)0), *VAR_12;
    HRESULT VAR_13;

    VAR_12 = FUNC_3(VAR_8);

    VAR_13 = FUNC_4(((void*)0), VAR_12, VAR_7, VAR_8, VAR_4, VAR_9, &VAR_11);
    if(VAR_12)
        FUNC_1(&VAR_12->IBinding_iface);
    if(FUNC_0(VAR_13))
        return VAR_13;

    if(VAR_11->hres == VAR_6 && VAR_11->download_state != VAR_0 ) {
        if((VAR_11->state & VAR_3) && (VAR_11->state & VAR_2))
            FUNC_2(&VAR_11->protocol->IInternetProtocolEx_iface);

        VAR_13 = VAR_11->stgmed_obj->vtbl->get_result(VAR_11->stgmed_obj, VAR_11->bindf, VAR_10);
    }else if(VAR_11->bindf & VAR_1) {
        VAR_13 = VAR_5;
    }else {
        VAR_13 = FUNC_0(VAR_11->hres) ? VAR_11->hres : VAR_6;
    }

    FUNC_1(&VAR_11->IBinding_iface);

    return VAR_13;
}
