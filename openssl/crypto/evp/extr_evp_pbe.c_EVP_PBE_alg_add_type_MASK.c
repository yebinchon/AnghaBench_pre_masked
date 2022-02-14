
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int pbe_type; int pbe_nid; int cipher_nid; int md_nid; int * keygen; } ;
typedef int EVP_PBE_KEYGEN ;
typedef TYPE_1__ EVP_PBE_CTL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_1__* FUNC_2 (int) ;
 int * VAR_2 ;
 int VAR_3 ;
 int * FUNC_3 (int ) ;
 int FUNC_4 (int *,TYPE_1__*) ;

int FUNC_5(int VAR_4, int VAR_5, int VAR_6,
                         int VAR_7, EVP_PBE_KEYGEN *VAR_8)
{
    EVP_PBE_CTL *VAR_9;

    if (VAR_2 == ((void*)0)) {
        VAR_2 = FUNC_3(VAR_3);
        if (VAR_2 == ((void*)0))
            goto err;
    }

    if ((VAR_9 = FUNC_2(sizeof(*VAR_9))) == ((void*)0))
        goto err;

    VAR_9->pbe_type = VAR_4;
    VAR_9->pbe_nid = VAR_5;
    VAR_9->cipher_nid = VAR_6;
    VAR_9->md_nid = VAR_7;
    VAR_9->keygen = VAR_8;

    if (!FUNC_4(VAR_2, VAR_9)) {
        FUNC_1(VAR_9);
        goto err;
    }
    return 1;

 err:
    FUNC_0(VAR_1, VAR_0);
    return 0;
}
