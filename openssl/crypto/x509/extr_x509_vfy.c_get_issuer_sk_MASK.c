
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int other_ctx; } ;
typedef TYPE_1__ X509_STORE_CTX ;
typedef int X509 ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (TYPE_1__*,int ,int *) ;

__attribute__((used)) static int FUNC_2(X509 **VAR_0, X509_STORE_CTX *VAR_1, X509 *VAR_2)
{
    *VAR_0 = FUNC_1(VAR_1, VAR_1->other_ctx, VAR_2);
    if (*VAR_0) {
        FUNC_0(*VAR_0);
        return 1;
    } else
        return 0;
}
