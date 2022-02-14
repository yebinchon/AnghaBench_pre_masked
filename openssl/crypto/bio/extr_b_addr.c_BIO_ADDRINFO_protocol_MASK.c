
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ bai_protocol; scalar_t__ bai_family; int bai_socktype; } ;
typedef TYPE_1__ BIO_ADDRINFO ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



int FUNC_0(const BIO_ADDRINFO *VAR_3)
{
    if (VAR_3 != ((void*)0)) {
        if (VAR_3->bai_protocol != 0)
            return VAR_3->bai_protocol;






        switch (VAR_3->bai_socktype) {
        case 128:
            return VAR_1;
        case 129:
            return VAR_2;
        default:
            break;
        }
    }
    return 0;
}
