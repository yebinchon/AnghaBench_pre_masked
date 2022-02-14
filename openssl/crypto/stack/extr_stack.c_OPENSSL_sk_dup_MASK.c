
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int num; int num_alloc; int * data; } ;
typedef TYPE_1__ OPENSSL_STACK ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 void* FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *,int *,int) ;

OPENSSL_STACK *FUNC_4(const OPENSSL_STACK *VAR_2)
{
    OPENSSL_STACK *VAR_3;

    if ((VAR_3 = FUNC_1(sizeof(*VAR_3))) == ((void*)0)) {
        FUNC_0(VAR_0, VAR_1);
        return ((void*)0);
    }


    *VAR_3 = *VAR_2;

    if (VAR_2->num == 0) {

        VAR_3->data = ((void*)0);
        VAR_3->num_alloc = 0;
        return VAR_3;
    }

    if ((VAR_3->data = FUNC_1(sizeof(*VAR_3->data) * VAR_2->num_alloc)) == ((void*)0))
        goto err;
    FUNC_3(VAR_3->data, VAR_2->data, sizeof(void *) * VAR_2->num);
    return VAR_3;
 err:
    FUNC_2(VAR_3);
    return ((void*)0);
}
