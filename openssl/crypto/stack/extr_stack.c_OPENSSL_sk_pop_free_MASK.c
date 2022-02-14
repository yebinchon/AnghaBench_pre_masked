
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int num; int ** data; } ;
typedef int (* OPENSSL_sk_freefunc ) (char*) ;
typedef TYPE_1__ OPENSSL_STACK ;


 int FUNC_0 (TYPE_1__*) ;

void FUNC_1(OPENSSL_STACK *VAR_0, OPENSSL_sk_freefunc VAR_1)
{
    int VAR_2;

    if (VAR_0 == ((void*)0))
        return;
    for (VAR_2 = 0; VAR_2 < VAR_0->num; VAR_2++)
        if (VAR_0->data[VAR_2] != ((void*)0))
            VAR_1((char *)VAR_0->data[VAR_2]);
    FUNC_0(VAR_0);
}
