
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct timed_metadata {int dummy; } ;
struct demux_internal {double last_playback_pts; int force_metadata_update; int events; int lock; int duration; int ts_offset; int threading; TYPE_1__* d_user; } ;
struct TYPE_5__ {int events; int duration; struct demux_internal* in; } ;
typedef TYPE_1__ demuxer_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 double FUNC_0 (double,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*) ;
 struct timed_metadata* FUNC_3 (struct demux_internal*,double) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct demux_internal*) ;
 int FUNC_7 (TYPE_1__*,struct timed_metadata*) ;

void FUNC_8(demuxer_t *VAR_3, double VAR_4)
{
    FUNC_1(VAR_3 == VAR_3->in->d_user);
    struct demux_internal *VAR_5 = VAR_3->in;

    if (!VAR_5->threading)
        FUNC_6(VAR_5);

    FUNC_4(&VAR_5->lock);

    VAR_4 = FUNC_0(VAR_4, -VAR_5->ts_offset);

    struct timed_metadata *VAR_6 = FUNC_3(VAR_5, VAR_5->last_playback_pts);
    struct timed_metadata *VAR_7 = FUNC_3(VAR_5, VAR_4);
    if (VAR_6 != VAR_7 || VAR_5->force_metadata_update) {
        VAR_5->force_metadata_update = 0;
        FUNC_7(VAR_3, VAR_7);
        VAR_3->events |= VAR_1;
    }

    VAR_5->last_playback_pts = VAR_4;

    VAR_3->events |= VAR_5->events;
    VAR_5->events = 0;
    if (VAR_3->events & (VAR_1 | VAR_2))
        FUNC_2(VAR_3);
    if (VAR_3->events & VAR_0)
        VAR_3->duration = VAR_5->duration;

    FUNC_5(&VAR_5->lock);
}
