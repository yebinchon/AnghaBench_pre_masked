
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ bai_addr; } ;
typedef TYPE_1__ BIO_ADDRINFO ;
typedef int const BIO_ADDR ;



const BIO_ADDR *FUNC_0(const BIO_ADDRINFO *VAR_0)
{
    if (VAR_0 != ((void*)0))
        return (BIO_ADDR *)VAR_0->bai_addr;
    return ((void*)0);
}
