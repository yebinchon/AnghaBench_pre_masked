
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int actual; } ;
struct TYPE_8__ {TYPE_3__ link_socket_addr; } ;
struct TYPE_6__ {int ping_timer_remote; scalar_t__ ping_rec_timeout; } ;
struct TYPE_5__ {int timeval; int ping_rec_interval; } ;
struct context {TYPE_4__ c1; TYPE_2__ options; TYPE_1__ c2; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int *,int) ;
 scalar_t__ FUNC_1 (int *) ;

__attribute__((used)) static inline void
FUNC_2(struct context *VAR_1)
{
    void FUNC_3(struct context *VAR_2);

    if (VAR_1->options.ping_rec_timeout
        && FUNC_0(&VAR_1->c2.ping_rec_interval,
                                 &VAR_1->c2.timeval,
                                 (!VAR_1->options.ping_timer_remote
                                  || FUNC_1(&VAR_1->c1.link_socket_addr.actual))
                                 ? VAR_0 : 15))
    {
        FUNC_3(VAR_1);
    }
}
