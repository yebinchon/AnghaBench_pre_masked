
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct mkv_index {int tnum; int timecode; scalar_t__ filepos; scalar_t__ duration; } ;
struct mkv_demuxer {size_t num_indexes; int tc_scale; scalar_t__ cluster_end; struct mkv_index* indexes; scalar_t__ index_has_durations; TYPE_1__* opts; } ;
struct demuxer {int stream; struct mkv_demuxer* priv; } ;
typedef scalar_t__ int64_t ;
struct TYPE_2__ {double subtitle_preroll_secs; int subtitle_preroll_secs_index; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 double FUNC_0 (double,int ) ;
 scalar_t__ FUNC_1 (int ,double) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static struct mkv_index *FUNC_3(struct demuxer *VAR_4, int VAR_5,
                                        int64_t VAR_6, int VAR_7)
{
    struct mkv_demuxer *VAR_8 = VAR_4->priv;
    struct mkv_index *VAR_9 = ((void*)0);

    int64_t VAR_10 = VAR_1;
    for (size_t VAR_11 = 0; VAR_11 < VAR_8->num_indexes; VAR_11++) {
        if (VAR_5 < 0 || VAR_8->indexes[VAR_11].tnum == VAR_5) {
            int64_t VAR_12 =
                VAR_8->indexes[VAR_11].timecode * VAR_8->tc_scale - VAR_6;
            if (VAR_7 & VAR_2)
                VAR_12 = -VAR_12;
            if (VAR_10 != VAR_1) {
                if (VAR_12 <= 0) {
                    if (VAR_10 <= 0 && VAR_12 <= VAR_10)
                        continue;
                } else if (VAR_12 >= VAR_10)
                    continue;
            }
            VAR_10 = VAR_12;
            VAR_9 = VAR_8->indexes + VAR_11;
        }
    }

    if (VAR_9) {
        uint64_t VAR_13 = VAR_9->filepos;
        if (VAR_7 & VAR_3) {


            double VAR_14 = VAR_8->opts->subtitle_preroll_secs;
            if (VAR_8->index_has_durations)
                VAR_14 = FUNC_0(VAR_14, VAR_8->opts->subtitle_preroll_secs_index);
            int64_t VAR_15 = FUNC_1(VAR_0, VAR_14 * 1e9 / VAR_8->tc_scale);
            int64_t VAR_16 = VAR_15 < VAR_9->timecode ? VAR_9->timecode - VAR_15 : 0;
            uint64_t VAR_17 = 0;
            int64_t VAR_18 = 0;
            for (size_t VAR_19 = 0; VAR_19 < VAR_8->num_indexes; VAR_19++) {
                if (VAR_5 < 0 || VAR_8->indexes[VAR_19].tnum == VAR_5) {
                    struct mkv_index *VAR_20 = &VAR_8->indexes[VAR_19];
                    if (VAR_20->timecode <= VAR_16 && VAR_20->timecode >= VAR_18) {
                        VAR_18 = VAR_20->timecode;
                        VAR_17 = VAR_20->filepos;
                    }
                }
            }
            if (VAR_8->index_has_durations) {



                uint64_t VAR_21 = VAR_13;
                for (size_t VAR_22 = 0; VAR_22 < VAR_8->num_indexes; VAR_22++) {
                    struct mkv_index *VAR_23 = &VAR_8->indexes[VAR_22];
                    if (VAR_23->timecode <= VAR_9->timecode &&
                        VAR_23->timecode + VAR_23->duration > VAR_9->timecode &&
                        VAR_23->filepos >= VAR_17 &&
                        VAR_23->filepos < VAR_21)
                    {
                        VAR_21 = VAR_23->filepos;
                    }
                }
                VAR_17 = VAR_21;
            }
            if (VAR_17)
                VAR_13 = VAR_17;
        }

        VAR_8->cluster_end = 0;
        FUNC_2(VAR_4->stream, VAR_13);
    }
    return VAR_9;
}
