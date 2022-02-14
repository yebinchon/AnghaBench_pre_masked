
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int av_parser_codec; int * av_parser; } ;
typedef TYPE_1__ mkv_track_t ;
struct TYPE_6__ {int num_tracks; int num_blocks; int num_packets; int skip_to_timecode; int * packets; int * blocks; TYPE_1__** tracks; } ;
typedef TYPE_2__ mkv_demuxer_t ;
struct TYPE_7__ {TYPE_2__* priv; } ;
typedef TYPE_3__ demuxer_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(demuxer_t *VAR_1)
{
    mkv_demuxer_t *VAR_2 = VAR_1->priv;

    for (int VAR_3 = 0; VAR_3 < VAR_2->num_tracks; VAR_3++) {
        mkv_track_t *VAR_4 = VAR_2->tracks[VAR_3];
        if (VAR_4->av_parser)
            FUNC_0(VAR_4->av_parser);
        VAR_4->av_parser = ((void*)0);
        FUNC_1(&VAR_4->av_parser_codec);
    }

    for (int VAR_5 = 0; VAR_5 < VAR_2->num_blocks; VAR_5++)
        FUNC_2(&VAR_2->blocks[VAR_5]);
    VAR_2->num_blocks = 0;

    for (int VAR_6 = 0; VAR_6 < VAR_2->num_packets; VAR_6++)
        FUNC_3(VAR_2->packets[VAR_6]);
    VAR_2->num_packets = 0;

    VAR_2->skip_to_timecode = VAR_0;
}
