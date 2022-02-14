
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int pbe_type; int pbe_nid; int cipher_nid; int md_nid; int * keygen; } ;
typedef int EVP_PBE_KEYGEN ;
typedef TYPE_1__ EVP_PBE_CTL ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (TYPE_1__*,int ,int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int * VAR_2 ;
 int FUNC_2 (int *,TYPE_1__*) ;
 TYPE_1__* FUNC_3 (int *,int) ;

int FUNC_4(int VAR_3, int VAR_4,
                 int *VAR_5, int *VAR_6, EVP_PBE_KEYGEN **VAR_7)
{
    EVP_PBE_CTL *VAR_8 = ((void*)0), VAR_9;
    int VAR_10;
    if (VAR_4 == VAR_0)
        return 0;

    VAR_9.pbe_type = VAR_3;
    VAR_9.pbe_nid = VAR_4;

    if (VAR_2 != ((void*)0)) {
        VAR_10 = FUNC_2(VAR_2, &VAR_9);
        VAR_8 = FUNC_3(VAR_2, VAR_10);
    }
    if (VAR_8 == ((void*)0)) {
        VAR_8 = FUNC_0(&VAR_9, VAR_1, FUNC_1(VAR_1));
    }
    if (VAR_8 == ((void*)0))
        return 0;
    if (VAR_5)
        *VAR_5 = VAR_8->cipher_nid;
    if (VAR_6)
        *VAR_6 = VAR_8->md_nid;
    if (VAR_7)
        *VAR_7 = VAR_8->keygen;
    return 1;
}
