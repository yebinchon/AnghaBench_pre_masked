
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ao_pull_state {int end_time_us; int * buffers; } ;
struct ao {int num_planes; TYPE_1__* driver; int stream_silence; struct ao_pull_state* api_priv; } ;
struct TYPE_2__ {int (* reset ) (struct ao*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct ao*,int ) ;
 int FUNC_3 (struct ao*) ;

__attribute__((used)) static void FUNC_4(struct ao *VAR_1)
{
    struct ao_pull_state *VAR_2 = VAR_1->api_priv;
    if (!VAR_1->stream_silence && VAR_1->driver->reset)
        VAR_1->driver->reset(VAR_1);
    FUNC_2(VAR_1, VAR_0);
    for (int VAR_3 = 0; VAR_3 < VAR_1->num_planes; VAR_3++)
        FUNC_1(VAR_2->buffers[VAR_3]);
    FUNC_0(&VAR_2->end_time_us, 0);
}
