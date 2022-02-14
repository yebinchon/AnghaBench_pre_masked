
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int retry_reason; } ;
struct TYPE_5__ {TYPE_3__* next_bio; int retry_reason; } ;
typedef TYPE_1__ BIO ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_1__*,int ) ;

void FUNC_2(BIO *VAR_0)
{
    FUNC_1(VAR_0, FUNC_0(VAR_0->next_bio));
    VAR_0->retry_reason = VAR_0->next_bio->retry_reason;
}
