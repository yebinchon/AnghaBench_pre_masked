
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* old_cb ) (int const*,int const*,int,int,int,void*,void*) ;int verbose; int out; } ;
typedef TYPE_1__ security_debug_ex ;
typedef int SSL_CTX ;
typedef int SSL ;
typedef int EVP_PKEY ;
typedef int DH ;


 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ,char const*) ;
 char* FUNC_2 (int *) ;
 char* FUNC_3 (int) ;
 int FUNC_4 (int *,int *,int *,int *,char const**,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 char const* FUNC_7 (int) ;
 char const* FUNC_8 (void*) ;







 int VAR_0 ;







 int * FUNC_9 (void*) ;
 int FUNC_10 (void*) ;
 int VAR_1 ;
 char* FUNC_11 (int,int ,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_12 (int const*,int const*,int,int,int,void*,void*) ;

__attribute__((used)) static int FUNC_13(const SSL *VAR_6, const SSL_CTX *VAR_7,
                                   int VAR_8, int VAR_9, int VAR_10,
                                   void *VAR_11, void *VAR_12)
{
    security_debug_ex *VAR_13 = VAR_12;
    int VAR_14, VAR_15 = 1, VAR_16 = 0;
    const char *VAR_17;
    int VAR_18;
    VAR_14 = VAR_13->old_cb(VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12);
    if (VAR_14 == 1 && VAR_13->verbose < 2)
        return 1;
    FUNC_1(VAR_13->out, "Security callback: ");

    VAR_17 = FUNC_11(VAR_8, VAR_1, ((void*)0));
    VAR_18 = VAR_17 != ((void*)0);
    switch (VAR_8) {
    case 129:
    case 140:
        VAR_15 = 0;
        VAR_18 = 0;
        break;
    case 128:
        FUNC_0(VAR_13->out, "Version=%s", FUNC_11(VAR_10, VAR_5, "???"));
        VAR_15 = 0;
        VAR_18 = 0;
        break;
    case 141:
    case 134:
        VAR_16 = 1;
        break;
    case 130:
    case 131:
    case 133:
    case 132:
        VAR_18 = 0;
        break;
    }
    if (VAR_18)
        FUNC_0(VAR_13->out, "%s=", VAR_17);

    switch (VAR_8 & VAR_0) {

    case 138:
        FUNC_1(VAR_13->out, FUNC_8(VAR_11));
        break;


    case 137:
        {
            const char *VAR_19;
            VAR_19 = FUNC_3(VAR_10);
            if (VAR_19 == ((void*)0))
                VAR_19 = FUNC_7(VAR_10);
            FUNC_1(VAR_13->out, VAR_19);
        }
        break;


    case 136:
        {
            DH *VAR_20 = VAR_11;
            FUNC_0(VAR_13->out, "%d", FUNC_2(VAR_20));
            break;
        }

    case 139:
        {
            if (VAR_16) {
                int VAR_21 = FUNC_10(VAR_11);
                FUNC_1(VAR_13->out, FUNC_7(VAR_21));
            } else {
                EVP_PKEY *VAR_22 = FUNC_9(VAR_11);
                const char *VAR_23 = "";
                FUNC_4(((void*)0), ((void*)0), ((void*)0), ((void*)0),
                                        &VAR_23, FUNC_6(VAR_22));
                FUNC_0(VAR_13->out, "%s, bits=%d",
                           VAR_23, FUNC_5(VAR_22));
            }
            break;
        }
    case 135:
        {
            const unsigned char *VAR_24 = VAR_11;
            const char *VAR_25 = ((void*)0);
            int VAR_26 = (VAR_24[0] << 8) + VAR_24[1];


            if (VAR_17 != ((void*)0))
                FUNC_0(VAR_13->out, "%s", VAR_17);
            else
                FUNC_0(VAR_13->out, "s_cb.c:security_callback_debug op=0x%x", VAR_8);

            VAR_25 = FUNC_11(VAR_26, VAR_4, ((void*)0));
            if (VAR_25 != ((void*)0)) {
                FUNC_0(VAR_13->out, " scheme=%s", VAR_25);
            } else {
                int VAR_27 = VAR_24[1];
                int VAR_28 = VAR_24[0];
                const char *VAR_29 = FUNC_11(VAR_27, VAR_2, ((void*)0));
                const char *VAR_30 = FUNC_11(VAR_28, VAR_3, ((void*)0));

                if (VAR_29 != ((void*)0) && VAR_30 != ((void*)0))
                    FUNC_0(VAR_13->out, " digest=%s, algorithm=%s", VAR_30, VAR_29);
                else
                    FUNC_0(VAR_13->out, " scheme=unknown(0x%04x)", VAR_26);
            }
        }

    }

    if (VAR_15)
        FUNC_0(VAR_13->out, ", security bits=%d", VAR_9);
    FUNC_0(VAR_13->out, ": %s\n", VAR_14 ? "yes" : "no");
    return VAR_14;
}
