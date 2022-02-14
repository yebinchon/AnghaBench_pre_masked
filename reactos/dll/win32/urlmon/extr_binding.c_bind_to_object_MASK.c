
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ hres; int bindf; int IBinding_iface; void* obj; } ;
typedef int REFIID ;
typedef int IUri ;
typedef int IMoniker ;
typedef int IBindCtx ;
typedef scalar_t__ HRESULT ;
typedef TYPE_1__ Binding ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (void*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_4 (int *,int *,int *,int *,int ,int ,TYPE_1__**) ;

HRESULT FUNC_5(IMoniker *VAR_4, IUri *VAR_5, IBindCtx *VAR_6, REFIID VAR_7, void **VAR_8)
{
    Binding *VAR_9;
    HRESULT VAR_10;

    *VAR_8 = ((void*)0);

    VAR_10 = FUNC_4(VAR_4, ((void*)0), VAR_5, VAR_6, VAR_3, VAR_7, &VAR_9);
    if(FUNC_0(VAR_10))
        return VAR_10;

    if(VAR_9->hres != VAR_2) {
        VAR_10 = FUNC_3(VAR_9->hres) ? VAR_2 : VAR_9->hres;
    }else if(VAR_9->bindf & VAR_0) {
        VAR_10 = VAR_1;
    }else {
        *VAR_8 = VAR_9->obj;
        FUNC_2(VAR_9->obj);
        VAR_10 = VAR_2;
    }

    FUNC_1(&VAR_9->IBinding_iface);

    return VAR_10;
}
