
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint64_t ;
struct mkv_track {size_t last_index_entry; int tnum; } ;
struct TYPE_6__ {scalar_t__ timecode; } ;
typedef TYPE_1__ mkv_index_t ;
struct TYPE_7__ {int index_has_durations; int num_indexes; TYPE_1__* indexes; scalar_t__ index_complete; } ;
typedef TYPE_2__ mkv_demuxer_t ;
typedef scalar_t__ int64_t ;
struct TYPE_8__ {scalar_t__ priv; } ;
typedef TYPE_3__ demuxer_t ;


 int FUNC_0 (TYPE_3__*,int ,int ,scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_1(demuxer_t *VAR_0, struct mkv_track *VAR_1,
                               uint64_t VAR_2,
                               int64_t VAR_3, int64_t VAR_4)
{
    mkv_demuxer_t *VAR_5 = (mkv_demuxer_t *) VAR_0->priv;

    if (VAR_5->index_complete || !VAR_1)
        return;

    VAR_5->index_has_durations = 1;

    if (VAR_1->last_index_entry != (size_t)-1) {
        mkv_index_t *VAR_6 = &VAR_5->indexes[VAR_1->last_index_entry];

        if (VAR_6->timecode >= VAR_3)
            return;
    }
    FUNC_0(VAR_0, VAR_1->tnum, VAR_2, VAR_3, VAR_4);
    VAR_1->last_index_entry = VAR_5->num_indexes - 1;
}
