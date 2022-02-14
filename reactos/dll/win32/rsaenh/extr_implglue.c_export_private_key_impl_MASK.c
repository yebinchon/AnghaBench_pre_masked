
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int e; int d; int qP; int dQ; int dP; int q; int p; int N; } ;
struct TYPE_5__ {TYPE_1__ rsa; } ;
typedef TYPE_2__ KEY_CONTEXT ;
typedef int DWORD ;
typedef int BYTE ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int) ;

BOOL FUNC_5(BYTE *VAR_1, const KEY_CONTEXT *VAR_2, DWORD VAR_3,
                             DWORD *VAR_4)
{
    FUNC_2(&VAR_2->rsa.N, VAR_1);
    FUNC_4(VAR_1, FUNC_3(&VAR_2->rsa.N));
    if (FUNC_3(&VAR_2->rsa.N) < VAR_3)
        FUNC_0(VAR_1 + FUNC_3(&VAR_2->rsa.N), 0,
               VAR_3 - FUNC_3(&VAR_2->rsa.N));
    VAR_1 += VAR_3;
    FUNC_2(&VAR_2->rsa.p, VAR_1);
    FUNC_4(VAR_1, FUNC_3(&VAR_2->rsa.p));
    if (FUNC_3(&VAR_2->rsa.p) < (VAR_3+1)>>1)
        FUNC_0(VAR_1 + FUNC_3(&VAR_2->rsa.p), 0,
               ((VAR_3+1)>>1) - FUNC_3(&VAR_2->rsa.p));
    VAR_1 += (VAR_3+1)>>1;
    FUNC_2(&VAR_2->rsa.q, VAR_1);
    FUNC_4(VAR_1, FUNC_3(&VAR_2->rsa.q));
    if (FUNC_3(&VAR_2->rsa.q) < (VAR_3+1)>>1)
        FUNC_0(VAR_1 + FUNC_3(&VAR_2->rsa.q), 0,
               ((VAR_3+1)>>1) - FUNC_3(&VAR_2->rsa.q));
    VAR_1 += (VAR_3+1)>>1;
    FUNC_2(&VAR_2->rsa.dP, VAR_1);
    FUNC_4(VAR_1, FUNC_3(&VAR_2->rsa.dP));
    if (FUNC_3(&VAR_2->rsa.dP) < (VAR_3+1)>>1)
        FUNC_0(VAR_1 + FUNC_3(&VAR_2->rsa.dP), 0,
               ((VAR_3+1)>>1) - FUNC_3(&VAR_2->rsa.dP));
    VAR_1 += (VAR_3+1)>>1;
    FUNC_2(&VAR_2->rsa.dQ, VAR_1);
    FUNC_4(VAR_1, FUNC_3(&VAR_2->rsa.dQ));
    if (FUNC_3(&VAR_2->rsa.dQ) < (VAR_3+1)>>1)
        FUNC_0(VAR_1 + FUNC_3(&VAR_2->rsa.dQ), 0,
               ((VAR_3+1)>>1) - FUNC_3(&VAR_2->rsa.dQ));
    VAR_1 += (VAR_3+1)>>1;
    FUNC_2(&VAR_2->rsa.qP, VAR_1);
    FUNC_4(VAR_1, FUNC_3(&VAR_2->rsa.qP));
    if (FUNC_3(&VAR_2->rsa.qP) < (VAR_3+1)>>1)
        FUNC_0(VAR_1 + FUNC_3(&VAR_2->rsa.qP), 0,
               ((VAR_3+1)>>1) - FUNC_3(&VAR_2->rsa.qP));
    VAR_1 += (VAR_3+1)>>1;
    FUNC_2(&VAR_2->rsa.d, VAR_1);
    FUNC_4(VAR_1, FUNC_3(&VAR_2->rsa.d));
    if (FUNC_3(&VAR_2->rsa.d) < VAR_3)
        FUNC_0(VAR_1 + FUNC_3(&VAR_2->rsa.d), 0,
               VAR_3 - FUNC_3(&VAR_2->rsa.d));
    *VAR_4 = (DWORD)FUNC_1(&VAR_2->rsa.e);

    return VAR_0;
}
