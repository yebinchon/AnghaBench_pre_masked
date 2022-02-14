
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_recorder_sink {int num_packets; int * packets; } ;
struct mp_recorder {int num_streams; struct mp_recorder_sink** streams; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct mp_recorder *VAR_0)
{
    for (int VAR_1 = 0; VAR_1 < VAR_0->num_streams; VAR_1++) {
        struct mp_recorder_sink *VAR_2 = VAR_0->streams[VAR_1];
        for (int VAR_3 = 0; VAR_3 < VAR_2->num_packets; VAR_3++)
            FUNC_0(VAR_2->packets[VAR_3]);
        VAR_2->num_packets = 0;
    }
}
