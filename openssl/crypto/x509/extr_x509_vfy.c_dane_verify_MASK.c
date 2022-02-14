
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {int (* verify_cb ) (int,TYPE_1__*) ;int error; int * current_cert; scalar_t__ error_depth; int chain; int * cert; TYPE_2__* dane; } ;
typedef TYPE_1__ X509_STORE_CTX ;
typedef int X509 ;
struct TYPE_13__ {scalar_t__ mdpth; int flags; } ;
typedef TYPE_2__ SSL_DANE ;


 int FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int *) ;
 int FUNC_4 (TYPE_1__*,int *,int ) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (int,TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*,int *,int ,int ) ;
 int FUNC_8 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_9(X509_STORE_CTX *VAR_3)
{
    X509 *VAR_4 = VAR_3->cert;
    SSL_DANE *VAR_5 = VAR_3->dane;
    int VAR_6;
    int VAR_7;

    FUNC_5(VAR_5);
    VAR_6 = FUNC_4(VAR_3, VAR_3->cert, 0);
    VAR_7 = VAR_6 != 0 || (!FUNC_0(VAR_5) && VAR_5->mdpth < 0);

    if (VAR_7)
        FUNC_1(((void*)0), VAR_3->chain);

    if (VAR_6 > 0) {

        if (!FUNC_3(VAR_3, VAR_4))
            return 0;

        if ((VAR_5->flags & VAR_0) == 0 &&
            !FUNC_2(VAR_3))
            return 0;

        VAR_3->error_depth = 0;
        VAR_3->current_cert = VAR_4;
        return VAR_3->verify_cb(1, VAR_3);
    }

    if (VAR_6 < 0) {
        VAR_3->error_depth = 0;
        VAR_3->current_cert = VAR_4;
        VAR_3->error = VAR_2;
        return -1;
    }

    if (VAR_7) {

        if (!FUNC_3(VAR_3, VAR_4))
            return 0;
        return FUNC_7(VAR_3, VAR_4, 0, VAR_1);
    }





    return FUNC_8(VAR_3);
}
