
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ parameter; int algorithm; } ;
typedef TYPE_1__ X509_ALGOR ;
struct TYPE_14__ {scalar_t__ length; } ;
struct TYPE_13__ {TYPE_5__* hashed_msg; TYPE_1__* hash_algo; } ;
struct TYPE_12__ {TYPE_4__* msg_imprint; } ;
struct TYPE_11__ {int mds; TYPE_3__* request; } ;
typedef TYPE_2__ TS_RESP_CTX ;
typedef TYPE_3__ TS_REQ ;
typedef TYPE_4__ TS_MSG_IMPRINT ;
typedef int EVP_MD ;
typedef TYPE_5__ ASN1_OCTET_STRING ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int const*) ;
 int FUNC_2 (int const*) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_2__*,int ) ;
 int FUNC_6 (TYPE_2__*,int ,char*) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_7 (int ) ;
 int * FUNC_8 (int ,int) ;

__attribute__((used)) static int FUNC_9(TS_RESP_CTX *VAR_5)
{
    TS_REQ *VAR_6 = VAR_5->request;
    TS_MSG_IMPRINT *VAR_7;
    X509_ALGOR *VAR_8;
    int VAR_9;
    const ASN1_OCTET_STRING *VAR_10;
    const EVP_MD *VAR_11 = ((void*)0);
    int VAR_12;

    if (FUNC_4(VAR_6) != 1) {
        FUNC_6(VAR_5, VAR_3,
                                    "Bad request version.");
        FUNC_5(VAR_5, VAR_2);
        return 0;
    }

    VAR_7 = VAR_6->msg_imprint;
    VAR_8 = VAR_7->hash_algo;
    VAR_9 = FUNC_3(VAR_8->algorithm);
    for (VAR_12 = 0; !VAR_11 && VAR_12 < FUNC_7(VAR_5->mds); ++VAR_12) {
        const EVP_MD *VAR_13 = FUNC_8(VAR_5->mds, VAR_12);
        if (VAR_9 == FUNC_2(VAR_13))
            VAR_11 = VAR_13;
    }
    if (!VAR_11) {
        FUNC_6(VAR_5, VAR_3,
                                    "Message digest algorithm is "
                                    "not supported.");
        FUNC_5(VAR_5, VAR_0);
        return 0;
    }

    if (VAR_8->parameter && FUNC_0(VAR_8->parameter) != VAR_4) {
        FUNC_6(VAR_5, VAR_3,
                                    "Superfluous message digest "
                                    "parameter.");
        FUNC_5(VAR_5, VAR_0);
        return 0;
    }
    VAR_10 = VAR_7->hashed_msg;
    if (VAR_10->length != FUNC_1(VAR_11)) {
        FUNC_6(VAR_5, VAR_3,
                                    "Bad message digest.");
        FUNC_5(VAR_5, VAR_1);
        return 0;
    }

    return 1;
}
