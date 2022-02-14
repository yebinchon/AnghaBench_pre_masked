
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int lock; int prov; int refcnt; } ;
typedef TYPE_1__ EVP_KDF ;


 int FUNC_0 (int *,int*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(void *VAR_0){
    EVP_KDF *VAR_1 = (EVP_KDF *)VAR_0;
    int VAR_2 = 0;

    if (VAR_1 != ((void*)0)) {
        FUNC_0(&VAR_1->refcnt, &VAR_2, VAR_1->lock);
        if (VAR_2 <= 0) {
            FUNC_3(VAR_1->prov);
            FUNC_1(VAR_1->lock);
            FUNC_2(VAR_1);
        }
    }
}
