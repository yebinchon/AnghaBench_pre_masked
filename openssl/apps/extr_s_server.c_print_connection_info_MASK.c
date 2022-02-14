
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int buf ;
typedef int X509 ;
struct TYPE_3__ {int name; } ;
typedef int SSL ;
typedef TYPE_1__ SRTP_PROTECTION_PROFILE ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (int ,unsigned char const*,unsigned int) ;
 int VAR_0 ;
 int FUNC_5 (unsigned char*) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int *) ;
 char* FUNC_8 (int ) ;
 int VAR_1 ;
 int FUNC_9 (int *,unsigned char*,int,int *,int ,int *,int ,int ) ;
 int FUNC_10 (int *,unsigned char const**,unsigned int*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int * FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 scalar_t__ FUNC_15 (int *) ;
 TYPE_1__* FUNC_16 (int *) ;
 int FUNC_17 (int *) ;
 int * FUNC_18 (int *,char*,int) ;
 int FUNC_19 (int *) ;
 scalar_t__ FUNC_20 (int *) ;
 int FUNC_21 (int *) ;
 unsigned char* FUNC_22 (int,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_23 (int ,int *) ;
 int * VAR_4 ;
 int VAR_5 ;
 int FUNC_24 (int ,int *) ;
 int FUNC_25 (int *) ;
 scalar_t__ VAR_6 ;
 int FUNC_26 (int ,int *,int ) ;
 int FUNC_27 (int ,int *) ;
 int FUNC_28 (int ,int *) ;
 int FUNC_29 (int *) ;

__attribute__((used)) static void FUNC_30(SSL *VAR_7)
{
    const char *VAR_8;
    X509 *VAR_9;
    char VAR_10[VAR_0];

    const unsigned char *VAR_11;
    unsigned VAR_12;

    unsigned char *VAR_13;
    int VAR_14;

    if (VAR_6)
        FUNC_25(VAR_7);

    FUNC_6(VAR_3, FUNC_17(VAR_7));

    VAR_9 = FUNC_13(VAR_7);
    if (VAR_9 != ((void*)0)) {
        FUNC_3(VAR_3, "Client certificate\n");
        FUNC_7(VAR_3, VAR_9);
        FUNC_23(VAR_3, VAR_9);
        FUNC_21(VAR_9);
        VAR_9 = ((void*)0);
    }

    if (FUNC_18(VAR_7, VAR_10, sizeof(VAR_10)) != ((void*)0))
        FUNC_3(VAR_3, "Shared ciphers:%s\n", VAR_10);
    VAR_8 = FUNC_8(FUNC_11(VAR_7));
    FUNC_28(VAR_3, VAR_7);

    FUNC_27(VAR_3, VAR_7);
    FUNC_26(VAR_3, VAR_7, 0);

    FUNC_24(VAR_3, VAR_7);
    FUNC_3(VAR_3, "CIPHER is %s\n", (VAR_8 != ((void*)0)) ? VAR_8 : "(NONE)");


    FUNC_10(VAR_7, &VAR_11, &VAR_12);
    if (VAR_11) {
        FUNC_3(VAR_3, "NEXTPROTO is ");
        FUNC_4(VAR_3, VAR_11, VAR_12);
        FUNC_3(VAR_3, "\n");
    }


    {
        SRTP_PROTECTION_PROFILE *VAR_15
            = FUNC_16(VAR_7);

        if (VAR_15)
            FUNC_3(VAR_3, "SRTP Extension negotiated, profile=%s\n",
                       VAR_15->name);
    }

    if (FUNC_20(VAR_7))
        FUNC_3(VAR_3, "Reused session-id\n");
    FUNC_3(VAR_3, "Secure Renegotiation IS%s supported\n",
               FUNC_15(VAR_7) ? "" : " NOT");
    if ((FUNC_12(VAR_7) & VAR_1))
        FUNC_3(VAR_3, "Renegotiation is DISABLED\n");

    if (VAR_4 != ((void*)0)) {
        FUNC_3(VAR_3, "Keying material exporter:\n");
        FUNC_3(VAR_3, "    Label: '%s'\n", VAR_4);
        FUNC_3(VAR_3, "    Length: %i bytes\n", VAR_5);
        VAR_13 = FUNC_22(VAR_5, "export key");
        if (!FUNC_9(VAR_7, VAR_13,
                                        VAR_5,
                                        VAR_4,
                                        FUNC_29(VAR_4),
                                        ((void*)0), 0, 0)) {
            FUNC_3(VAR_3, "    Error\n");
        } else {
            FUNC_3(VAR_3, "    Keying material: ");
            for (VAR_14 = 0; VAR_14 < VAR_5; VAR_14++)
                FUNC_3(VAR_3, "%02X", VAR_13[VAR_14]);
            FUNC_3(VAR_3, "\n");
        }
        FUNC_5(VAR_13);
    }

    if (FUNC_2(FUNC_19(VAR_7)))
        FUNC_3(VAR_2, "Using Kernel TLS for sending\n");
    if (FUNC_1(FUNC_14(VAR_7)))
        FUNC_3(VAR_2, "Using Kernel TLS for receiving\n");


    (void)FUNC_0(VAR_3);
}
