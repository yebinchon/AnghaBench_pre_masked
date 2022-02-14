
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int sig_alg; int hash_alg; } ;
typedef TYPE_1__ SCT ;
typedef int BIO ;


 int FUNC_0 (int *,char*,int ,...) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__ const*) ;

__attribute__((used)) static void FUNC_3(const SCT *VAR_1, BIO *VAR_2)
{
    int VAR_3 = FUNC_2(VAR_1);

    if (VAR_3 == VAR_0)
        FUNC_0(VAR_2, "%02X%02X", VAR_1->hash_alg, VAR_1->sig_alg);
    else
        FUNC_0(VAR_2, "%s", FUNC_1(VAR_3));
}
