
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_recorder_sink {int discont; int proper_eof; } ;
struct mp_recorder {int num_streams; int muxing; int muxing_from_start; struct mp_recorder_sink** streams; } ;


 int FUNC_0 (struct mp_recorder*) ;
 int FUNC_1 (struct mp_recorder_sink*,int) ;

void FUNC_2(struct mp_recorder *VAR_0)
{
    FUNC_0(VAR_0);

    for (int VAR_1 = 0; VAR_1 < VAR_0->num_streams; VAR_1++) {
        struct mp_recorder_sink *VAR_2 = VAR_0->streams[VAR_1];
        FUNC_1(VAR_2, 1);
        VAR_2->discont = 1;
        VAR_2->proper_eof = 0;
    }

    VAR_0->muxing = 0;
    VAR_0->muxing_from_start = 0;
}
