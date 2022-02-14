
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int X509 ;
typedef int WPACKET ;
struct TYPE_10__ {unsigned char* pms; size_t pmslen; TYPE_1__* new_cipher; } ;
struct TYPE_11__ {TYPE_3__ tmp; int server_random; int client_random; } ;
struct TYPE_12__ {TYPE_4__ s3; TYPE_2__* session; } ;
struct TYPE_9__ {int * peer; } ;
struct TYPE_8__ {int algorithm_auth; } ;
typedef TYPE_5__ SSL ;
typedef int EVP_PKEY_CTX ;
typedef int EVP_MD_CTX ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,unsigned char*,unsigned int*) ;
 scalar_t__ FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 () ;
 int VAR_2 ;
 scalar_t__ FUNC_5 (int *,int,int ,int ,int,unsigned char*) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (int ,int *) ;
 int VAR_3 ;
 scalar_t__ FUNC_8 (int *,unsigned char*,size_t*,unsigned char*,size_t) ;
 scalar_t__ FUNC_9 (int *) ;
 int FUNC_10 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_11 (unsigned char*,size_t) ;
 unsigned char* FUNC_12 (size_t) ;
 scalar_t__ FUNC_13 (unsigned char*,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_14 (TYPE_5__*,int ,int ,int ) ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_15 (int *,int) ;
 int FUNC_16 (int *,unsigned char*,size_t) ;
 int FUNC_17 (int *) ;

__attribute__((used)) static int FUNC_18(SSL *VAR_15, WPACKET *VAR_16)
{


    EVP_PKEY_CTX *VAR_17 = ((void*)0);
    X509 *VAR_18;
    size_t VAR_19;
    unsigned int VAR_20;
    unsigned char VAR_21[32], VAR_22[256];
    EVP_MD_CTX *VAR_23 = ((void*)0);
    int VAR_24 = VAR_5;
    unsigned char *VAR_25 = ((void*)0);
    size_t VAR_26 = 0;

    if ((VAR_15->s3.tmp.new_cipher->algorithm_auth & VAR_12) != 0)
        VAR_24 = VAR_4;




    VAR_18 = VAR_15->session->peer;
    if (VAR_18 == ((void*)0)) {
        FUNC_14(VAR_15, VAR_7, VAR_9,
               VAR_11);
        return 0;
    }

    VAR_17 = FUNC_7(FUNC_17(VAR_18), ((void*)0));
    if (VAR_17 == ((void*)0)) {
        FUNC_14(VAR_15, VAR_8, VAR_9,
                 VAR_1);
        return 0;
    }







    VAR_26 = 32;
    VAR_25 = FUNC_12(VAR_26);
    if (VAR_25 == ((void*)0)) {
        FUNC_14(VAR_15, VAR_8, VAR_9,
                 VAR_1);
        goto err;
    }

    if (FUNC_9(VAR_17) <= 0



        || FUNC_13(VAR_25, (int)VAR_26) <= 0) {
        FUNC_14(VAR_15, VAR_8, VAR_9,
                 VAR_0);
        goto err;
    };




    VAR_23 = FUNC_4();
    if (VAR_23 == ((void*)0)
        || FUNC_1(VAR_23, FUNC_10(VAR_24)) <= 0
        || FUNC_2(VAR_23, VAR_15->s3.client_random,
                            VAR_6) <= 0
        || FUNC_2(VAR_23, VAR_15->s3.server_random,
                            VAR_6) <= 0
        || FUNC_0(VAR_23, VAR_21, &VAR_20) <= 0) {
        FUNC_14(VAR_15, VAR_8, VAR_9,
                 VAR_0);
        goto err;
    }
    FUNC_3(VAR_23);
    VAR_23 = ((void*)0);
    if (FUNC_5(VAR_17, -1, VAR_3,
                          VAR_2, 8, VAR_21) < 0) {
        FUNC_14(VAR_15, VAR_8, VAR_9,
                 VAR_10);
        goto err;
    }




    VAR_19 = 255;
    if (FUNC_8(VAR_17, VAR_22, &VAR_19, VAR_25, VAR_26) <= 0) {
        FUNC_14(VAR_15, VAR_8, VAR_9,
                 VAR_10);
        goto err;
    }

    if (!FUNC_15(VAR_16, VAR_14 | VAR_13)
            || (VAR_19 >= 0x80 && !FUNC_15(VAR_16, 0x81))
            || !FUNC_16(VAR_16, VAR_22, VAR_19)) {
        FUNC_14(VAR_15, VAR_8, VAR_9,
                 VAR_0);
        goto err;
    }

    FUNC_6(VAR_17);
    VAR_15->s3.tmp.pms = VAR_25;
    VAR_15->s3.tmp.pmslen = VAR_26;

    return 1;
 err:
    FUNC_6(VAR_17);
    FUNC_11(VAR_25, VAR_26);
    FUNC_3(VAR_23);
    return 0;





}
