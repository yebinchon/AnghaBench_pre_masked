
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_13__ {TYPE_3__* store; } ;
typedef TYPE_2__ X509_STORE_CTX ;
struct TYPE_14__ {int get_cert_methods; int objs; } ;
typedef TYPE_3__ X509_STORE ;
struct TYPE_12__ {int * ptr; } ;
struct TYPE_15__ {TYPE_1__ data; int type; } ;
typedef TYPE_4__ X509_OBJECT ;
typedef int X509_NAME ;
typedef int X509_LOOKUP_TYPE ;
typedef int X509_LOOKUP ;


 int FUNC_0 (int *,int ,int *,TYPE_4__*) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_4__* FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (int ) ;
 int * FUNC_6 (int ,int) ;

int FUNC_7(X509_STORE_CTX *VAR_2, X509_LOOKUP_TYPE VAR_3,
                                  X509_NAME *VAR_4, X509_OBJECT *VAR_5)
{
    X509_STORE *VAR_6 = VAR_2->store;
    X509_LOOKUP *VAR_7;
    X509_OBJECT VAR_8, *VAR_9;
    int VAR_10, VAR_11;

    if (VAR_6 == ((void*)0))
        return 0;

    VAR_8.type = VAR_1;
    VAR_8.data.ptr = ((void*)0);


    FUNC_3(VAR_6);
    VAR_9 = FUNC_1(VAR_6->objs, VAR_3, VAR_4);
    FUNC_4(VAR_6);

    if (VAR_9 == ((void*)0) || VAR_3 == VAR_0) {
        for (VAR_10 = 0; VAR_10 < FUNC_5(VAR_6->get_cert_methods); VAR_10++) {
            VAR_7 = FUNC_6(VAR_6->get_cert_methods, VAR_10);
            VAR_11 = FUNC_0(VAR_7, VAR_3, VAR_4, &VAR_8);
            if (VAR_11) {
                VAR_9 = &VAR_8;
                break;
            }
        }
        if (VAR_9 == ((void*)0))
            return 0;
    }

    if (!FUNC_2(VAR_9))
        return 0;

    VAR_5->type = VAR_9->type;
    VAR_5->data.ptr = VAR_9->data.ptr;

    return 1;
}
