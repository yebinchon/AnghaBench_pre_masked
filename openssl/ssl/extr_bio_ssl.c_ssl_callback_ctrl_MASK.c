
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* ssl; } ;
struct TYPE_4__ {int rbio; } ;
typedef TYPE_1__ SSL ;
typedef int BIO_info_cb ;
typedef TYPE_2__ BIO_SSL ;
typedef int BIO ;



 long FUNC_0 (int ,int,int *) ;
 TYPE_2__* FUNC_1 (int *) ;

__attribute__((used)) static long FUNC_2(BIO *VAR_0, int VAR_1, BIO_info_cb *VAR_2)
{
    SSL *VAR_3;
    BIO_SSL *VAR_4;
    long VAR_5 = 1;

    VAR_4 = FUNC_1(VAR_0);
    VAR_3 = VAR_4->ssl;
    switch (VAR_1) {
    case 128:
        VAR_5 = FUNC_0(VAR_3->rbio, VAR_1, VAR_2);
        break;
    default:
        VAR_5 = 0;
        break;
    }
    return VAR_5;
}
