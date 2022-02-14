
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int ntop ;
typedef int i ;
struct TYPE_14__ {size_t dmax; size_t top; size_t* d; size_t flags; } ;
struct TYPE_13__ {int mod; int * m_ctx; TYPE_2__* Ai; } ;
typedef size_t BN_ULONG ;
typedef int BN_CTX ;
typedef TYPE_1__ BN_BLINDING ;
typedef TYPE_2__ BIGNUM ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*,TYPE_2__*,TYPE_2__ const*,int ,int *) ;
 int FUNC_1 (TYPE_2__*,TYPE_2__*,TYPE_2__ const*,int *,int *) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (TYPE_2__*) ;

int FUNC_4(BIGNUM *VAR_3, const BIGNUM *VAR_4, BN_BLINDING *VAR_5,
                          BN_CTX *VAR_6)
{
    int VAR_7;

    FUNC_3(VAR_3);

    if (VAR_4 == ((void*)0) && (VAR_4 = VAR_5->Ai) == ((void*)0)) {
        FUNC_2(VAR_1, VAR_2);
        return 0;
    }

    if (VAR_5->m_ctx != ((void*)0)) {

        if (VAR_3->dmax >= VAR_4->top) {
            size_t VAR_8, VAR_9 = VAR_4->top, VAR_10 = VAR_3->top;
            BN_ULONG VAR_11;

            for (VAR_8 = 0; VAR_8 < VAR_9; VAR_8++) {
                VAR_11 = (BN_ULONG)0 - ((VAR_8 - VAR_10) >> (8 * sizeof(VAR_8) - 1));
                VAR_3->d[VAR_8] &= VAR_11;
            }
            VAR_11 = (BN_ULONG)0 - ((VAR_9 - VAR_10) >> (8 * sizeof(VAR_10) - 1));

            VAR_3->top = (int)(VAR_9 & ~VAR_11) | (VAR_10 & VAR_11);
            VAR_3->flags |= (VAR_0 & ~VAR_11);
        }
        VAR_7 = FUNC_1(VAR_3, VAR_3, VAR_4, VAR_5->m_ctx, VAR_6);
    } else {
        VAR_7 = FUNC_0(VAR_3, VAR_3, VAR_4, VAR_5->mod, VAR_6);
    }

    FUNC_3(VAR_3);
    return VAR_7;
}
