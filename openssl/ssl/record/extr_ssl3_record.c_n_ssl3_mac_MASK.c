
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {unsigned char* write_mac_secret; unsigned char* read_mac_secret; } ;
struct TYPE_8__ {int enc_read_ctx; int * read_hash; int rlayer; TYPE_1__ s3; int * write_hash; } ;
struct TYPE_7__ {unsigned char type; int length; unsigned char* input; int orig_len; } ;
typedef TYPE_2__ SSL3_RECORD ;
typedef TYPE_3__ SSL ;
typedef int EVP_MD_CTX ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int *,unsigned char*,unsigned int*) ;
 scalar_t__ FUNC_2 (int *,unsigned char*,size_t) ;
 scalar_t__ FUNC_3 (int *,int const*) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 () ;
 int FUNC_6 (int const*) ;
 unsigned char* FUNC_7 (int *) ;
 unsigned char* FUNC_8 (int *) ;
 int FUNC_9 (unsigned char*,unsigned char*,int) ;
 int FUNC_10 (int,unsigned char*) ;
 scalar_t__ FUNC_11 (int const*,unsigned char*,size_t*,unsigned char*,unsigned char*,int,int ,unsigned char*,size_t,int) ;
 scalar_t__ FUNC_12 (int const*) ;
 unsigned char* VAR_1 ;
 unsigned char* VAR_2 ;
 int FUNC_13 (unsigned char*) ;

int FUNC_14(SSL *VAR_3, SSL3_RECORD *VAR_4, unsigned char *VAR_5, int VAR_6)
{
    unsigned char *VAR_7, *VAR_8;
    const EVP_MD_CTX *VAR_9;
    unsigned char *VAR_10, VAR_11;
    size_t VAR_12;
    size_t VAR_13;
    int VAR_14;

    if (VAR_6) {
        VAR_7 = &(VAR_3->s3.write_mac_secret[0]);
        VAR_8 = FUNC_8(&VAR_3->rlayer);
        VAR_9 = VAR_3->write_hash;
    } else {
        VAR_7 = &(VAR_3->s3.read_mac_secret[0]);
        VAR_8 = FUNC_7(&VAR_3->rlayer);
        VAR_9 = VAR_3->read_hash;
    }

    VAR_14 = FUNC_6(VAR_9);
    if (VAR_14 < 0)
        return 0;
    VAR_12 = VAR_14;
    VAR_13 = (48 / VAR_12) * VAR_12;

    if (!VAR_6 &&
        FUNC_0(VAR_3->enc_read_ctx) == VAR_0 &&
        FUNC_12(VAR_9)) {
        unsigned char VAR_15[75];
        size_t VAR_16 = 0;
        FUNC_9(VAR_15 + VAR_16, VAR_7, VAR_12);
        VAR_16 += VAR_12;
        FUNC_9(VAR_15 + VAR_16, VAR_1, VAR_13);
        VAR_16 += VAR_13;
        FUNC_9(VAR_15 + VAR_16, VAR_8, 8);
        VAR_16 += 8;
        VAR_15[VAR_16++] = VAR_4->type;
        VAR_15[VAR_16++] = (unsigned char)(VAR_4->length >> 8);
        VAR_15[VAR_16++] = (unsigned char)(VAR_4->length & 0xff);


        if (FUNC_11(VAR_9,
                                   VAR_5, &VAR_12,
                                   VAR_15, VAR_4->input,
                                   VAR_4->length + VAR_12, VAR_4->orig_len,
                                   VAR_7, VAR_12, 1) <= 0)
            return 0;
    } else {
        unsigned int VAR_17;

        EVP_MD_CTX *VAR_18 = FUNC_5();

        if (VAR_18 == ((void*)0))
            return 0;

        VAR_11 = VAR_4->type;
        VAR_10 = VAR_5;
        FUNC_10(VAR_4->length, VAR_10);
        if (FUNC_3(VAR_18, VAR_9) <= 0
            || FUNC_2(VAR_18, VAR_7, VAR_12) <= 0
            || FUNC_2(VAR_18, VAR_1, VAR_13) <= 0
            || FUNC_2(VAR_18, VAR_8, 8) <= 0
            || FUNC_2(VAR_18, &VAR_11, 1) <= 0
            || FUNC_2(VAR_18, VAR_5, 2) <= 0
            || FUNC_2(VAR_18, VAR_4->input, VAR_4->length) <= 0
            || FUNC_1(VAR_18, VAR_5, ((void*)0)) <= 0
            || FUNC_3(VAR_18, VAR_9) <= 0
            || FUNC_2(VAR_18, VAR_7, VAR_12) <= 0
            || FUNC_2(VAR_18, VAR_2, VAR_13) <= 0
            || FUNC_2(VAR_18, VAR_5, VAR_12) <= 0
            || FUNC_1(VAR_18, VAR_5, &VAR_17) <= 0) {
            FUNC_4(VAR_18);
            return 0;
        }

        FUNC_4(VAR_18);
    }

    FUNC_13(VAR_8);
    return 1;
}
