
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ao_pull_state {int convert_buffer; } ;
struct ao {TYPE_1__* driver; struct ao_pull_state* api_priv; } ;
struct TYPE_2__ {int (* uninit ) (struct ao*) ;} ;


 int FUNC_0 (struct ao*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct ao *VAR_0)
{
    struct ao_pull_state *VAR_1 = VAR_0->api_priv;

    VAR_0->driver->uninit(VAR_0);

    FUNC_1(VAR_1->convert_buffer);
}
