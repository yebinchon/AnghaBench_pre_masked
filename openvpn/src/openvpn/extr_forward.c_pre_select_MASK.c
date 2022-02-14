
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int tuntap; } ;
struct TYPE_8__ {int tv_sec; scalar_t__ tv_usec; } ;
struct TYPE_7__ {TYPE_4__ timeval; } ;
struct context {TYPE_2__* sig; TYPE_1__ c1; TYPE_3__ c2; } ;
struct TYPE_6__ {scalar_t__ signal_received; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct context*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct context*) ;
 int FUNC_3 (struct context*) ;
 int FUNC_4 (struct context*) ;
 int FUNC_5 (struct context*) ;
 int FUNC_6 (struct context*) ;
 int FUNC_7 (struct context*) ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ) ;

void
FUNC_10(struct context *VAR_2)
{







    VAR_2->c2.timeval.tv_sec = VAR_0;
    VAR_2->c2.timeval.tv_usec = 0;
    FUNC_0(VAR_2);
    if (VAR_2->sig->signal_received)
    {
        return;
    }


    FUNC_6(VAR_2);


    FUNC_7(VAR_2);
    if (VAR_2->sig->signal_received)
    {
        return;
    }


    FUNC_3(VAR_2);
    FUNC_5(VAR_2);
}
