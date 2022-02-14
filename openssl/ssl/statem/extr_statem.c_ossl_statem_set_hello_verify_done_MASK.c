
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int in_init; int hand_state; int state; } ;
struct TYPE_5__ {TYPE_1__ statem; } ;
typedef TYPE_2__ SSL ;


 int VAR_0 ;
 int VAR_1 ;

void FUNC_0(SSL *VAR_2)
{
    VAR_2->statem.state = VAR_0;
    VAR_2->statem.in_init = 1;







    VAR_2->statem.hand_state = VAR_1;
}
