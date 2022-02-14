
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int read_hash; int * session; int * enc_read_ctx; int * enc_write_ctx; } ;
struct TYPE_7__ {unsigned char* data; unsigned char* input; size_t length; } ;
typedef TYPE_1__ SSL3_RECORD ;
typedef TYPE_2__ SSL ;
typedef int EVP_CIPHER_CTX ;
typedef int EVP_CIPHER ;


 int VAR_0 ;
 size_t FUNC_0 (int *) ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int *,unsigned char*,unsigned char*,unsigned int) ;
 int * FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (TYPE_2__*,int ,int ,int ) ;
 int FUNC_6 (unsigned char*,unsigned char*,size_t) ;
 int FUNC_7 (unsigned char*,int ,size_t) ;
 int FUNC_8 (TYPE_1__*,size_t,size_t) ;

int FUNC_9(SSL *VAR_3, SSL3_RECORD *VAR_4, size_t VAR_5, int VAR_6)
{
    SSL3_RECORD *VAR_7;
    EVP_CIPHER_CTX *VAR_8;
    size_t VAR_9, VAR_10;
    size_t VAR_11, VAR_12 = 0;
    int VAR_13;
    const EVP_CIPHER *VAR_14;

    VAR_7 = VAR_4;



    if (VAR_5 != 1)
        return 0;
    if (VAR_6) {
        VAR_8 = VAR_3->enc_write_ctx;
        if (VAR_3->enc_write_ctx == ((void*)0))
            VAR_14 = ((void*)0);
        else
            VAR_14 = FUNC_1(VAR_3->enc_write_ctx);
    } else {
        VAR_8 = VAR_3->enc_read_ctx;
        if (VAR_3->enc_read_ctx == ((void*)0))
            VAR_14 = ((void*)0);
        else
            VAR_14 = FUNC_1(VAR_3->enc_read_ctx);
    }

    if ((VAR_3->session == ((void*)0)) || (VAR_8 == ((void*)0)) || (VAR_14 == ((void*)0))) {
        FUNC_6(VAR_7->data, VAR_7->input, VAR_7->length);
        VAR_7->input = VAR_7->data;
    } else {
        VAR_9 = VAR_7->length;

        VAR_11 = FUNC_0(VAR_8);



        if ((VAR_11 != 1) && VAR_6) {
            VAR_10 = VAR_11 - (VAR_9 % VAR_11);


            VAR_9 += VAR_10;




            FUNC_7(&VAR_7->input[VAR_7->length], 0, VAR_10);
            VAR_7->length += VAR_10;
            VAR_7->input[VAR_9 - 1] = (unsigned char)(VAR_10 - 1);
        }

        if (!VAR_6) {
            if (VAR_9 == 0 || VAR_9 % VAR_11 != 0)
                return 0;

        }


        if (FUNC_2(VAR_8, VAR_7->data, VAR_7->input, (unsigned int)VAR_9) < 1)
            return -1;

        if (FUNC_3(VAR_3->read_hash) != ((void*)0)) {

            VAR_13 = FUNC_4(VAR_3->read_hash);
            if (VAR_13 < 0) {
                FUNC_5(VAR_3, VAR_1, VAR_2,
                         VAR_0);
                return -1;
            }
            VAR_12 = (size_t)VAR_13;
        }
        if ((VAR_11 != 1) && !VAR_6)
            return FUNC_8(VAR_7, VAR_11, VAR_12);
    }
    return 1;
}
