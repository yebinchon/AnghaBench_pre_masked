
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ao_push_state {int thread; int buffer; int wakeup_pipe; int wakeup; int lock; } ;
struct ao {scalar_t__ device_buffer; int buffer; int samplerate; int channels; int format; struct ao_push_state* api_priv; } ;


 int FUNC_0 (struct ao*,char*) ;
 int FUNC_1 (struct ao*) ;
 int FUNC_2 (struct ao*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,int *,int ) ;
 int FUNC_5 (int ) ;
 int VAR_0 ;
 int FUNC_6 (int *,int *) ;
 scalar_t__ FUNC_7 (int *,int *,int ,struct ao*) ;
 int FUNC_8 (int *,int *) ;

__attribute__((used)) static int FUNC_9(struct ao *VAR_1)
{
    struct ao_push_state *VAR_2 = VAR_1->api_priv;

    FUNC_8(&VAR_2->lock, ((void*)0));
    FUNC_6(&VAR_2->wakeup, ((void*)0));
    FUNC_5(VAR_2->wakeup_pipe);

    if (VAR_1->device_buffer <= 0) {
        FUNC_0(VAR_1, "Couldn't probe device buffer size.\n");
        goto err;
    }

    VAR_2->buffer = FUNC_2(VAR_1);
    FUNC_4(VAR_2->buffer, VAR_1->format,
                               &VAR_1->channels, VAR_1->samplerate);
    FUNC_3(VAR_2->buffer, VAR_1->buffer);
    if (FUNC_7(&VAR_2->thread, ((void*)0), VAR_0, VAR_1))
        goto err;
    return 0;
err:
    FUNC_1(VAR_1);
    return -1;
}
