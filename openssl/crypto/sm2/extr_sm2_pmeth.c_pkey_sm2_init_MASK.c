
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * data; } ;
typedef int SM2_PKEY_CTX ;
typedef TYPE_1__ EVP_PKEY_CTX ;


 int VAR_0 ;
 int * FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static int FUNC_2(EVP_PKEY_CTX *VAR_2)
{
    SM2_PKEY_CTX *VAR_3;

    if ((VAR_3 = FUNC_0(sizeof(*VAR_3))) == ((void*)0)) {
        FUNC_1(VAR_1, VAR_0);
        return 0;
    }

    VAR_2->data = VAR_3;
    return 1;
}
