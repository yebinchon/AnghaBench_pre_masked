
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int algorithm_auth; int algorithm_mac; int algorithm_mkey; int min_tls; int algorithm_enc; } ;
typedef int SSL_CTX ;
typedef TYPE_1__ SSL_CIPHER ;
typedef int SSL ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;
 int VAR_1 ;
 int FUNC_1 (int const*) ;
 int FUNC_2 (int const*) ;
 int VAR_2 ;
 int VAR_3 ;





 int VAR_4 ;

 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int const*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;

__attribute__((used)) static int FUNC_4(const SSL *VAR_12, const SSL_CTX *VAR_13,
                                         int VAR_14, int VAR_15, int VAR_16, void *VAR_17,
                                         void *VAR_18)
{
    int VAR_19, VAR_20;
    static const int VAR_21[5] = { 80, 112, 128, 192, 256 };
    if (VAR_13)
        VAR_19 = FUNC_1(VAR_13);
    else
        VAR_19 = FUNC_3(VAR_12);

    if (VAR_19 <= 0) {




        if (VAR_14 == VAR_4 && VAR_15 < 80)
            return 0;
        return 1;
    }
    if (VAR_19 > 5)
        VAR_19 = 5;
    VAR_20 = VAR_21[VAR_19 - 1];
    switch (VAR_14) {
    case 131:
    case 132:
    case 133:
        {
            const SSL_CIPHER *VAR_22 = VAR_17;

            if (VAR_15 < VAR_20)
                return 0;

            if (VAR_22->algorithm_auth & VAR_6)
                return 0;

            if (VAR_22->algorithm_mac & VAR_2)
                return 0;

            if (VAR_20 > 160 && VAR_22->algorithm_mac & VAR_5)
                return 0;

            if (VAR_19 >= 2 && VAR_22->algorithm_enc == VAR_3)
                return 0;

            if (VAR_19 >= 3 && VAR_22->min_tls != VAR_10 &&
                               !(VAR_22->algorithm_mkey & (VAR_7 | VAR_8)))
                return 0;
            break;
        }
    case 128:
        if (!FUNC_2(VAR_12)) {

            if (VAR_16 <= VAR_1 && VAR_19 >= 2)
                return 0;

            if (VAR_16 <= VAR_11 && VAR_19 >= 3)
                return 0;

            if (VAR_16 <= VAR_9 && VAR_19 >= 4)
                return 0;
        } else {

            if (FUNC_0(VAR_16, VAR_0) && VAR_19 >= 4)
                return 0;
        }
        break;

    case 130:
        if (VAR_19 >= 2)
            return 0;
        break;
    case 129:
        if (VAR_19 >= 3)
            return 0;
        break;
    default:
        if (VAR_15 < VAR_20)
            return 0;
    }
    return 1;
}
