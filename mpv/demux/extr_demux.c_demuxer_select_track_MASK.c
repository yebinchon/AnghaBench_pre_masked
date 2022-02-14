
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sh_stream {int index; struct demux_stream* ds; } ;
struct demuxer {struct demux_internal* in; } ;
struct demux_stream {int selected; double back_seek_pos; } ;
struct demux_internal {int tracks_switched; int lock; int wakeup; scalar_t__ threading; int after_seek; scalar_t__ back_demuxing; int ts_offset; } ;


 double FUNC_0 (double,int ) ;
 int FUNC_1 (struct demux_internal*,char*,char*,int ) ;
 int FUNC_2 (struct demux_internal*) ;
 int FUNC_3 (struct demux_internal*,struct demux_stream*,double) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct demux_internal*,struct demux_stream*) ;

void FUNC_8(struct demuxer *VAR_0, struct sh_stream *VAR_1,
                          double VAR_2, bool VAR_3)
{
    struct demux_internal *VAR_4 = VAR_0->in;
    struct demux_stream *VAR_5 = VAR_1->ds;
    FUNC_5(&VAR_4->lock);
    VAR_2 = FUNC_0(VAR_2, -VAR_4->ts_offset);

    if (VAR_5->selected != VAR_3) {
        FUNC_1(VAR_4, "%sselect track %d\n", VAR_3 ? "" : "de", VAR_1->index);
        VAR_5->selected = VAR_3;
        FUNC_7(VAR_4, VAR_5);
        VAR_4->tracks_switched = 1;
        if (VAR_5->selected) {
            if (VAR_4->back_demuxing)
                VAR_5->back_seek_pos = VAR_2;
            if (!VAR_4->after_seek)
                FUNC_3(VAR_4, VAR_5, VAR_2);
        }
        if (VAR_4->threading) {
            FUNC_4(&VAR_4->wakeup);
        } else {
            FUNC_2(VAR_4);
        }
    }
    FUNC_6(&VAR_4->lock);
}
