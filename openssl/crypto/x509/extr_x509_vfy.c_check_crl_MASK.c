
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


struct TYPE_20__ {int error_depth; int current_crl_score; TYPE_1__* param; TYPE_4__* current_issuer; int (* check_issued ) (TYPE_2__*,TYPE_4__*,TYPE_4__*) ;int chain; } ;
typedef TYPE_2__ X509_STORE_CTX ;
struct TYPE_21__ {int idp_flags; int base_crl_number; } ;
typedef TYPE_3__ X509_CRL ;
struct TYPE_22__ {int ex_flags; int ex_kusage; } ;
typedef TYPE_4__ X509 ;
struct TYPE_19__ {int flags; } ;
typedef int EVP_PKEY ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_3__*,int *,int ) ;
 scalar_t__ FUNC_1 (TYPE_3__*,int *) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int * FUNC_2 (TYPE_4__*) ;
 scalar_t__ FUNC_3 (TYPE_2__*,TYPE_4__*) ;
 int FUNC_4 (TYPE_2__*,TYPE_3__*,int) ;
 int FUNC_5 (int ) ;
 TYPE_4__* FUNC_6 (int ,int) ;
 int FUNC_7 (TYPE_2__*,TYPE_4__*,TYPE_4__*) ;
 int FUNC_8 (TYPE_2__*,int) ;

__attribute__((used)) static int FUNC_9(X509_STORE_CTX *VAR_14, X509_CRL *VAR_15)
{
    X509 *VAR_16 = ((void*)0);
    EVP_PKEY *VAR_17 = ((void*)0);
    int VAR_18 = VAR_14->error_depth;
    int VAR_19 = FUNC_5(VAR_14->chain) - 1;


    if (VAR_14->current_issuer)
        VAR_16 = VAR_14->current_issuer;




    else if (VAR_18 < VAR_19)
        VAR_16 = FUNC_6(VAR_14->chain, VAR_18 + 1);
    else {
        VAR_16 = FUNC_6(VAR_14->chain, VAR_19);

        if (!VAR_14->check_issued(VAR_14, VAR_16, VAR_16) &&
            !FUNC_8(VAR_14, VAR_12))
            return 0;
    }

    if (VAR_16 == ((void*)0))
        return 1;




    if (!VAR_15->base_crl_number) {

        if ((VAR_16->ex_flags & VAR_3) &&
            !(VAR_16->ex_kusage & VAR_5) &&
            !FUNC_8(VAR_14, VAR_10))
            return 0;

        if (!(VAR_14->current_crl_score & VAR_1) &&
            !FUNC_8(VAR_14, VAR_8))
            return 0;

        if (!(VAR_14->current_crl_score & VAR_0) &&
            FUNC_3(VAR_14, VAR_14->current_issuer) <= 0 &&
            !FUNC_8(VAR_14, VAR_6))
            return 0;

        if ((VAR_15->idp_flags & VAR_4) &&
            !FUNC_8(VAR_14, VAR_9))
            return 0;
    }

    if (!(VAR_14->current_crl_score & VAR_2) &&
        !FUNC_4(VAR_14, VAR_15, 1))
        return 0;


    VAR_17 = FUNC_2(VAR_16);

    if (!VAR_17 &&
        !FUNC_8(VAR_14, VAR_11))
        return 0;

    if (VAR_17) {
        int VAR_20 = FUNC_0(VAR_15, VAR_17, VAR_14->param->flags);

        if (VAR_20 != VAR_13 && !FUNC_8(VAR_14, VAR_20))
            return 0;

        if (FUNC_1(VAR_15, VAR_17) <= 0 &&
            !FUNC_8(VAR_14, VAR_7))
            return 0;
    }
    return 1;
}
