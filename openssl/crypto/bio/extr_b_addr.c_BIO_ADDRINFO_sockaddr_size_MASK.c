
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int socklen_t ;
struct TYPE_3__ {int bai_addrlen; } ;
typedef TYPE_1__ BIO_ADDRINFO ;



socklen_t FUNC_0(const BIO_ADDRINFO *VAR_0)
{
    if (VAR_0 != ((void*)0))
        return VAR_0->bai_addrlen;
    return 0;
}
