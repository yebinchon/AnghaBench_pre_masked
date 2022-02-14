
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int cache; int references; int * get_cert_methods; int * objs; int * param; int * lock; int ex_data; } ;
typedef TYPE_1__ X509_STORE ;


 int VAR_0 ;
 int * FUNC_0 () ;
 int FUNC_1 (int ,TYPE_1__*,int *) ;
 int VAR_1 ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_1__* FUNC_3 (int) ;
 int VAR_2 ;
 int FUNC_4 (int *) ;
 int * FUNC_5 () ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 () ;
 int FUNC_9 (int *) ;
 int * FUNC_10 (int ) ;
 int VAR_3 ;

X509_STORE *FUNC_11(void)
{
    X509_STORE *VAR_4 = FUNC_3(sizeof(*VAR_4));

    if (VAR_4 == ((void*)0)) {
        FUNC_6(VAR_2, VAR_1);
        return ((void*)0);
    }
    if ((VAR_4->objs = FUNC_10(VAR_3)) == ((void*)0)) {
        FUNC_6(VAR_2, VAR_1);
        goto err;
    }
    VAR_4->cache = 1;
    if ((VAR_4->get_cert_methods = FUNC_8()) == ((void*)0)) {
        FUNC_6(VAR_2, VAR_1);
        goto err;
    }

    if ((VAR_4->param = FUNC_5()) == ((void*)0)) {
        FUNC_6(VAR_2, VAR_1);
        goto err;
    }
    if (!FUNC_1(VAR_0, VAR_4, &VAR_4->ex_data)) {
        FUNC_6(VAR_2, VAR_1);
        goto err;
    }

    VAR_4->lock = FUNC_0();
    if (VAR_4->lock == ((void*)0)) {
        FUNC_6(VAR_2, VAR_1);
        goto err;
    }

    VAR_4->references = 1;
    return VAR_4;

err:
    FUNC_4(VAR_4->param);
    FUNC_9(VAR_4->objs);
    FUNC_7(VAR_4->get_cert_methods);
    FUNC_2(VAR_4);
    return ((void*)0);
}
