
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct mp_recorder_sink {int dummy; } ;
struct mp_recorder {int num_streams; TYPE_1__* mux; struct mp_recorder_sink** streams; scalar_t__ opened; } ;
struct TYPE_3__ {int pb; } ;


 int FUNC_0 (struct mp_recorder*,char*) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (struct mp_recorder*) ;
 int FUNC_5 (struct mp_recorder_sink*,int) ;
 int FUNC_6 (struct mp_recorder*) ;

void FUNC_7(struct mp_recorder *VAR_0)
{
    if (VAR_0->opened) {
        for (int VAR_1 = 0; VAR_1 < VAR_0->num_streams; VAR_1++) {
            struct mp_recorder_sink *VAR_2 = VAR_0->streams[VAR_1];
            FUNC_5(VAR_2, 1);
        }

        if (FUNC_1(VAR_0->mux) < 0)
            FUNC_0(VAR_0, "Writing trailer failed.\n");
    }

    if (VAR_0->mux) {
        if (FUNC_3(&VAR_0->mux->pb) < 0)
            FUNC_0(VAR_0, "Closing file failed\n");

        FUNC_2(VAR_0->mux);
    }

    FUNC_4(VAR_0);
    FUNC_6(VAR_0);
}
