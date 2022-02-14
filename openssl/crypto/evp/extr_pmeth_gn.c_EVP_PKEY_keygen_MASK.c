
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ operation; TYPE_1__* pmeth; } ;
struct TYPE_5__ {int (* keygen ) (TYPE_2__*,int *) ;} ;
typedef TYPE_2__ EVP_PKEY_CTX ;
typedef int EVP_PKEY ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (TYPE_2__*,int *) ;

int FUNC_4(EVP_PKEY_CTX *VAR_4, EVP_PKEY **VAR_5)
{
    int VAR_6;

    if (!VAR_4 || !VAR_4->pmeth || !VAR_4->pmeth->keygen) {
        FUNC_2(VAR_0,
               VAR_2);
        return -2;
    }
    if (VAR_4->operation != VAR_1) {
        FUNC_2(VAR_0, VAR_3);
        return -1;
    }

    if (VAR_5 == ((void*)0))
        return -1;

    if (*VAR_5 == ((void*)0))
        *VAR_5 = FUNC_1();
    if (*VAR_5 == ((void*)0))
        return -1;

    VAR_6 = VAR_4->pmeth->keygen(VAR_4, *VAR_5);
    if (VAR_6 <= 0) {
        FUNC_0(*VAR_5);
        *VAR_5 = ((void*)0);
    }
    return VAR_6;
}
