
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {TYPE_3__* cert; TYPE_2__* new_cipher; } ;
struct TYPE_12__ {TYPE_4__ tmp; } ;
struct TYPE_13__ {TYPE_5__ s3; TYPE_1__* cert; } ;
struct TYPE_10__ {int privatekey; } ;
struct TYPE_9__ {int algorithm_auth; int strength_bits; } ;
struct TYPE_8__ {int dh_tmp_auto; } ;
typedef TYPE_6__ SSL ;
typedef int DH ;
typedef int BIGNUM ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;
 int * FUNC_3 () ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 () ;
 int * FUNC_7 () ;
 int * FUNC_8 () ;
 int FUNC_9 (int *,int *,int *,int *) ;
 int FUNC_10 (int ) ;
 int VAR_0 ;
 int VAR_1 ;

DH *FUNC_11(SSL *VAR_2)
{
    int VAR_3 = 80;
    if (VAR_2->cert->dh_tmp_auto == 2)
        return FUNC_6();
    if (VAR_2->s3.tmp.new_cipher->algorithm_auth & (VAR_0 | VAR_1)) {
        if (VAR_2->s3.tmp.new_cipher->strength_bits == 256)
            VAR_3 = 128;
        else
            VAR_3 = 80;
    } else {
        if (VAR_2->s3.tmp.cert == ((void*)0))
            return ((void*)0);
        VAR_3 = FUNC_10(VAR_2->s3.tmp.cert->privatekey);
    }

    if (VAR_3 >= 128) {
        DH *VAR_4 = FUNC_8();
        BIGNUM *VAR_5, *VAR_6;
        if (VAR_4 == ((void*)0))
            return ((void*)0);
        VAR_6 = FUNC_3();
        if (VAR_6 == ((void*)0) || !FUNC_4(VAR_6, 2)) {
            FUNC_5(VAR_4);
            FUNC_0(VAR_6);
            return ((void*)0);
        }
        if (VAR_3 >= 192)
            VAR_5 = FUNC_2(((void*)0));
        else
            VAR_5 = FUNC_1(((void*)0));
        if (VAR_5 == ((void*)0) || !FUNC_9(VAR_4, VAR_5, ((void*)0), VAR_6)) {
            FUNC_5(VAR_4);
            FUNC_0(VAR_5);
            FUNC_0(VAR_6);
            return ((void*)0);
        }
        return VAR_4;
    }
    if (VAR_3 >= 112)
        return FUNC_7();
    return FUNC_6();
}
