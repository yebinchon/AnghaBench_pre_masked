
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int num_chmaps; int * chmaps; } ;
struct priv {int latency; int latency_sec; int bufferlen; int outburst; int buffersize; int last_time; TYPE_1__ channel_layouts; int untimed; scalar_t__ format; } ;
struct mp_chmap_sel {struct ao* tmp; } ;
struct ao {int samplerate; int period_size; int channels; int untimed; scalar_t__ format; struct priv* priv; } ;


 int FUNC_0 (struct ao*,struct mp_chmap_sel*,int *) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (struct mp_chmap_sel*) ;
 int FUNC_3 (struct mp_chmap_sel*,int *) ;
 int FUNC_4 () ;

__attribute__((used)) static int FUNC_5(struct ao *VAR_0)
{
    struct priv *VAR_1 = VAR_0->priv;

    if (VAR_1->format)
        VAR_0->format = VAR_1->format;

    VAR_0->untimed = VAR_1->untimed;

    struct mp_chmap_sel VAR_2 = {.tmp = VAR_0};
    if (VAR_1->channel_layouts.num_chmaps) {
        for (int VAR_3 = 0; VAR_3 < VAR_1->channel_layouts.num_chmaps; VAR_3++)
            FUNC_3(&VAR_2, &VAR_1->channel_layouts.chmaps[VAR_3]);
    } else {
        FUNC_2(&VAR_2);
    }
    if (!FUNC_0(VAR_0, &VAR_2, &VAR_0->channels))
        FUNC_1(&VAR_0->channels, 2);

    VAR_1->latency = VAR_1->latency_sec * VAR_0->samplerate;


    int VAR_4 = (int)(VAR_0->samplerate * VAR_1->bufferlen + 1) / VAR_1->outburst;
    VAR_1->buffersize = VAR_1->outburst * VAR_4 + VAR_1->latency;

    VAR_1->last_time = FUNC_4();

    VAR_0->period_size = VAR_1->outburst;

    return 0;
}
