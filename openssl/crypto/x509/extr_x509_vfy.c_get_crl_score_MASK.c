
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_13__ {TYPE_1__* param; } ;
typedef TYPE_2__ X509_STORE_CTX ;
struct TYPE_14__ {int idp_flags; unsigned int idp_reasons; int flags; scalar_t__ base_crl_number; } ;
typedef TYPE_3__ X509_CRL ;
typedef int X509 ;
struct TYPE_12__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (TYPE_3__*) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int VAR_9 ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (TYPE_2__*,TYPE_3__*,int ) ;
 int FUNC_4 (TYPE_2__*,TYPE_3__*,int **,int*) ;
 scalar_t__ FUNC_5 (int *,TYPE_3__*,int,unsigned int*) ;

__attribute__((used)) static int FUNC_6(X509_STORE_CTX *VAR_10, X509 **VAR_11,
                         unsigned int *VAR_12, X509_CRL *VAR_13, X509 *VAR_14)
{

    int VAR_15 = 0;
    unsigned int VAR_16 = *VAR_12, VAR_17;




    if (VAR_13->idp_flags & VAR_7)
        return 0;

    if (!(VAR_10->param->flags & VAR_9)) {
        if (VAR_13->idp_flags & (VAR_6 | VAR_8))
            return 0;
    } else if (VAR_13->idp_flags & VAR_8) {

        if (!(VAR_13->idp_reasons & ~VAR_16))
            return 0;
    }

    else if (VAR_13->base_crl_number)
        return 0;

    if (FUNC_1(FUNC_2(VAR_14), FUNC_0(VAR_13))) {
        if (!(VAR_13->idp_flags & VAR_6))
            return 0;
    } else
        VAR_15 |= VAR_1;

    if (!(VAR_13->flags & VAR_5))
        VAR_15 |= VAR_2;


    if (FUNC_3(VAR_10, VAR_13, 0))
        VAR_15 |= VAR_4;


    FUNC_4(VAR_10, VAR_13, VAR_11, &VAR_15);



    if (!(VAR_15 & VAR_0))
        return 0;



    if (FUNC_5(VAR_14, VAR_13, VAR_15, &VAR_17)) {

        if (!(VAR_17 & ~VAR_16))
            return 0;
        VAR_16 |= VAR_17;
        VAR_15 |= VAR_3;
    }

    *VAR_12 = VAR_16;

    return VAR_15;

}
