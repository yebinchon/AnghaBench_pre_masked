
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int timeval; int ping_send_interval; } ;
struct TYPE_3__ {scalar_t__ ping_send_timeout; } ;
struct context {TYPE_2__ c2; TYPE_1__ options; } ;


 int VAR_0 ;
 int FUNC_0 (struct context*) ;
 scalar_t__ FUNC_1 (int *,int *,int) ;

__attribute__((used)) static inline void
FUNC_2(struct context *VAR_1)
{
    void FUNC_3(struct context *VAR_2);

    if (VAR_1->options.ping_send_timeout
        && FUNC_1(&VAR_1->c2.ping_send_interval,
                                 &VAR_1->c2.timeval,
                                 !FUNC_0(VAR_1) ? VAR_0 : 1))
    {
        FUNC_3(VAR_1);
    }
}
