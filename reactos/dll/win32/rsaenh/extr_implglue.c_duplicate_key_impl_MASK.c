
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int dQ; int dP; int qP; int q; int p; int N; int d; int e; int type; } ;
struct TYPE_6__ {TYPE_1__ rsa; } ;
typedef TYPE_2__ KEY_CONTEXT ;
typedef int BOOL ;
typedef int ALG_ID ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int *,int *) ;

BOOL FUNC_2(ALG_ID VAR_3, const KEY_CONTEXT *VAR_4,
                        KEY_CONTEXT *VAR_5)
{
    switch (VAR_3)
    {
        case 130:
        case 131:
        case 138:
        case 137:
        case 132:
        case 136:
        case 135:
        case 134:
        case 133:
            *VAR_5 = *VAR_4;
            break;
        case 129:
        case 128:
            VAR_5->rsa.type = VAR_4->rsa.type;
            FUNC_1(&VAR_5->rsa.e, &VAR_4->rsa.e);
            FUNC_1(&VAR_5->rsa.d, &VAR_4->rsa.d);
            FUNC_1(&VAR_5->rsa.N, &VAR_4->rsa.N);
            FUNC_1(&VAR_5->rsa.p, &VAR_4->rsa.p);
            FUNC_1(&VAR_5->rsa.q, &VAR_4->rsa.q);
            FUNC_1(&VAR_5->rsa.qP, &VAR_4->rsa.qP);
            FUNC_1(&VAR_5->rsa.dP, &VAR_4->rsa.dP);
            FUNC_1(&VAR_5->rsa.dQ, &VAR_4->rsa.dQ);
            break;

        default:
            FUNC_0(VAR_1);
            return VAR_0;
    }

    return VAR_2;
}
