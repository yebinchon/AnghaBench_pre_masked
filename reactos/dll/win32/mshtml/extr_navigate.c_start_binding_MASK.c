
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * window; int mon; int IBindStatusCallback_iface; } ;
typedef int IStream ;
typedef int IBindCtx ;
typedef int HTMLInnerWindow ;
typedef int HRESULT ;
typedef TYPE_1__ BSCallback ;


 int FUNC_0 (int ,int *,int *,int **) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_0 ;
 int FUNC_4 (int ,int *,int *,int *,void**) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int *,int *,int ) ;
 scalar_t__ FUNC_7 (int ) ;
 int VAR_1 ;
 int FUNC_8 (char*,int *,TYPE_1__*,int *) ;
 int FUNC_9 (char*,int ) ;

HRESULT FUNC_10(HTMLInnerWindow *VAR_2, BSCallback *VAR_3, IBindCtx *VAR_4)
{
    IStream *VAR_5 = ((void*)0);
    HRESULT VAR_6;

    FUNC_8("(%p %p %p)\n", VAR_2, VAR_3, VAR_4);

    VAR_3->window = VAR_2;



    if(VAR_4) {
        VAR_6 = FUNC_6(VAR_4, &VAR_3->IBindStatusCallback_iface, ((void*)0), 0);
        if(FUNC_7(VAR_6))
            FUNC_2(VAR_4);
    }else {
        VAR_6 = FUNC_0(0, &VAR_3->IBindStatusCallback_iface, ((void*)0), &VAR_4);
    }

    if(FUNC_1(VAR_6)) {
        VAR_3->window = ((void*)0);
        return VAR_6;
    }

    VAR_6 = FUNC_4(VAR_3->mon, VAR_4, ((void*)0), &VAR_0, (void**)&VAR_5);
    FUNC_3(VAR_4);
    if(FUNC_1(VAR_6)) {
        FUNC_9("BindToStorage failed: %08x\n", VAR_6);
        VAR_3->window = ((void*)0);
        return VAR_6;
    }

    if(VAR_5)
        FUNC_5(VAR_5);

    return VAR_1;
}
