
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned long flags; } ;
typedef int OSSL_PARAM ;
typedef TYPE_1__ EVP_MD ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,unsigned long*) ;
 int FUNC_1 (TYPE_1__ const*,int *) ;

unsigned long FUNC_2(const EVP_MD *VAR_2)
{
    int VAR_3;
    unsigned long VAR_4 = VAR_2->flags;
    OSSL_PARAM VAR_5[2] = { VAR_1, VAR_1 };

    VAR_5[0] = FUNC_0(VAR_0, &VAR_4);
    VAR_3 = FUNC_1(VAR_2, VAR_5);

    return VAR_3 != 0 ? VAR_4 : 0;
}
