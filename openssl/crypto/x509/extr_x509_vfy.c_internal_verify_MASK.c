
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int error_depth; int chain; int (* verify_cb ) (int,TYPE_2__*) ;int * current_cert; int * current_issuer; TYPE_1__* param; scalar_t__ (* check_issued ) (TYPE_2__*,int *,int *) ;scalar_t__ bare_ta_signed; } ;
typedef TYPE_2__ X509_STORE_CTX ;
typedef int X509 ;
struct TYPE_8__ {int flags; } ;
typedef int EVP_PKEY ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,int *) ;
 int FUNC_2 (int ) ;
 int * FUNC_3 (int ,int) ;
 scalar_t__ FUNC_4 (TYPE_2__*,int *,int *) ;
 int FUNC_5 (int,TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*,int *,int,int ) ;
 int FUNC_7 (TYPE_2__*,int *,int) ;

__attribute__((used)) static int FUNC_8(X509_STORE_CTX *VAR_5)
{
    int VAR_6 = FUNC_2(VAR_5->chain) - 1;
    X509 *VAR_7 = FUNC_3(VAR_5->chain, VAR_6);
    X509 *VAR_8;






    if (VAR_5->bare_ta_signed) {
        VAR_8 = VAR_7;
        VAR_7 = ((void*)0);
        goto check_cert;
    }

    if (VAR_5->check_issued(VAR_5, VAR_7, VAR_7))
        VAR_8 = VAR_7;
    else {
        if (VAR_5->param->flags & VAR_4) {
            VAR_8 = VAR_7;
            goto check_cert;
        }
        if (VAR_6 <= 0)
            return FUNC_6(VAR_5, VAR_7, 0,
                                  VAR_2);
        VAR_6--;
        VAR_5->error_depth = VAR_6;
        VAR_8 = FUNC_3(VAR_5->chain, VAR_6);
    }





    while (VAR_6 >= 0) {
        EVP_PKEY *VAR_9;







        if (VAR_8 != VAR_7 || (VAR_5->param->flags & VAR_3)) {
            if ((VAR_9 = FUNC_0(VAR_7)) == ((void*)0)) {
                if (!FUNC_6(VAR_5, VAR_7, VAR_7 != VAR_8 ? VAR_6+1 : VAR_6,
                        VAR_1))
                    return 0;
            } else if (FUNC_1(VAR_8, VAR_9) <= 0) {
                if (!FUNC_6(VAR_5, VAR_8, VAR_6,
                                    VAR_0))
                    return 0;
            }
        }

 check_cert:

        if (!FUNC_7(VAR_5, VAR_8, VAR_6))
            return 0;





        VAR_5->current_issuer = VAR_7;
        VAR_5->current_cert = VAR_8;
        VAR_5->error_depth = VAR_6;
        if (!VAR_5->verify_cb(1, VAR_5))
            return 0;

        if (--VAR_6 >= 0) {
            VAR_7 = VAR_8;
            VAR_8 = FUNC_3(VAR_5->chain, VAR_6);
        }
    }
    return 1;
}
