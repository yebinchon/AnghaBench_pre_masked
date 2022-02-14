
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ param_decode; scalar_t__ old_priv_decode; } ;
typedef TYPE_1__ EVP_PKEY_ASN1_METHOD ;
typedef int ENGINE ;


 int FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 (int **,char const*,int) ;
 char const* VAR_0 ;
 char const* VAR_1 ;
 char const* VAR_2 ;
 char const* VAR_3 ;
 char const* VAR_4 ;
 char const* VAR_5 ;
 char const* VAR_6 ;
 char const* VAR_7 ;
 char const* VAR_8 ;
 char const* VAR_9 ;
 char const* VAR_10 ;
 char const* VAR_11 ;
 char const* VAR_12 ;
 char const* VAR_13 ;
 int FUNC_2 (char const*,char*) ;
 scalar_t__ FUNC_3 (char const*,char const*) ;

__attribute__((used)) static int FUNC_4(const char *VAR_14, const char *VAR_15)
{

    if (FUNC_3(VAR_14, VAR_15) == 0)
        return 1;



    if (FUNC_3(VAR_15, VAR_3) == 0) {
        int VAR_16;
        const EVP_PKEY_ASN1_METHOD *VAR_17;
        if (FUNC_3(VAR_14, VAR_7) == 0)
            return 1;
        if (FUNC_3(VAR_14, VAR_8) == 0)
            return 1;
        VAR_16 = FUNC_2(VAR_14, "PRIVATE KEY");
        if (VAR_16 > 0) {




            VAR_17 = FUNC_1(((void*)0), VAR_14, VAR_16);
            if (VAR_17 && VAR_17->old_priv_decode)
                return 1;
        }
        return 0;
    }

    if (FUNC_3(VAR_15, VAR_4) == 0) {
        int VAR_18;
        const EVP_PKEY_ASN1_METHOD *VAR_19;
        VAR_18 = FUNC_2(VAR_14, "PARAMETERS");
        if (VAR_18 > 0) {
            ENGINE *VAR_20;
            VAR_19 = FUNC_1(&VAR_20, VAR_14, VAR_18);
            if (VAR_19) {
                int VAR_21;
                if (VAR_19->param_decode)
                    VAR_21 = 1;
                else
                    VAR_21 = 0;

                FUNC_0(VAR_20);

                return VAR_21;
            }
        }
        return 0;
    }

    if (FUNC_3(VAR_14, VAR_2) == 0
        && FUNC_3(VAR_15, VAR_1) == 0)
        return 1;



    if (FUNC_3(VAR_14, VAR_10) == 0
        && FUNC_3(VAR_15, VAR_9) == 0)
        return 1;

    if (FUNC_3(VAR_14, VAR_12) == 0
        && FUNC_3(VAR_15, VAR_11) == 0)
        return 1;


    if (FUNC_3(VAR_14, VAR_9) == 0
        && FUNC_3(VAR_15, VAR_13) == 0)
        return 1;

    if (FUNC_3(VAR_14, VAR_10) == 0
        && FUNC_3(VAR_15, VAR_13) == 0)
        return 1;


    if (FUNC_3(VAR_14, VAR_9) == 0
        && FUNC_3(VAR_15, VAR_5) == 0)
        return 1;

    if (FUNC_3(VAR_14, VAR_6) == 0
        && FUNC_3(VAR_15, VAR_5) == 0)
        return 1;


    if (FUNC_3(VAR_14, VAR_9) == 0
        && FUNC_3(VAR_15, VAR_0) == 0)
        return 1;

    if (FUNC_3(VAR_14, VAR_5) == 0
        && FUNC_3(VAR_15, VAR_0) == 0)
        return 1;


    return 0;
}
