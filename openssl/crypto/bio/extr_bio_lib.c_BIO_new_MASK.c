
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {int shutdown; int references; int init; int * lock; int ex_data; TYPE_1__ const* method; } ;
struct TYPE_10__ {int (* create ) (TYPE_2__*) ;} ;
typedef TYPE_1__ BIO_METHOD ;
typedef TYPE_2__ BIO ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int * FUNC_2 () ;
 int FUNC_3 (int ,TYPE_2__*,int *) ;
 int FUNC_4 (int ,TYPE_2__*,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (TYPE_2__*) ;
 TYPE_2__* FUNC_6 (int) ;
 int FUNC_7 (TYPE_2__*) ;

BIO *FUNC_8(const BIO_METHOD *VAR_4)
{
    BIO *VAR_5 = FUNC_6(sizeof(*VAR_5));

    if (VAR_5 == ((void*)0)) {
        FUNC_0(VAR_0, VAR_3);
        return ((void*)0);
    }

    VAR_5->method = VAR_4;
    VAR_5->shutdown = 1;
    VAR_5->references = 1;

    if (!FUNC_4(VAR_1, VAR_5, &VAR_5->ex_data))
        goto err;

    VAR_5->lock = FUNC_2();
    if (VAR_5->lock == ((void*)0)) {
        FUNC_0(VAR_0, VAR_3);
        FUNC_3(VAR_1, VAR_5, &VAR_5->ex_data);
        goto err;
    }

    if (VAR_4->create != ((void*)0) && !VAR_4->create(VAR_5)) {
        FUNC_0(VAR_0, VAR_2);
        FUNC_3(VAR_1, VAR_5, &VAR_5->ex_data);
        FUNC_1(VAR_5->lock);
        goto err;
    }
    if (VAR_4->create == ((void*)0))
        VAR_5->init = 1;

    return VAR_5;

err:
    FUNC_5(VAR_5);
    return ((void*)0);
}
