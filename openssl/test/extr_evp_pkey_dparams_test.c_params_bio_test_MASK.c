
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int type; scalar_t__ param_bin_len; int param_bin; } ;
typedef int EVP_PKEY_CTX ;
typedef int EVP_PKEY ;
typedef int BIO ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,unsigned char**) ;
 int * FUNC_2 (int ) ;
 int * FUNC_3 (int ,int) ;
 int FUNC_4 () ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int,int *) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int,int ) ;
 scalar_t__ FUNC_9 (int ,int,unsigned char*,int) ;
 scalar_t__ FUNC_10 (int *) ;
 int * FUNC_11 (int,int **,int *) ;
 int FUNC_12 (int *,int *) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static int FUNC_13(int VAR_1)
{
    int VAR_2, VAR_3;
    BIO *VAR_4 = ((void*)0), *VAR_5 = ((void*)0);
    EVP_PKEY_CTX *VAR_6 = ((void*)0);
    EVP_PKEY *VAR_7 = ((void*)0), *VAR_8 = ((void*)0);
    unsigned char *VAR_9;
    int VAR_10 = VAR_0[VAR_1].type;

    VAR_2 = FUNC_10(VAR_6 = FUNC_6(VAR_10, ((void*)0)))
        && FUNC_10(VAR_4 = FUNC_3(VAR_0[VAR_1].param_bin,
                                        (int)VAR_0[VAR_1].param_bin_len))

        && FUNC_10(FUNC_11(VAR_10, &VAR_7, VAR_4))
        && FUNC_10(VAR_5 = FUNC_2(FUNC_4()))

        && FUNC_8(FUNC_12(VAR_5, VAR_7), 0)

        && FUNC_8(VAR_3 = FUNC_1(VAR_5, &VAR_9), 0)
        && FUNC_9(VAR_0[VAR_1].param_bin,
                       (int)VAR_0[VAR_1].param_bin_len,
                       VAR_9, VAR_3);

    FUNC_0(VAR_4);
    FUNC_0(VAR_5);
    FUNC_7(VAR_7);
    FUNC_7(VAR_8);
    FUNC_5(VAR_6);
    return VAR_2;
}
