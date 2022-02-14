
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int counter; int mod; int * A; int * m_ctx; int * Ai; } ;
typedef int BN_CTX ;
typedef TYPE_1__ BN_BLINDING ;
typedef int BIGNUM ;


 int FUNC_0 (TYPE_1__*,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *,int *,int ,int *) ;
 int FUNC_3 (int *,int *,int *,int *,int *) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int *) ;

int FUNC_6(BIGNUM *VAR_2, BIGNUM *VAR_3, BN_BLINDING *VAR_4, BN_CTX *VAR_5)
{
    int VAR_6 = 1;

    FUNC_5(VAR_2);

    if ((VAR_4->A == ((void*)0)) || (VAR_4->Ai == ((void*)0))) {
        FUNC_4(VAR_0, VAR_1);
        return 0;
    }

    if (VAR_4->counter == -1)

        VAR_4->counter = 0;
    else if (!FUNC_0(VAR_4, VAR_5))
        return 0;

    if (VAR_3 != ((void*)0) && (FUNC_1(VAR_3, VAR_4->Ai) == ((void*)0)))
        return 0;

    if (VAR_4->m_ctx != ((void*)0))
        VAR_6 = FUNC_3(VAR_2, VAR_2, VAR_4->A, VAR_4->m_ctx, VAR_5);
    else
        VAR_6 = FUNC_2(VAR_2, VAR_2, VAR_4->A, VAR_4->mod, VAR_5);

    return VAR_6;
}
