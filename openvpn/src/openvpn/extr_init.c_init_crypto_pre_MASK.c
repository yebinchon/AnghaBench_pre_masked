
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ use_prediction_resistance; scalar_t__ packet_id_file; scalar_t__ engine; } ;
struct TYPE_3__ {int pid_persist; } ;
struct context {TYPE_2__ options; TYPE_1__ c1; } ;


 unsigned int const VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 () ;

__attribute__((used)) static void
FUNC_3(struct context *VAR_1, const unsigned int VAR_2)
{
    if (VAR_1->options.engine)
    {
        FUNC_0(VAR_1->options.engine);
    }

    if (VAR_2 & VAR_0)
    {

        if (VAR_1->options.packet_id_file)
        {
            FUNC_1(&VAR_1->c1.pid_persist, VAR_1->options.packet_id_file);
        }
    }







}
