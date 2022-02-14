
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int write_state; } ;
struct TYPE_4__ {TYPE_2__ statem; } ;
typedef TYPE_1__ SSL ;
typedef TYPE_2__ OSSL_STATEM ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(SSL *VAR_1)
{
    OSSL_STATEM *VAR_2 = &VAR_1->statem;

    VAR_2->write_state = VAR_0;
}
