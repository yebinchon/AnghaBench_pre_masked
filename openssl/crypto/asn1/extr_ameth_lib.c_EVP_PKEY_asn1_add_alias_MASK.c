
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int pkey_base_id; } ;
typedef TYPE_1__ EVP_PKEY_ASN1_METHOD ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_1__* FUNC_2 (int,int ,int *,int *) ;

int FUNC_3(int VAR_1, int VAR_2)
{
    EVP_PKEY_ASN1_METHOD *VAR_3;
    VAR_3 = FUNC_2(VAR_2, VAR_0, ((void*)0), ((void*)0));
    if (VAR_3 == ((void*)0))
        return 0;
    VAR_3->pkey_base_id = VAR_1;
    if (!FUNC_0(VAR_3)) {
        FUNC_1(VAR_3);
        return 0;
    }
    return 1;
}
