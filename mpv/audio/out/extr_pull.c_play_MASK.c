
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ao_pull_state {int underflow; int draining; int state; int * buffers; } ;
struct ao {int sstride; int num_planes; TYPE_1__* driver; int stream_silence; struct ao_pull_state* api_priv; } ;
struct TYPE_2__ {int (* resume ) (struct ao*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (struct ao*,char*,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (struct ao*) ;
 int FUNC_8 (int ,void*,int) ;
 int FUNC_9 (struct ao*,int ) ;
 int FUNC_10 (struct ao*) ;

__attribute__((used)) static int FUNC_11(struct ao *VAR_2, void **VAR_3, int VAR_4, int VAR_5)
{
    struct ao_pull_state *VAR_6 = VAR_2->api_priv;

    int VAR_7 = FUNC_7(VAR_2);
    VAR_7 = FUNC_1(VAR_7, VAR_4);




    int VAR_8 = VAR_7 * VAR_2->sstride;
    for (int VAR_9 = VAR_2->num_planes - 1; VAR_9 >= 0; VAR_9--) {
        int VAR_10 = FUNC_8(VAR_6->buffers[VAR_9], VAR_3[VAR_9], VAR_8);
        FUNC_3(VAR_10 == VAR_8);
    }

    int VAR_11 = FUNC_5(&VAR_6->state);
    if (!FUNC_0(VAR_11)) {
        FUNC_6(&VAR_6->draining, 0);
        FUNC_6(&VAR_6->underflow, 0);
        FUNC_9(VAR_2, VAR_1);
        if (!VAR_2->stream_silence)
            VAR_2->driver->resume(VAR_2);
    }

    bool VAR_12 = VAR_7 == VAR_4 && (VAR_5 & VAR_0);
    FUNC_6(&VAR_6->draining, VAR_12);

    int VAR_13 = FUNC_4(&VAR_6->underflow, 0);
    if (VAR_13)
        FUNC_2(VAR_2, "Audio underflow by %d samples.\n", VAR_13);

    return VAR_7;
}
