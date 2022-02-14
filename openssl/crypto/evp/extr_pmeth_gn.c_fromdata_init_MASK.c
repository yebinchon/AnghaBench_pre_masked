
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int operation; int * keymgmt; int propquery; int * algorithm; } ;
typedef TYPE_1__ EVP_PKEY_CTX ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int * FUNC_1 (int *,int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_3(EVP_PKEY_CTX *VAR_3, int VAR_4)
{
    if (VAR_3 == ((void*)0) || VAR_3->algorithm == ((void*)0))
        goto not_supported;

    FUNC_2(VAR_3);
    VAR_3->operation = VAR_4;
    if (VAR_3->keymgmt == ((void*)0))
        VAR_3->keymgmt = FUNC_1(((void*)0), VAR_3->algorithm, VAR_3->propquery);
    if (VAR_3->keymgmt == ((void*)0))
        goto not_supported;

    return 1;

 not_supported:
    VAR_3->operation = VAR_1;
    FUNC_0(VAR_0, VAR_2);
    return -2;
}
