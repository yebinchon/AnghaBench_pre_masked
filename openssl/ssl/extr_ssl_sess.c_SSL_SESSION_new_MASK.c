
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int verify_result; int references; int timeout; unsigned long time; int * lock; int ex_data; } ;
typedef TYPE_1__ SSL_SESSION ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 int FUNC_2 (int ,TYPE_1__*,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ,int *) ;
 TYPE_1__* FUNC_5 (int) ;
 int VAR_3 ;
 int FUNC_6 (int ,int ) ;
 scalar_t__ FUNC_7 (int *) ;

SSL_SESSION *FUNC_8(void)
{
    SSL_SESSION *VAR_4;

    if (!FUNC_4(VAR_2, ((void*)0)))
        return ((void*)0);

    VAR_4 = FUNC_5(sizeof(*VAR_4));
    if (VAR_4 == ((void*)0)) {
        FUNC_6(VAR_3, VAR_1);
        return ((void*)0);
    }

    VAR_4->verify_result = 1;
    VAR_4->references = 1;
    VAR_4->timeout = 60 * 5 + 4;
    VAR_4->time = (unsigned long)FUNC_7(((void*)0));
    VAR_4->lock = FUNC_1();
    if (VAR_4->lock == ((void*)0)) {
        FUNC_6(VAR_3, VAR_1);
        FUNC_3(VAR_4);
        return ((void*)0);
    }

    if (!FUNC_2(VAR_0, VAR_4, &VAR_4->ex_data)) {
        FUNC_0(VAR_4->lock);
        FUNC_3(VAR_4);
        return ((void*)0);
    }
    return VAR_4;
}
