
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int stop_cache_binding_proc_t ;
struct TYPE_3__ {int IBindStatusCallback_iface; int bindf; void* ctx; int onstop_proc; } ;
typedef int IUri ;
typedef int IUnknown ;
typedef int IMoniker ;
typedef int IBindStatusCallback ;
typedef int IBindCtx ;
typedef int HRESULT ;
typedef TYPE_1__ DownloadBSC ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,int *,int **) ;
 int FUNC_1 (int *,int *,int **,int ) ;
 int FUNC_2 (int *,int *,TYPE_1__**) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int VAR_1 ;
 int FUNC_6 (int *,int *,int *,int *,void**) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int ) ;

HRESULT FUNC_10(IUri *VAR_2, stop_cache_binding_proc_t VAR_3, void *VAR_4, IBindStatusCallback *VAR_5)
{
    DownloadBSC *VAR_6;
    IBindCtx *VAR_7;
    IMoniker *VAR_8;
    IUnknown *VAR_9;
    HRESULT VAR_10;

    VAR_10 = FUNC_2(VAR_5, ((void*)0), &VAR_6);
    if(FUNC_3(VAR_10))
        return VAR_10;

    VAR_6->onstop_proc = VAR_3;
    VAR_6->ctx = VAR_4;
    VAR_6->bindf = VAR_0;

    VAR_10 = FUNC_0(0, &VAR_6->IBindStatusCallback_iface, ((void*)0), &VAR_7);
    FUNC_5(&VAR_6->IBindStatusCallback_iface);
    if(FUNC_3(VAR_10))
        return VAR_10;

    VAR_10 = FUNC_1(((void*)0), VAR_2, &VAR_8, 0);
    if(FUNC_3(VAR_10)) {
        FUNC_4(VAR_7);
        return VAR_10;
    }

    VAR_10 = FUNC_6(VAR_8, VAR_7, ((void*)0), &VAR_1, (void**)&VAR_9);
    FUNC_7(VAR_8);
    FUNC_4(VAR_7);
    if(FUNC_9(VAR_10) && VAR_9)
        FUNC_8(VAR_9);
    return VAR_10;

}
