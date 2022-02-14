
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_13__ {int algorithm; } ;
typedef TYPE_2__ X509_ALGOR ;
struct TYPE_12__ {TYPE_2__ signature; } ;
struct TYPE_14__ {int ex_flags; TYPE_1__ cert_info; scalar_t__ akid; } ;
typedef TYPE_3__ X509 ;
typedef int EVP_PKEY ;


 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,int*,int*) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_5 (TYPE_3__*,scalar_t__) ;
 int * FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (TYPE_3__*) ;
 scalar_t__ FUNC_9 (TYPE_3__*,int ) ;
 int FUNC_10 (TYPE_3__*) ;

int FUNC_11(X509 *VAR_10, X509 *VAR_11)
{
    if (FUNC_4(FUNC_8(VAR_10),
                      FUNC_7(VAR_11)))
        return VAR_8;

    FUNC_10(VAR_10);
    FUNC_10(VAR_11);

    if (VAR_11->akid) {
        int VAR_12 = FUNC_5(VAR_10, VAR_11->akid);
        if (VAR_12 != VAR_9)
            return VAR_12;
    }

    {




        EVP_PKEY *VAR_13 = FUNC_6(VAR_10);
        X509_ALGOR *VAR_14 = &VAR_11->cert_info.signature;
        int VAR_15 = VAR_3, VAR_16 = VAR_3;

        if (VAR_13 == ((void*)0))
            return VAR_6;

        if (!FUNC_2(FUNC_3(VAR_14->algorithm),
                                 &VAR_16, &VAR_15)
            || FUNC_1(VAR_15) != FUNC_0(VAR_13))
            return VAR_7;
    }

    if (VAR_11->ex_flags & VAR_0) {
        if (FUNC_9(VAR_10, VAR_1))
            return VAR_5;
    } else if (FUNC_9(VAR_10, VAR_2))
        return VAR_4;
    return VAR_9;
}
