
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ ptr; } ;
struct TYPE_4__ {int * info_callback; } ;
typedef int BIO_info_cb ;
typedef TYPE_1__ BIO_CONNECT ;
typedef TYPE_2__ BIO ;




__attribute__((used)) static long FUNC_0(BIO *VAR_0, int VAR_1, BIO_info_cb *VAR_2)
{
    long VAR_3 = 1;
    BIO_CONNECT *VAR_4;

    VAR_4 = (BIO_CONNECT *)VAR_0->ptr;

    switch (VAR_1) {
    case 128:
        {
            VAR_4->info_callback = VAR_2;
        }
        break;
    default:
        VAR_3 = 0;
        break;
    }
    return VAR_3;
}
