
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union BIO_sock_info_u {int * addr; } ;
struct timeval {int tv_usec; scalar_t__ tv_sec; } ;
typedef int sink ;
typedef int fd_set ;
typedef int (* do_server_cb ) (int,int,int,unsigned char*) ;
typedef int const BIO_ADDRINFO ;
typedef int BIO_ADDR ;
typedef int BIO ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_0 (int const*) ;
 int FUNC_1 (int const*) ;
 int FUNC_2 (int const*) ;
 int const* FUNC_3 (int const*) ;
 int FUNC_4 (int const*) ;
 int FUNC_5 (int const*) ;
 int FUNC_6 (int *) ;
 char* FUNC_7 (int *,int) ;
 void* FUNC_8 () ;
 int FUNC_9 (int const*) ;
 char* FUNC_10 (int *,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_11 (int,int *,int ) ;
 int FUNC_12 (int) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int,int const*,int) ;
 int FUNC_16 (char const*,char const*,int ,int,int,int,int const**) ;
 int * FUNC_17 (int,int ) ;
 scalar_t__ FUNC_18 (int *,char*,...) ;
 int FUNC_19 (int,int) ;
 scalar_t__ FUNC_20 (int,int ,union BIO_sock_info_u*) ;
 int FUNC_21 () ;
 scalar_t__ FUNC_22 (int) ;
 int FUNC_23 (int,int,int,int ) ;
 int FUNC_24 (int ) ;
 int FUNC_25 (int *) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_26 (int) ;
 int FUNC_27 (char*) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_28 (int,int *) ;
 int * VAR_13 ;
 scalar_t__ FUNC_29 (int,char*,int) ;
 scalar_t__ FUNC_30 (int,int *,int *,int *,struct timeval*) ;
 int FUNC_31 (int,int) ;
 int * FUNC_32 (char*,char) ;
 int FUNC_33 (int,int,int,unsigned char*) ;
 int FUNC_34 (int,int,int,unsigned char*) ;
 int FUNC_35 (char const*) ;

