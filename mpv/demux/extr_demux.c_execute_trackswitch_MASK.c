
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct demux_internal {int tracks_switched; int num_streams; int lock; TYPE_4__* d_thread; TYPE_2__** streams; } ;
struct TYPE_8__ {TYPE_3__* desc; } ;
struct TYPE_7__ {int (* switched_tracks ) (TYPE_4__*) ;} ;
struct TYPE_6__ {TYPE_1__* ds; } ;
struct TYPE_5__ {int selected; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_4__*) ;

__attribute__((used)) static void FUNC_3(struct demux_internal *VAR_0)
{
    VAR_0->tracks_switched = 0;

    bool VAR_1 = 0;
    for (int VAR_2 = 0; VAR_2 < VAR_0->num_streams; VAR_2++)
        VAR_1 |= VAR_0->streams[VAR_2]->ds->selected;

    FUNC_1(&VAR_0->lock);

    if (VAR_0->d_thread->desc->switched_tracks)
        VAR_0->d_thread->desc->switched_tracks(VAR_0->d_thread);

    FUNC_0(&VAR_0->lock);
}
