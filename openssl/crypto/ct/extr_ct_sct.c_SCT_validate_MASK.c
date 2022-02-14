
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int X509_PUBKEY ;
struct TYPE_8__ {int cert; int epoch_time_in_ms; int * issuer; int log_store; } ;
struct TYPE_7__ {scalar_t__ version; scalar_t__ validation_status; int log_id_len; int log_id; } ;
typedef int SCT_CTX ;
typedef TYPE_1__ SCT ;
typedef int EVP_PKEY ;
typedef TYPE_2__ CT_POLICY_EVAL_CTX ;
typedef int CTLOG ;


 int * FUNC_0 (int ,int ,int ) ;
 int * FUNC_1 (int const*) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int *) ;
 int * FUNC_3 () ;
 int FUNC_4 (int *,int ,int *) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *,TYPE_1__*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 void* VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int **,int *) ;
 int * FUNC_12 (int *) ;

int FUNC_13(SCT *VAR_7, const CT_POLICY_EVAL_CTX *VAR_8)
{
    int VAR_9 = -1;
    SCT_CTX *VAR_10 = ((void*)0);
    X509_PUBKEY *VAR_11 = ((void*)0), *VAR_12 = ((void*)0);
    const CTLOG *VAR_13;





    if (VAR_7->version != VAR_6) {
        VAR_7->validation_status = VAR_3;
        return 0;
    }

    VAR_13 = FUNC_0(VAR_8->log_store,
                                     VAR_7->log_id, VAR_7->log_id_len);


    if (VAR_13 == ((void*)0)) {
        VAR_7->validation_status = VAR_2;
        return 0;
    }

    VAR_10 = FUNC_3();
    if (VAR_10 == ((void*)0))
        goto err;

    if (FUNC_11(&VAR_12, FUNC_1(VAR_13)) != 1)
        goto err;
    if (FUNC_6(VAR_10, VAR_12) != 1)
        goto err;

    if (FUNC_9(VAR_7) == VAR_0) {
        EVP_PKEY *VAR_14;

        if (VAR_8->issuer == ((void*)0)) {
            VAR_7->validation_status = VAR_4;
            goto end;
        }

        VAR_14 = FUNC_12(VAR_8->issuer);

        if (FUNC_11(&VAR_11, VAR_14) != 1)
            goto err;
        if (FUNC_5(VAR_10, VAR_11) != 1)
            goto err;
    }

    FUNC_7(VAR_10, VAR_8->epoch_time_in_ms);
    if (FUNC_4(VAR_10, VAR_8->cert, ((void*)0)) != 1)
        VAR_7->validation_status = VAR_4;
    else
        VAR_7->validation_status = FUNC_8(VAR_10, VAR_7) == 1 ?
            VAR_5 : VAR_1;

end:
    VAR_9 = VAR_7->validation_status == VAR_5;
err:
    FUNC_10(VAR_11);
    FUNC_10(VAR_12);
    FUNC_2(VAR_10);

    return VAR_9;
}
