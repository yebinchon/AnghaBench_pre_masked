
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct demuxer {struct demux_internal* in; } ;
struct demux_packet {int dummy; } ;
struct demux_internal {int num_streams; int reading; int lock; TYPE_1__** streams; int blocked; int threading; } ;
struct TYPE_2__ {int ds; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,struct demux_packet**) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct demux_internal*) ;

struct demux_packet *FUNC_5(struct demuxer *VAR_0)
{
    struct demux_internal *VAR_1 = VAR_0->in;
    FUNC_2(&VAR_1->lock);
    FUNC_0(!VAR_1->threading);
    struct demux_packet *VAR_2 = ((void*)0);
    bool VAR_3 = 1;
    while (VAR_3 && !VAR_1->blocked) {
        bool VAR_4 = 1;
        for (int VAR_5 = 0; VAR_5 < VAR_1->num_streams; VAR_5++) {
            VAR_1->reading = 1;
            int VAR_6 = FUNC_1(VAR_1->streams[VAR_5]->ds, &VAR_2);
            if (VAR_6 > 0)
                goto done;
            if (VAR_6 == 0)
                VAR_4 = 0;
        }

        VAR_3 = FUNC_4(VAR_1);
        VAR_3 &= !VAR_4;
    }
done:
    FUNC_3(&VAR_1->lock);
    return VAR_2;
}
