
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ encoding; int input_len; int input; int output_len; int output; } ;
struct TYPE_5__ {char* err; TYPE_2__* data; } ;
typedef TYPE_1__ EVP_TEST ;
typedef unsigned char EVP_ENCODE_CTX ;
typedef TYPE_2__ ENCODE_DATA ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (unsigned char*,unsigned char*,int*) ;
 int FUNC_2 (unsigned char*) ;
 scalar_t__ FUNC_3 (unsigned char*,unsigned char*,int*,int ,int ) ;
 int FUNC_4 (unsigned char*) ;
 unsigned char* FUNC_5 () ;
 int FUNC_6 (int ) ;
 int FUNC_7 (unsigned char*,unsigned char*,int*) ;
 int FUNC_8 (unsigned char*) ;
 int FUNC_9 (unsigned char*,unsigned char*,int*,int ,int ) ;
 int FUNC_10 (unsigned char*) ;
 unsigned char* FUNC_11 (int ) ;
 int FUNC_12 (unsigned char*) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (TYPE_1__*,char*,int ,int ,unsigned char*,int) ;

__attribute__((used)) static int FUNC_15(EVP_TEST *VAR_2)
{
    ENCODE_DATA *VAR_3 = VAR_2->data;
    unsigned char *VAR_4 = ((void*)0), *VAR_5 = ((void*)0);
    int VAR_6, VAR_7;
    EVP_ENCODE_CTX *VAR_8 = ((void*)0), *VAR_9 = ((void*)0);

    if (!FUNC_12(VAR_8 = FUNC_5())) {
        VAR_2->err = "INTERNAL_ERROR";
        goto err;
    }

    if (VAR_3->encoding == VAR_0) {

        if (!FUNC_12(VAR_9 = FUNC_5())
                || !FUNC_12(VAR_4 =
                        FUNC_11(FUNC_6(VAR_3->input_len))))
            goto err;

        FUNC_8(VAR_9);
        if (!FUNC_13(FUNC_9(VAR_9, VAR_4, &VAR_7,
                                        VAR_3->input, VAR_3->input_len)))
            goto err;

        VAR_6 = VAR_7;

        FUNC_7(VAR_9, VAR_4 + VAR_7, &VAR_7);
        VAR_6 += VAR_7;

        if (!FUNC_14(VAR_2, "BAD_ENCODING",
                                VAR_3->output, VAR_3->output_len,
                                VAR_4, VAR_6))
            goto err;
    }

    if (!FUNC_12(VAR_5 =
                FUNC_11(FUNC_0(VAR_3->output_len))))
        goto err;

    FUNC_2(VAR_8);
    if (FUNC_3(VAR_8, VAR_5, &VAR_7, VAR_3->output,
                         VAR_3->output_len) < 0) {
        VAR_2->err = "DECODE_ERROR";
        goto err;
    }
    VAR_6 = VAR_7;

    if (FUNC_1(VAR_8, VAR_5 + VAR_7, &VAR_7) != 1) {
        VAR_2->err = "DECODE_ERROR";
        goto err;
    }
    VAR_6 += VAR_7;

    if (VAR_3->encoding != VAR_1
            && !FUNC_14(VAR_2, "BAD_DECODING",
                                   VAR_3->input, VAR_3->input_len,
                                   VAR_5, VAR_6)) {
        VAR_2->err = "BAD_DECODING";
        goto err;
    }

    VAR_2->err = ((void*)0);
 err:
    FUNC_10(VAR_4);
    FUNC_10(VAR_5);
    FUNC_4(VAR_8);
    FUNC_4(VAR_9);
    return 1;
}
