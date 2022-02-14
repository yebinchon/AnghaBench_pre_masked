
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int e; int N; int type; int q; int p; int qP; int dP; int dQ; int d; } ;
struct TYPE_5__ {TYPE_1__ rsa; } ;
typedef TYPE_2__ KEY_CONTEXT ;
typedef int DWORD ;
typedef int BYTE ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 () ;
 int * FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ,int *) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int ) ;
 int VAR_4 ;
 int FUNC_4 (int *,int const*,int ) ;
 scalar_t__ FUNC_5 (int *,int *,int *,int *,int *,int *,int *,int *,int *) ;
 int FUNC_6 (int *,int *,int ) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *,int ) ;

BOOL FUNC_9(const BYTE *VAR_5, KEY_CONTEXT *VAR_6, DWORD VAR_7,
                            DWORD VAR_8)
{
    BYTE *VAR_9;

    if (FUNC_5(&VAR_6->rsa.e, &VAR_6->rsa.d, &VAR_6->rsa.N,
                      &VAR_6->rsa.dQ,&VAR_6->rsa.dP,&VAR_6->rsa.qP,
                      &VAR_6->rsa.p, &VAR_6->rsa.q, ((void*)0)) != VAR_1)
    {
        FUNC_3(VAR_2);
        return VAR_0;
    }

    VAR_9 = FUNC_1(FUNC_0(), 0, VAR_7);
    if (!VAR_9) return VAR_0;
    FUNC_4(VAR_9, VAR_5, VAR_7);

    VAR_6->rsa.type = VAR_3;
    FUNC_8(VAR_9, VAR_7);
    FUNC_6(&VAR_6->rsa.N, VAR_9, VAR_7);
    FUNC_2(FUNC_0(), 0, VAR_9);
    FUNC_7(&VAR_6->rsa.e, VAR_8);

    return VAR_4;
}
