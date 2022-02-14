
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int pid_persist; } ;
struct TYPE_5__ {int packet_id; } ;
struct TYPE_6__ {TYPE_1__ crypto_options; } ;
struct context {TYPE_4__ c1; TYPE_3__* sig; TYPE_2__ c2; } ;
struct TYPE_7__ {scalar_t__ signal_received; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(struct context *VAR_1)
{
    FUNC_0(&VAR_1->c2.crypto_options.packet_id);
    FUNC_2(&VAR_1->c1.pid_persist);
    if (!(VAR_1->sig->signal_received == VAR_0))
    {
        FUNC_1(&VAR_1->c1.pid_persist);
    }
}
