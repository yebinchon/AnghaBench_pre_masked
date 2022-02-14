
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct demuxer {struct demux_internal* in; } ;
struct demux_internal {int blocked; int num_streams; int lock; int wakeup; TYPE_1__** streams; struct demuxer* d_user; } ;
struct TYPE_4__ {int need_wakeup; } ;
struct TYPE_3__ {TYPE_2__* ds; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_2__*) ;

void FUNC_5(struct demuxer *VAR_0, bool VAR_1)
{
    struct demux_internal *VAR_2 = VAR_0->in;
    FUNC_0(VAR_0 == VAR_2->d_user);

    FUNC_2(&VAR_2->lock);
    VAR_2->blocked = VAR_1;
    for (int VAR_3 = 0; VAR_3 < VAR_2->num_streams; VAR_3++) {
        VAR_2->streams[VAR_3]->ds->need_wakeup = 1;
        FUNC_4(VAR_2->streams[VAR_3]->ds);
    }
    FUNC_1(&VAR_2->wakeup);
    FUNC_3(&VAR_2->lock);
}
