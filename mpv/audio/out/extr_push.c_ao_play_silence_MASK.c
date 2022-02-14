
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ao_push_state {scalar_t__ silence; } ;
struct ao {TYPE_1__* driver; struct ao_push_state* api_priv; int * api; } ;
struct TYPE_2__ {int (* play ) (struct ao*,void**,int,int ) ;} ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct ao*,int) ;
 int FUNC_2 (struct ao*,void**,int,int ) ;

int FUNC_3(struct ao *VAR_1, int VAR_2)
{
    FUNC_0(VAR_1->api == &VAR_0);

    struct ao_push_state *VAR_3 = VAR_1->api_priv;

    if (!FUNC_1(VAR_1, VAR_2) || !VAR_1->driver->play)
        return 0;

    return VAR_1->driver->play(VAR_1, (void **)VAR_3->silence, VAR_2, 0);
}
