
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct priv {int num_ports; int buffer_size; int graph_latency_max; int * ports; } ;
struct ao {scalar_t__ samplerate; struct priv* priv; } ;
typedef double jack_nframes_t ;
typedef double int64_t ;


 int VAR_0 ;
 int FUNC_0 (struct ao*,void**,double,double) ;
 double FUNC_1 (int *) ;
 void* FUNC_2 (int ,double) ;
 double FUNC_3 () ;

__attribute__((used)) static int FUNC_4(jack_nframes_t VAR_1, void *VAR_2)
{
    struct ao *VAR_3 = VAR_2;
    struct priv *VAR_4 = VAR_3->priv;

    void *VAR_5[VAR_0];

    for (int VAR_6 = 0; VAR_6 < VAR_4->num_ports; VAR_6++)
        VAR_5[VAR_6] = FUNC_2(VAR_4->ports[VAR_6], VAR_1);

    jack_nframes_t VAR_7 =
        FUNC_1(&VAR_4->graph_latency_max) + FUNC_1(&VAR_4->buffer_size);

    int64_t VAR_8 = FUNC_3();
    VAR_8 += (VAR_7 + VAR_1) / (double)VAR_3->samplerate * 1000000.0;

    FUNC_0(VAR_3, VAR_5, VAR_1, VAR_8);

    return 0;
}
