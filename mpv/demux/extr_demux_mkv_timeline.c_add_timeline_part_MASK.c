
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
struct tl_ctx {int last_end_time; int num_parts; int start_time; TYPE_2__* timeline; TYPE_1__* opts; } ;
struct timeline_part {int start; int source_start; struct demuxer* source; } ;
struct demuxer {int dummy; } ;
typedef int int64_t ;
struct TYPE_4__ {struct demuxer* source; } ;
struct TYPE_3__ {int chapter_merge_threshold; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,TYPE_2__*,int,struct timeline_part) ;
 int FUNC_2 (struct tl_ctx*,char*,int,int) ;

__attribute__((used)) static int64_t FUNC_3(struct tl_ctx *VAR_0,
                                 struct demuxer *VAR_1,
                                 uint64_t VAR_2)
{



    int64_t VAR_3 = VAR_2 - VAR_0->last_end_time;
    if (VAR_0->num_parts == 0
        || FUNC_0(VAR_3) > VAR_0->opts->chapter_merge_threshold * 1e6
        || VAR_1 != VAR_0->timeline[VAR_0->num_parts - 1].source)
    {
        struct timeline_part VAR_4 = {
            .start = VAR_0->start_time / 1e9,
            .source_start = VAR_2 / 1e9,
            .source = VAR_1,
        };
        FUNC_1(((void*)0), VAR_0->timeline, VAR_0->num_parts, VAR_4);
    } else if (VAR_0->num_parts > 0 && VAR_3) {

        FUNC_2(VAR_0, "Merging timeline part %d with offset %g ms.\n",
                   VAR_0->num_parts, VAR_3 / 1e6);
        VAR_0->start_time += VAR_3;
        return VAR_3;
    }

    return 0;
}
