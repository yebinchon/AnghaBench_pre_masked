
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ connect_timeout; } ;
struct TYPE_6__ {TYPE_2__ ce; } ;
struct TYPE_4__ {int server_poll_interval; } ;
struct context {TYPE_3__ options; TYPE_1__ c2; } ;


 int FUNC_0 (int *,scalar_t__,int ) ;
 int VAR_0 ;
 int FUNC_1 () ;

__attribute__((used)) static void
FUNC_2(struct context *VAR_1)
{
    FUNC_1();
    if (VAR_1->options.ce.connect_timeout)
    {
        FUNC_0(&VAR_1->c2.server_poll_interval, VAR_1->options.ce.connect_timeout, VAR_0);
    }
}
