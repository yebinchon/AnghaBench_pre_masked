
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct demux_stream {TYPE_3__* in; TYPE_1__* sh; struct demux_queue* queue; } ;
struct demux_queue {int is_eof; double seek_start; double seek_end; TYPE_2__* range; struct demux_packet* keyframe_latest; } ;
struct demux_packet {scalar_t__ keyframe; } ;
struct TYPE_6__ {int seekable_cache; } ;
struct TYPE_5__ {double seek_end; } ;
struct TYPE_4__ {double seek_preroll; } ;


 double VAR_0 ;
 int FUNC_0 (struct demux_queue*,struct demux_packet*,double) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (struct demux_packet*,double*,double*) ;
 int FUNC_3 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_4(struct demux_stream *VAR_1,
                                        struct demux_packet *VAR_2)
{
    struct demux_queue *VAR_3 = VAR_1->queue;

    if (!VAR_1->in->seekable_cache)
        return;

    bool VAR_4 = !VAR_2;
    bool VAR_5 = VAR_3->is_eof != VAR_4;
    VAR_3->is_eof = VAR_4;

    if (!VAR_2 || VAR_2->keyframe) {
        if (VAR_3->keyframe_latest) {
            double VAR_6, VAR_7;
            FUNC_2(VAR_3->keyframe_latest, &VAR_6, &VAR_7);

            if (VAR_6 != VAR_0) {
                FUNC_0(VAR_3, VAR_3->keyframe_latest, VAR_6);


                if (VAR_3->seek_start == VAR_0) {
                    VAR_5 = 1;
                    VAR_3->seek_start = VAR_6 + VAR_1->sh->seek_preroll;
                }
            }

            if (VAR_7 != VAR_0 &&
                (VAR_3->seek_end == VAR_0 || VAR_7 > VAR_3->seek_end))
            {





                if (VAR_3->range->seek_end == VAR_0 ||
                    VAR_3->seek_end <= VAR_3->range->seek_end)
                {
                    VAR_5 = 1;
                }

                VAR_3->seek_end = VAR_7;
            }
        }

        VAR_3->keyframe_latest = VAR_2;
    }

    if (VAR_5) {
        FUNC_3(VAR_3->range);
        FUNC_1(VAR_1->in);
    }
}
