
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * secmgr; int site; } ;
typedef TYPE_1__ script_ctx_t ;
typedef int IServiceProvider ;
typedef int IInternetHostSecurityManager ;
typedef int HRESULT ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int *,void**) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *,int *,int *,void**) ;
 int FUNC_3 (int *) ;
 int VAR_2 ;

__attribute__((used)) static IInternetHostSecurityManager *FUNC_4(script_ctx_t *VAR_3)
{
    IInternetHostSecurityManager *VAR_4;
    IServiceProvider *VAR_5;
    HRESULT VAR_6;

    if(!VAR_3->site)
        return ((void*)0);

    if(VAR_3->secmgr)
        return VAR_3->secmgr;

    VAR_6 = FUNC_1(VAR_3->site, &VAR_1, (void**)&VAR_5);
    if(FUNC_0(VAR_6))
        return ((void*)0);

    VAR_6 = FUNC_2(VAR_5, &VAR_2, &VAR_0,
            (void**)&VAR_4);
    FUNC_3(VAR_5);
    if(FUNC_0(VAR_6))
        return ((void*)0);

    return VAR_3->secmgr = VAR_4;
}
