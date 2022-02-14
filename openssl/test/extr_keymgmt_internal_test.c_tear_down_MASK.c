
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int ctx2; int ctx1; int prov2; int prov1; } ;
typedef TYPE_1__ FIXTURE ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(FIXTURE *VAR_0)
{
    if (VAR_0 != ((void*)0)) {
        FUNC_2(VAR_0->prov1);
        FUNC_2(VAR_0->prov2);
        FUNC_0(VAR_0->ctx1);
        FUNC_0(VAR_0->ctx2);
        FUNC_1(VAR_0);
    }
}
