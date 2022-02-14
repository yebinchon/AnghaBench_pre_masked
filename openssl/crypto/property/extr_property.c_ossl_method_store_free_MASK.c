
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int lock; int global_properties; int algs; } ;
typedef TYPE_1__ OSSL_METHOD_STORE ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ) ;

void FUNC_5(OSSL_METHOD_STORE *VAR_1)
{
    if (VAR_1 != ((void*)0)) {
        FUNC_3(VAR_1->algs, &VAR_0);
        FUNC_4(VAR_1->algs);
        FUNC_2(VAR_1->global_properties);
        FUNC_0(VAR_1->lock);
        FUNC_1(VAR_1);
    }
}
