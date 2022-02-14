
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct demux_internal {int dummy; } ;
struct demux_cached_range {int num_streams; int num_metadata; int * metadata; int * streams; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct demux_cached_range*) ;

__attribute__((used)) static void FUNC_3(struct demux_internal *VAR_0,
                               struct demux_cached_range *VAR_1)
{
    for (int VAR_2 = 0; VAR_2 < VAR_1->num_streams; VAR_2++)
        FUNC_0(VAR_1->streams[VAR_2]);

    for (int VAR_3 = 0; VAR_3 < VAR_1->num_metadata; VAR_3++)
        FUNC_1(VAR_1->metadata[VAR_3]);
    VAR_1->num_metadata = 0;

    FUNC_2(VAR_1);
}
