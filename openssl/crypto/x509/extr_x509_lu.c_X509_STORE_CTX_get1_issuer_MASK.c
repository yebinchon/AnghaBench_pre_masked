
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_17__ {scalar_t__ (* check_issued ) (TYPE_2__*,int *,int *) ;TYPE_3__* store; } ;
typedef TYPE_2__ X509_STORE_CTX ;
struct TYPE_18__ {int objs; } ;
typedef TYPE_3__ X509_STORE ;
struct TYPE_16__ {int * x509; } ;
struct TYPE_19__ {scalar_t__ type; TYPE_1__ data; } ;
typedef TYPE_4__ X509_OBJECT ;
typedef int X509_NAME ;
typedef int X509 ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *,int ) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (int ,scalar_t__,int *) ;
 TYPE_4__* FUNC_3 () ;
 int FUNC_4 (TYPE_2__*,scalar_t__,int *,TYPE_4__*) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*) ;
 int * FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ) ;
 TYPE_4__* FUNC_11 (int ,int) ;
 scalar_t__ FUNC_12 (TYPE_2__*,int *,int *) ;
 scalar_t__ FUNC_13 (TYPE_2__*,int *,int *) ;
 scalar_t__ FUNC_14 (TYPE_2__*,int *,int) ;

int FUNC_15(X509 **VAR_1, X509_STORE_CTX *VAR_2, X509 *VAR_3)
{
    X509_NAME *VAR_4;
    X509_OBJECT *VAR_5 = FUNC_3(), *VAR_6 = ((void*)0);
    X509_STORE *VAR_7 = VAR_2->store;
    int VAR_8, VAR_9, VAR_10, VAR_11;

    if (VAR_5 == ((void*)0))
        return -1;
    *VAR_1 = ((void*)0);
    VAR_4 = FUNC_7(VAR_3);
    VAR_9 = FUNC_4(VAR_2, VAR_0, VAR_4, VAR_5);
    if (VAR_9 != 1) {
        FUNC_1(VAR_5);
        return 0;
    }

    if (VAR_2->check_issued(VAR_2, VAR_3, VAR_5->data.x509)) {
        if (FUNC_14(VAR_2, VAR_5->data.x509, -1)) {
            *VAR_1 = VAR_5->data.x509;
            if (!FUNC_9(*VAR_1)) {
                *VAR_1 = ((void*)0);
                VAR_9 = -1;
            }
            FUNC_1(VAR_5);
            return VAR_9;
        }
    }
    FUNC_1(VAR_5);

    if (VAR_7 == ((void*)0))
        return 0;


    VAR_11 = 0;
    FUNC_5(VAR_7);
    VAR_10 = FUNC_2(VAR_7->objs, VAR_0, VAR_4);
    if (VAR_10 != -1) {


        for (VAR_8 = VAR_10; VAR_8 < FUNC_10(VAR_7->objs); VAR_8++) {
            VAR_6 = FUNC_11(VAR_7->objs, VAR_8);

            if (VAR_6->type != VAR_0)
                break;
            if (FUNC_0(VAR_4, FUNC_8(VAR_6->data.x509)))
                break;
            if (VAR_2->check_issued(VAR_2, VAR_3, VAR_6->data.x509)) {
                *VAR_1 = VAR_6->data.x509;
                VAR_11 = 1;







                if (FUNC_14(VAR_2, *VAR_1, -1))
                    break;
            }
        }
    }
    if (*VAR_1 && !FUNC_9(*VAR_1)) {
        *VAR_1 = ((void*)0);
        VAR_11 = -1;
    }
    FUNC_6(VAR_7);
    return VAR_11;
}
