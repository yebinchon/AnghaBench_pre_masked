
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * next_bio; } ;
typedef int BIO_info_cb ;
typedef TYPE_1__ BIO ;


 long FUNC_0 (int *,int,int *) ;

__attribute__((used)) static long FUNC_1(BIO *VAR_0, int VAR_1, BIO_info_cb *VAR_2)
{
    long VAR_3 = 1;

    if (VAR_0->next_bio == ((void*)0))
        return 0;
    switch (VAR_1) {
    default:
        VAR_3 = FUNC_0(VAR_0->next_bio, VAR_1, VAR_2);
        break;
    }
    return VAR_3;
}
