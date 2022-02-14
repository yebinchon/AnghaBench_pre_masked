
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tl_ctx {int num_sources; int * uids; } ;
struct matroska_segment_uid {int dummy; } ;


 scalar_t__ FUNC_0 (int *,struct matroska_segment_uid*) ;

__attribute__((used)) static bool FUNC_1(struct tl_ctx *VAR_0,
                               struct matroska_segment_uid *VAR_1)
{
    for (int VAR_2 = 0; VAR_2 < VAR_0->num_sources; ++VAR_2) {
        if (FUNC_0(&VAR_0->uids[VAR_2], VAR_1))
            return 1;
    }
    return 0;
}
