
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * serv_prov; int * callback; } ;
typedef int IServiceProvider ;
typedef int IBindStatusCallback ;
typedef scalar_t__ HRESULT ;
typedef TYPE_1__ BindStatusCallback ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,int *,void**) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int FUNC_3 (int *) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void FUNC_4(BindStatusCallback *VAR_2, IBindStatusCallback *VAR_3)
{
    IServiceProvider *VAR_4;
    HRESULT VAR_5;

    if(VAR_2->callback)
        FUNC_2(VAR_2->callback);
    if(VAR_2->serv_prov)
        FUNC_3(VAR_2->serv_prov);

    FUNC_0(VAR_3);
    VAR_2->callback = VAR_3;

    VAR_5 = FUNC_1(VAR_3, &VAR_0, (void**)&VAR_4);
    VAR_2->serv_prov = VAR_5 == VAR_1 ? VAR_4 : ((void*)0);
}
