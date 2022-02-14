
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SN_env {scalar_t__ bra; scalar_t__ ket; scalar_t__ l; int * p; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct SN_env*,int,int ) ;
 int FUNC_2 (int ,char*) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_3(struct SN_env * VAR_1) {

    if (VAR_1->bra < 0 ||
        VAR_1->bra > VAR_1->ket ||
        VAR_1->ket > VAR_1->l ||
        VAR_1->p == ((void*)0) ||
        VAR_1->l > FUNC_0(VAR_1->p))
    {




        return -1;
    }
    return 0;
}
