
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeline {int num_sources; struct demuxer* demuxer; struct demuxer** sources; } ;
struct demuxer {int dummy; } ;


 int FUNC_0 (struct demuxer*) ;
 int FUNC_1 (struct timeline*) ;

void FUNC_2(struct timeline *VAR_0)
{
    if (!VAR_0)
        return;
    for (int VAR_1 = 0; VAR_1 < VAR_0->num_sources; VAR_1++) {
        struct demuxer *VAR_2 = VAR_0->sources[VAR_1];
        if (VAR_2 != VAR_0->demuxer)
            FUNC_0(VAR_2);
    }
    FUNC_1(VAR_0);
}
