
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int fast_io; } ;
struct TYPE_4__ {int proto; } ;
struct TYPE_5__ {scalar_t__ shaper; TYPE_1__ ce; scalar_t__ fast_io; } ;
struct context {TYPE_3__ c2; TYPE_2__ options; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(struct context *VAR_1)
{
    if (VAR_1->options.fast_io)
    {



        if (!FUNC_1(VAR_1->options.ce.proto))
        {
            FUNC_0(VAR_0, "NOTE: --fast-io is disabled since we are not using UDP");
        }
        else
        {







            {
                VAR_1->c2.fast_io = 1;
            }
        }

    }
}
