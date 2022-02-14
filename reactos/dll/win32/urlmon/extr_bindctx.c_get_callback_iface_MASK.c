
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ serv_prov; int callback; } ;
typedef int REFIID ;
typedef int HRESULT ;
typedef TYPE_1__ BindStatusCallback ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,void**) ;
 int FUNC_2 (scalar_t__,int ,int ,void**) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static void *FUNC_4(BindStatusCallback *VAR_0, REFIID VAR_1)
{
    void *VAR_2;
    HRESULT VAR_3;

    VAR_3 = FUNC_1(VAR_0->callback, VAR_1, (void**)&VAR_2);
    if(FUNC_0(VAR_3) && VAR_0->serv_prov)
        VAR_3 = FUNC_2(VAR_0->serv_prov, VAR_1, VAR_1, &VAR_2);

    return FUNC_3(VAR_3) ? VAR_2 : ((void*)0);
}
