
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sh_stream {int dummy; } ;
struct mp_recorder_sink {struct sh_stream* sh; } ;
struct mp_recorder {int num_streams; struct mp_recorder_sink** streams; } ;



struct mp_recorder_sink *FUNC_0(struct mp_recorder *VAR_0,
                                              struct sh_stream *VAR_1)
{
    for (int VAR_2 = 0; VAR_2 < VAR_0->num_streams; VAR_2++) {
        struct mp_recorder_sink *VAR_3 = VAR_0->streams[VAR_2];
        if (VAR_3->sh == VAR_1)
            return VAR_3;
    }
    return ((void*)0);
}
