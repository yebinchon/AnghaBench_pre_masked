
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {TYPE_2__* ameth; } ;
struct TYPE_10__ {TYPE_1__* pmeth; TYPE_4__* pkey; } ;
struct TYPE_9__ {int (* pkey_check ) (TYPE_4__*) ;} ;
struct TYPE_8__ {int (* check ) (TYPE_4__*) ;} ;
typedef TYPE_3__ EVP_PKEY_CTX ;
typedef TYPE_4__ EVP_PKEY ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_4__*) ;

int FUNC_3(EVP_PKEY_CTX *VAR_3)
{
    EVP_PKEY *VAR_4 = VAR_3->pkey;

    if (VAR_4 == ((void*)0)) {
        FUNC_0(VAR_0, VAR_1);
        return 0;
    }


    if (VAR_3->pmeth->check != ((void*)0))
        return VAR_3->pmeth->check(VAR_4);


    if (VAR_4->ameth == ((void*)0) || VAR_4->ameth->pkey_check == ((void*)0)) {
        FUNC_0(VAR_0,
               VAR_2);
        return -2;
    }

    return VAR_4->ameth->pkey_check(VAR_4);
}
