
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int const BIO_ADDRINFO ;
typedef int BIO ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int const*) ;
 int FUNC_1 (int const*) ;
 int FUNC_2 (int const*) ;
 int const* FUNC_3 (int const*) ;
 int FUNC_4 (int const*) ;
 int FUNC_5 (int const*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_6 (int,int ,int ) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int,int ,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (char const*,char const*,int ,int,int,int,int const**) ;
 int * FUNC_11 (int,int ) ;
 int FUNC_12 (int ,char*,char*,char const*,char*,char const*) ;
 int FUNC_13 () ;
 int FUNC_14 (int,int,int,int ) ;
 int FUNC_15 () ;
 int FUNC_16 (int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_17 (int) ;
 int VAR_11 ;

int FUNC_18(int *VAR_12, const char *VAR_13, const char *VAR_14,
                const char *VAR_15, const char *VAR_16,
                int VAR_17, int VAR_18, int VAR_19)
{
    BIO_ADDRINFO *VAR_20 = ((void*)0);
    BIO_ADDRINFO *VAR_21 = ((void*)0);
    const BIO_ADDRINFO *VAR_22 = ((void*)0);
    const BIO_ADDRINFO *VAR_23 = ((void*)0);
    int VAR_24 = 0;
    int VAR_25;

    if (FUNC_13() != 1)
        return 0;

    VAR_25 = FUNC_10(VAR_13, VAR_14, VAR_4, VAR_17, VAR_18, VAR_19,
                        &VAR_20);
    if (VAR_25 == 0) {
        FUNC_16(VAR_11);
        return 0;
    }

    if (VAR_15 != ((void*)0) || VAR_16 != ((void*)0)) {
        VAR_25 = FUNC_10(VAR_15, VAR_16, VAR_4,
                            VAR_17, VAR_18, VAR_19, &VAR_21);
        if (VAR_25 == 0) {
            FUNC_16 (VAR_11);
            goto out;
        }
    }

    VAR_25 = 0;
    for (VAR_22 = VAR_20; VAR_22 != ((void*)0); VAR_22 = FUNC_3(VAR_22)) {



        FUNC_17((VAR_17 == VAR_3
                        || VAR_17 == FUNC_1(VAR_22))
                       && (VAR_18 == 0 || VAR_18 == FUNC_5(VAR_22))
                       && (VAR_19 == 0
                           || VAR_19 == FUNC_4(VAR_22)));

        if (VAR_21 != ((void*)0)) {
            for (VAR_23 = VAR_21; VAR_23 != ((void*)0); VAR_23 = FUNC_3(VAR_23)) {
                if (FUNC_1(VAR_23) == FUNC_1(VAR_22))
                    break;
            }
            if (VAR_23 == ((void*)0))
                continue;
            ++VAR_24;
        }

        *VAR_12 = FUNC_14(FUNC_1(VAR_22), FUNC_5(VAR_22),
                           FUNC_4(VAR_22), 0);
        if (*VAR_12 == VAR_8) {



            continue;
        }

        if (VAR_23 != ((void*)0)) {
            if (!FUNC_6(*VAR_12, FUNC_0(VAR_23),
                          VAR_7)) {
                FUNC_7(*VAR_12);
                *VAR_12 = VAR_8;
                break;
            }
        }


        if (VAR_19 == VAR_9) {






            BIO *VAR_26 = FUNC_11(*VAR_12, VAR_5);

            if (VAR_26 == ((void*)0)) {
                FUNC_16(VAR_11);
                return 0;
            }
            FUNC_9(VAR_26);
        }


        if (!FUNC_8(*VAR_12, FUNC_0(VAR_22),
                         VAR_19 == VAR_10 ? VAR_6 : 0)) {
            FUNC_7(*VAR_12);
            *VAR_12 = VAR_8;
            continue;
        }


        break;
    }

    if (*VAR_12 == VAR_8) {
        if (VAR_21 != ((void*)0) && !VAR_24) {
            FUNC_12(VAR_11, "Can't bind %saddress for %s%s%s\n",
                       FUNC_1(VAR_20) == VAR_1 ? "IPv6 " :
                       FUNC_1(VAR_20) == VAR_0 ? "IPv4 " :
                       FUNC_1(VAR_20) == VAR_2 ? "unix " : "",
                       VAR_15 != ((void*)0) ? VAR_15 : "",
                       VAR_16 != ((void*)0) ? ":" : "",
                       VAR_16 != ((void*)0) ? VAR_16 : "");
            FUNC_15();
            VAR_25 = 0;
        }
        FUNC_16(VAR_11);
    } else {

        FUNC_15();
        VAR_25 = 1;
    }
out:
    if (VAR_21 != ((void*)0)) {
        FUNC_2 (VAR_21);
    }
    FUNC_2(VAR_20);
    return VAR_25;
}
