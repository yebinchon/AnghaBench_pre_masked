
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ao_pull_state {int state; int * buffers; } ;
struct ao {int num_planes; int buffer; int sstride; TYPE_1__* driver; scalar_t__ stream_silence; struct ao_pull_state* api_priv; } ;
struct TYPE_2__ {int (* resume ) (struct ao*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int (*) (struct ao*)) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct ao*,int) ;
 int FUNC_3 (struct ao*) ;

__attribute__((used)) static int FUNC_4(struct ao *VAR_1)
{
    struct ao_pull_state *VAR_2 = VAR_1->api_priv;
    for (int VAR_3 = 0; VAR_3 < VAR_1->num_planes; VAR_3++)
        VAR_2->buffers[VAR_3] = FUNC_2(VAR_1, VAR_1->buffer * VAR_1->sstride);
    FUNC_1(&VAR_2->state, VAR_0);
    FUNC_0(VAR_1->driver->resume);

    if (VAR_1->stream_silence)
        VAR_1->driver->resume(VAR_1);

    return 0;
}
