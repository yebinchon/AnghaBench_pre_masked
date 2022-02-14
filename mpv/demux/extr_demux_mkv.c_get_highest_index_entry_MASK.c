
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mkv_demuxer {int num_tracks; TYPE_2__* indexes; TYPE_1__** tracks; int index_complete; } ;
struct demuxer {struct mkv_demuxer* priv; } ;
struct TYPE_5__ {scalar_t__ filepos; } ;
typedef TYPE_2__ mkv_index_t ;
struct TYPE_4__ {int last_index_entry; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static mkv_index_t *FUNC_1(struct demuxer *VAR_0)
{
    struct mkv_demuxer *VAR_1 = VAR_0->priv;
    FUNC_0(!VAR_1->index_complete);

    mkv_index_t *VAR_2 = ((void*)0);
    for (int VAR_3 = 0; VAR_3 < VAR_1->num_tracks; VAR_3++) {
        int VAR_4 = VAR_1->tracks[VAR_3]->last_index_entry;
        if (VAR_4 >= 0) {
            mkv_index_t *VAR_5 = &VAR_1->indexes[VAR_4];
            if (!VAR_2 || VAR_5->filepos > VAR_2->filepos)
                VAR_2 = VAR_5;
        }
    }
    return VAR_2;
}
