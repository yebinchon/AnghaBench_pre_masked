
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int log_rw; } ;
struct TYPE_3__ {int mute; int verbosity; } ;
struct context {TYPE_2__ c2; TYPE_1__ options; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;

void
FUNC_4(struct context *VAR_6, unsigned int VAR_7)
{
    if (VAR_7 & VAR_3)
    {

        FUNC_1(VAR_0, VAR_2);
        FUNC_2(VAR_6->options.verbosity, VAR_5);
        FUNC_3(VAR_6->options.mute);
    }


    if (VAR_7 & VAR_4)
    {
        VAR_6->c2.log_rw = (FUNC_0(VAR_1) && !FUNC_0(VAR_1 + 1));
    }
}
