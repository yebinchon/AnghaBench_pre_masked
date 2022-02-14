
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sigaction {int sa_mask; int sa_handler; } ;
struct OPENSSL_s390xcap_st {int* stfle; int * kdsa; int * pcc; int * kma; int * prno; int * kmf; int * kmo; int * kmctr; int * kmac; int * kmc; int * km; int * klmd; int * kimd; } ;
typedef int sigset_t ;
typedef int ill_act ;
struct TYPE_2__ {int* stfle; int * kdsa; int * pcc; int * kma; int * prno; int * kmf; int * kmo; int * kmctr; int * kmac; int * kmc; int * km; int * klmd; int * kimd; } ;


 int VAR_0 ;
 unsigned long const VAR_1 ;
 unsigned long const VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 TYPE_1__ VAR_3 ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int * VAR_11 ;
 unsigned long FUNC_4 (int ) ;
 int * FUNC_5 (char*) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_6 (struct sigaction*,int ,int) ;
 int FUNC_7 (struct OPENSSL_s390xcap_st*) ;
 int FUNC_8 (int ,struct sigaction*,struct sigaction*) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int ,int *,int *) ;
 scalar_t__ FUNC_12 (int ,int) ;

void FUNC_13(void)
{
    struct OPENSSL_s390xcap_st VAR_14;

    if (VAR_3.stfle[0])
        return;


    VAR_3.stfle[0] |= FUNC_3(0);
    {
        sigset_t VAR_15;
        struct sigaction VAR_16, VAR_17, VAR_18;

        FUNC_6(&VAR_16, 0, sizeof(VAR_16));
        VAR_16.sa_handler = VAR_12;
        FUNC_10(&VAR_16.sa_mask);
        FUNC_9(&VAR_16.sa_mask, VAR_8);
        FUNC_9(&VAR_16.sa_mask, VAR_7);
        FUNC_9(&VAR_16.sa_mask, VAR_9);

        FUNC_11(VAR_10, &VAR_16.sa_mask, &VAR_15);
        FUNC_8(VAR_8, &VAR_16, &VAR_17);
        FUNC_8(VAR_7, &VAR_16, &VAR_18);


        if (FUNC_12(VAR_13, 1) == 0)
            FUNC_0();


        if ((VAR_3.stfle[2] & FUNC_3(VAR_4))
            && (FUNC_12(VAR_13, 1) == 0)) {
            FUNC_2();
        } else {
            VAR_3.stfle[2] &= ~(FUNC_3(VAR_4)
                                             | FUNC_3(VAR_5)
                                             | FUNC_3(VAR_6));
        }

        FUNC_8(VAR_7, &VAR_18, ((void*)0));
        FUNC_8(VAR_8, &VAR_17, ((void*)0));
        FUNC_11(VAR_10, &VAR_15, ((void*)0));
    }


    VAR_11 = FUNC_5("OPENSSL_s390xcap");
    if (VAR_11 != ((void*)0)) {
        if (!FUNC_7(&VAR_14))
            VAR_11 = ((void*)0);
    }

    if (VAR_11 != ((void*)0)) {
        VAR_3.stfle[0] &= VAR_14.stfle[0];
        VAR_3.stfle[1] &= VAR_14.stfle[1];
        VAR_3.stfle[2] &= VAR_14.stfle[2];
    }

    FUNC_1();

    if (VAR_11 != ((void*)0)) {
        VAR_3.kimd[0] &= VAR_14.kimd[0];
        VAR_3.kimd[1] &= VAR_14.kimd[1];
        VAR_3.klmd[0] &= VAR_14.klmd[0];
        VAR_3.klmd[1] &= VAR_14.klmd[1];
        VAR_3.km[0] &= VAR_14.km[0];
        VAR_3.km[1] &= VAR_14.km[1];
        VAR_3.kmc[0] &= VAR_14.kmc[0];
        VAR_3.kmc[1] &= VAR_14.kmc[1];
        VAR_3.kmac[0] &= VAR_14.kmac[0];
        VAR_3.kmac[1] &= VAR_14.kmac[1];
        VAR_3.kmctr[0] &= VAR_14.kmctr[0];
        VAR_3.kmctr[1] &= VAR_14.kmctr[1];
        VAR_3.kmo[0] &= VAR_14.kmo[0];
        VAR_3.kmo[1] &= VAR_14.kmo[1];
        VAR_3.kmf[0] &= VAR_14.kmf[0];
        VAR_3.kmf[1] &= VAR_14.kmf[1];
        VAR_3.prno[0] &= VAR_14.prno[0];
        VAR_3.prno[1] &= VAR_14.prno[1];
        VAR_3.kma[0] &= VAR_14.kma[0];
        VAR_3.kma[1] &= VAR_14.kma[1];
        VAR_3.pcc[0] &= VAR_14.pcc[0];
        VAR_3.pcc[1] &= VAR_14.pcc[1];
        VAR_3.kdsa[0] &= VAR_14.kdsa[0];
        VAR_3.kdsa[1] &= VAR_14.kdsa[1];
    }
}
