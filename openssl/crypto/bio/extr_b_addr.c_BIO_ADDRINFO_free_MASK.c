
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* bai_addr; struct TYPE_5__* bai_next; } ;
typedef TYPE_1__ BIO_ADDRINFO ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;

void FUNC_2(BIO_ADDRINFO *VAR_1)
{
    if (VAR_1 == ((void*)0))
        return;
    while (VAR_1 != ((void*)0)) {
        BIO_ADDRINFO *VAR_2 = VAR_1->bai_next;
        FUNC_0(VAR_1->bai_addr);
        FUNC_0(VAR_1);
        VAR_1 = VAR_2;
    }
}
