
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int num; scalar_t__ ptr; } ;
struct TYPE_4__ {scalar_t__ state; } ;
typedef TYPE_1__ BIO_CONNECT ;
typedef TYPE_2__ BIO ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static void FUNC_2(BIO *VAR_2)
{
    BIO_CONNECT *VAR_3;

    VAR_3 = (BIO_CONNECT *)VAR_2->ptr;
    if (VAR_2->num != (int)VAR_1) {

        if (VAR_3->state == VAR_0)
            FUNC_1(VAR_2->num, 2);
        FUNC_0(VAR_2->num);
        VAR_2->num = (int)VAR_1;
    }
}
