
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int tls_exit_signal; } ;
struct TYPE_3__ {scalar_t__ tls_exit; } ;
struct context {TYPE_2__ c2; TYPE_1__ options; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_0(struct context *VAR_2)
{
    if (VAR_2->options.tls_exit)
    {
        VAR_2->c2.tls_exit_signal = VAR_0;
    }
    else
    {
        VAR_2->c2.tls_exit_signal = VAR_1;
    }
}
