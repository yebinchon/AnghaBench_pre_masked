
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * lpVtbl; } ;
typedef int IUnknown ;
typedef TYPE_1__ IBinding ;
typedef int IBindCtx ;
typedef int HRESULT ;
typedef int Binding ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,int **) ;
 int VAR_1 ;
 int FUNC_2 (int *,int *,void**) ;
 int FUNC_3 (int *) ;
 int VAR_2 ;
 int * FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static Binding *FUNC_5(IBindCtx *VAR_3)
{
    IBinding *VAR_4;
    IUnknown *VAR_5;
    HRESULT VAR_6;

    VAR_6 = FUNC_1(VAR_3, VAR_2, &VAR_5);
    if(FUNC_0(VAR_6))
        return ((void*)0);

    VAR_6 = FUNC_2(VAR_5, &VAR_1, (void**)&VAR_4);
    FUNC_3(VAR_5);
    if(FUNC_0(VAR_6))
        return ((void*)0);

    if (VAR_4->lpVtbl != &VAR_0)
        return ((void*)0);
    return FUNC_4(VAR_4);
}