int FUNC_36(int *VAR_14, const char *VAR_15, const char *VAR_16,
              int VAR_17, int VAR_18, int VAR_19, do_server_cb VAR_20,
              unsigned char *VAR_21, int VAR_22, BIO *VAR_23)
{
    int VAR_24 = 0;
    int VAR_25;
    int VAR_26;
    BIO_ADDRINFO *VAR_27 = ((void*)0);
    const BIO_ADDRINFO *VAR_28;
    int VAR_29, VAR_30, VAR_31, VAR_32;
    const BIO_ADDR *VAR_33;
    int VAR_34 = VAR_7;
    int VAR_35 = 0;

    if (FUNC_21() != 1)
        return 0;

    if (!FUNC_16(VAR_15, VAR_16, VAR_4, VAR_17, VAR_18, VAR_19,
                       &VAR_27)) {
        FUNC_24(VAR_12);
        return 0;
    }



    FUNC_26((VAR_17 == VAR_3 || VAR_17 == FUNC_1(VAR_27))
                   && (VAR_18 == 0 || VAR_18 == FUNC_5(VAR_27))
                   && (VAR_19 == 0 || VAR_19 == FUNC_4(VAR_27)));

    VAR_29 = FUNC_1(VAR_27);
    VAR_30 = FUNC_5(VAR_27);
    VAR_31 = FUNC_4(VAR_27);
    VAR_33 = FUNC_0(VAR_27);
    VAR_28 = FUNC_3(VAR_27);
    if (VAR_29 == VAR_1)
        VAR_34 |= VAR_8;
    if (VAR_28 != ((void*)0)
            && FUNC_5(VAR_28) == VAR_30
            && FUNC_4(VAR_28) == VAR_31) {
        if (VAR_29 == VAR_0
                && FUNC_1(VAR_28) == VAR_1) {
            VAR_29 = VAR_1;
            VAR_33 = FUNC_0(VAR_28);
        } else if (VAR_29 == VAR_1
                   && FUNC_1(VAR_28) == VAR_0) {
            VAR_34 &= ~VAR_8;
        }
    }

    VAR_24 = FUNC_23(VAR_29, VAR_30, VAR_31, 0);
    if (VAR_24 == VAR_9
        || !FUNC_15(VAR_24, VAR_33, VAR_34)) {
        FUNC_2(VAR_27);
        FUNC_24(VAR_12);
        if (VAR_24 != VAR_9)
            FUNC_12(VAR_24);
        goto end;
    }


    if (VAR_19 == VAR_10) {






        BIO *VAR_36 = FUNC_17(VAR_24, VAR_5);

        if (VAR_36 == ((void*)0)) {
            FUNC_12(VAR_24);
            FUNC_24(VAR_12);
            goto end;
        }
        FUNC_14(VAR_36);
    }


    VAR_32 = FUNC_9(VAR_33);

    FUNC_2(VAR_27);
    VAR_27 = ((void*)0);

    if (VAR_32 == 0) {

        union BIO_sock_info_u VAR_37;
        char *VAR_38 = ((void*)0);
        char *VAR_39 = ((void*)0);
        int VAR_40 = 0;

        if ((VAR_37.addr = FUNC_8()) != ((void*)0)
            && FUNC_20(VAR_24, VAR_6, &VAR_37)
            && (VAR_38 = FUNC_7(VAR_37.addr, 1)) != ((void*)0)
            && (VAR_39 = FUNC_10(VAR_37.addr, 1)) != ((void*)0)
            && FUNC_18(VAR_23,
                          FUNC_32(VAR_38, ':') == ((void*)0)
                          ? "ACCEPT %s:%s\n"
                          : "ACCEPT [%s]:%s\n",
                          VAR_38, VAR_39) > 0)
            VAR_40 = 1;

        (void)FUNC_13(VAR_23);
        FUNC_27(VAR_38);
        FUNC_27(VAR_39);
        FUNC_6(VAR_37.addr);
        if (!VAR_40) {
            FUNC_12(VAR_24);
            FUNC_24(VAR_12);
            goto end;
        }
    } else {
        (void)FUNC_18(VAR_23, "ACCEPT\n");
        (void)FUNC_13(VAR_23);
    }

    if (VAR_14 != ((void*)0))
        *VAR_14 = VAR_24;
    for (;;) {
        char VAR_41[64];
        struct timeval VAR_42;
        fd_set VAR_43;

        if (VAR_18 == VAR_11) {
            FUNC_6(VAR_13);
            VAR_13 = FUNC_8();
            if (VAR_13 == ((void*)0)) {
                FUNC_12(VAR_24);
                FUNC_24(VAR_12);
                goto end;
            }
            do {
                VAR_25 = FUNC_11(VAR_24, VAR_13, 0);
            } while (VAR_25 < 0 && FUNC_22(VAR_25));
            if (VAR_25 < 0) {
                FUNC_24(VAR_12);
                FUNC_12(VAR_24);
                break;
            }
            FUNC_19(VAR_25, 1);
            VAR_26 = (*VAR_20)(VAR_25, VAR_18, VAR_19, VAR_21);
            FUNC_31(VAR_25, 1);






            VAR_42.tv_sec = 0;
            VAR_42.tv_usec = 500000;
            do {
                FUNC_25(&VAR_43);
                FUNC_28(VAR_25, &VAR_43);
            } while (FUNC_30(VAR_25 + 1, &VAR_43, ((void*)0), ((void*)0), &VAR_42) > 0
                     && FUNC_29(VAR_25, VAR_41, sizeof(VAR_41)) > 0);

            FUNC_12(VAR_25);
        } else {
            VAR_26 = (*VAR_20)(VAR_24, VAR_18, VAR_19, VAR_21);
        }

        if (VAR_22 != -1)
            VAR_22--;
        if (VAR_26 < 0 || VAR_22 == 0) {
            FUNC_12(VAR_24);
            VAR_35 = VAR_26;
            break;
        }
    }
 end:




    FUNC_6(VAR_13);
    VAR_13 = ((void*)0);
    return VAR_35;
}
