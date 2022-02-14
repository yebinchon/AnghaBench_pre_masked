
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int * lpVtbl; } ;
struct TYPE_6__ {int ref; TYPE_4__ IBindStatusCallback_iface; int hres; int * memstream; int * binding; int (* onDataAvailable ) (void*,char*,VAR_0) ;void* obj; } ;
typedef TYPE_1__ bsc_t ;
typedef int LPVOID ;
typedef int IStream ;
typedef int IMoniker ;
typedef int IBindCtx ;
typedef int HRESULT ;


 int FUNC_0 (int ,int **) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_4__*) ;
 int VAR_1 ;
 int FUNC_4 (int *,int *,int *,int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,TYPE_4__*,int *,int ) ;
 scalar_t__ FUNC_7 (int ) ;
 int VAR_2 ;
 int FUNC_8 (char*,int *) ;
 int VAR_3 ;
 TYPE_1__* FUNC_9 (int) ;

HRESULT FUNC_10(IMoniker *VAR_4, HRESULT (*VAR_5)(void*,char*,VAR_6),
        void *VAR_7, bsc_t **VAR_8)
{
    bsc_t *VAR_9;
    IBindCtx *VAR_10;
    HRESULT VAR_11;

    FUNC_8("%p\n", VAR_4);

    VAR_11 = FUNC_0(0, &VAR_10);
    if(FUNC_1(VAR_11))
        return VAR_11;

    VAR_9 = FUNC_9(sizeof(bsc_t));

    VAR_9->IBindStatusCallback_iface.lpVtbl = &VAR_3;
    VAR_9->ref = 1;
    VAR_9->obj = VAR_7;
    VAR_9->onDataAvailable = VAR_5;
    VAR_9->binding = ((void*)0);
    VAR_9->memstream = ((void*)0);
    VAR_9->hres = VAR_2;

    VAR_11 = FUNC_6(VAR_10, &VAR_9->IBindStatusCallback_iface, ((void*)0), 0);
    if(FUNC_7(VAR_11))
    {
        IStream *VAR_12;
        VAR_11 = FUNC_4(VAR_4, VAR_10, ((void*)0), &VAR_1, (LPVOID*)&VAR_12);
        if(VAR_12)
            FUNC_5(VAR_12);
        FUNC_2(VAR_10);
    }

    if(FUNC_1(VAR_11))
    {
        FUNC_3(&VAR_9->IBindStatusCallback_iface);
        VAR_9 = ((void*)0);
    }

    *VAR_8 = VAR_9;
    return VAR_11;
}
