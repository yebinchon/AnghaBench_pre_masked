
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int counter; int flags; int mod; int * A; int * Ai; int * m_ctx; int * e; } ;
typedef int BN_CTX ;
typedef TYPE_1__ BN_BLINDING ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,int *,int *,int *,int *,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *,int *,int *,int ,int *) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int *,int *,int *,int *,int *) ;

int FUNC_4(BN_BLINDING *VAR_5, BN_CTX *VAR_6)
{
    int VAR_7 = 0;

    if ((VAR_5->A == ((void*)0)) || (VAR_5->Ai == ((void*)0))) {
        FUNC_2(VAR_3, VAR_4);
        goto err;
    }

    if (VAR_5->counter == -1)
        VAR_5->counter = 0;

    if (++VAR_5->counter == VAR_0 && VAR_5->e != ((void*)0) &&
        !(VAR_5->flags & VAR_1)) {

        if (!FUNC_0(VAR_5, ((void*)0), ((void*)0), VAR_6, ((void*)0), ((void*)0)))
            goto err;
    } else if (!(VAR_5->flags & VAR_2)) {
        if (VAR_5->m_ctx != ((void*)0)) {
            if (!FUNC_3(VAR_5->Ai, VAR_5->Ai, VAR_5->Ai, VAR_5->m_ctx, VAR_6)
                || !FUNC_3(VAR_5->A, VAR_5->A, VAR_5->A, VAR_5->m_ctx, VAR_6))
                goto err;
        } else {
            if (!FUNC_1(VAR_5->Ai, VAR_5->Ai, VAR_5->Ai, VAR_5->mod, VAR_6)
                || !FUNC_1(VAR_5->A, VAR_5->A, VAR_5->A, VAR_5->mod, VAR_6))
                goto err;
        }
    }

    VAR_7 = 1;
 err:
    if (VAR_5->counter == VAR_0)
        VAR_5->counter = 0;
    return VAR_7;
}
