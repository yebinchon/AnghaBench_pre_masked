
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timed_metadata {double pts; } ;
struct demux_internal {int cached_metadata_index; struct demux_cached_range* current_range; } ;
struct demux_cached_range {int num_metadata; struct timed_metadata** metadata; } ;


 double VAR_0 ;

__attribute__((used)) static struct timed_metadata *FUNC_0(struct demux_internal *VAR_1,
                                                    double VAR_2)
{
    struct demux_cached_range *VAR_3 = VAR_1->current_range;

    if (!VAR_3 || !VAR_3->num_metadata || VAR_2 == VAR_0)
        return ((void*)0);

    int VAR_4 = 1;
    int VAR_5 = VAR_1->cached_metadata_index;
    if (VAR_5 >= 0 && VAR_5 < VAR_3->num_metadata && VAR_3->metadata[VAR_5]->pts <= VAR_2)
        VAR_4 = VAR_5 + 1;

    VAR_1->cached_metadata_index = VAR_3->num_metadata - 1;
    for (int VAR_6 = VAR_4; VAR_6 < VAR_3->num_metadata; VAR_6++) {
        if (VAR_3->metadata[VAR_6]->pts >= VAR_2) {
            VAR_1->cached_metadata_index = VAR_6 - 1;
            break;
        }
    }

    return VAR_3->metadata[VAR_1->cached_metadata_index];
}
