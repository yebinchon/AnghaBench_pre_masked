
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct mp_recorder_sink {int num_packets; TYPE_1__** packets; struct mp_recorder* owner; } ;
struct mp_recorder {int muxing; } ;
struct TYPE_5__ {scalar_t__ keyframe; } ;


 int FUNC_0 (TYPE_1__**,TYPE_1__**,int) ;
 int FUNC_1 (struct mp_recorder_sink*,TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_3(struct mp_recorder_sink *VAR_0, bool VAR_1)
{
    struct mp_recorder *VAR_2 = VAR_0->owner;
    if (!VAR_2->muxing || !VAR_0->num_packets)
        return;

    int VAR_3 = 0;
    for (int VAR_4 = 0; VAR_4 < VAR_0->num_packets; VAR_4++) {
        if (VAR_0->packets[VAR_4]->keyframe)
            VAR_3 = VAR_4;
    }
    if (VAR_1)
        VAR_3 = VAR_0->num_packets;

    for (int VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {
        FUNC_1(VAR_0, VAR_0->packets[VAR_5]);
        FUNC_2(VAR_0->packets[VAR_5]);
    }


    FUNC_0(&VAR_0->packets[0], &VAR_0->packets[VAR_3],
            (VAR_0->num_packets - VAR_3) * sizeof(VAR_0->packets[0]));
    VAR_0->num_packets -= VAR_3;
}
