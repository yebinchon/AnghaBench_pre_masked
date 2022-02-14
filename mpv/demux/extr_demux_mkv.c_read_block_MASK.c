
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint64_t ;
struct block_info {int filepos; int keyframe; TYPE_1__* track; scalar_t__ timecode; scalar_t__ simple; } ;
typedef int stream_t ;
struct TYPE_6__ {int tc_scale; int num_tracks; TYPE_1__** tracks; scalar_t__ cluster_tc; } ;
typedef TYPE_2__ mkv_demuxer_t ;
typedef scalar_t__ int64_t ;
typedef int int16_t ;
struct TYPE_7__ {int * stream; scalar_t__ priv; } ;
typedef TYPE_3__ demuxer_t ;
struct TYPE_5__ {int tnum; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct block_info*,int,int *,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct block_info*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(demuxer_t *VAR_1, int64_t VAR_2, struct block_info *VAR_3)
{
    mkv_demuxer_t *VAR_4 = (mkv_demuxer_t *) VAR_1->priv;
    stream_t *VAR_5 = VAR_1->stream;
    uint64_t VAR_6;
    int16_t VAR_7;
    uint64_t VAR_8;

    FUNC_2(VAR_3);
    VAR_8 = FUNC_1(VAR_5);
    if (!VAR_8 || VAR_8 > 500000000 || FUNC_5(VAR_5) + VAR_8 > (uint64_t)VAR_2)
        return -1;

    uint64_t VAR_9 = FUNC_5(VAR_5) + VAR_8;
    int VAR_10 = -1;



    VAR_6 = FUNC_1(VAR_5);
    if (VAR_6 == VAR_0 || FUNC_5(VAR_5) >= VAR_9)
        goto exit;


    if (FUNC_5(VAR_5) + 3 > VAR_9)
        goto exit;
    uint8_t VAR_11 = FUNC_3(VAR_5);
    uint8_t VAR_12 = FUNC_3(VAR_5);
    VAR_7 = VAR_11 << 8 | VAR_12;

    uint8_t VAR_13 = FUNC_3(VAR_5);

    VAR_3->filepos = FUNC_5(VAR_5);

    int VAR_14 = (VAR_13 >> 1) & 0x03;
    if (FUNC_0(VAR_3, VAR_14, VAR_5, VAR_9))
        goto exit;

    if (VAR_3->simple)
        VAR_3->keyframe = VAR_13 & 0x80;
    VAR_3->timecode = VAR_7 * VAR_4->tc_scale + VAR_4->cluster_tc;
    for (int VAR_15 = 0; VAR_15 < VAR_4->num_tracks; VAR_15++) {
        if (VAR_4->tracks[VAR_15]->tnum == VAR_6) {
            VAR_3->track = VAR_4->tracks[VAR_15];
            break;
        }
    }
    if (!VAR_3->track) {
        VAR_10 = 0;
        goto exit;
    }

    if (FUNC_5(VAR_5) != VAR_9)
        goto exit;

    VAR_10 = 1;
exit:
    if (VAR_10 <= 0)
        FUNC_2(VAR_3);
    FUNC_4(VAR_5, VAR_9);
    return VAR_10;
}
