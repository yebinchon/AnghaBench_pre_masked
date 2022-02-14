
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int IUnknown ;
typedef int IBindStatusCallback ;
typedef int IBindCtx ;
typedef int HRESULT ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,int **) ;
 int VAR_0 ;
 int FUNC_2 (int *,int *,void**) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int ) ;
 int VAR_1 ;

__attribute__((used)) static IBindStatusCallback *FUNC_5(IBindCtx *VAR_2)
{
    IBindStatusCallback *VAR_3;
    IUnknown *VAR_4;
    HRESULT VAR_5;

    VAR_5 = FUNC_1(VAR_2, VAR_1, &VAR_4);
    if(FUNC_0(VAR_5))
        return ((void*)0);

    VAR_5 = FUNC_2(VAR_4, &VAR_0, (void**)&VAR_3);
    FUNC_3(VAR_4);
    return FUNC_4(VAR_5) ? VAR_3 : ((void*)0);
}
