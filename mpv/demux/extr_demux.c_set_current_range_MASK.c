
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct demux_internal {int num_ranges; struct demux_cached_range** ranges; struct demux_cached_range* current_range; } ;
struct demux_cached_range {int dummy; } ;


 int FUNC_0 (struct demux_internal*,struct demux_cached_range**,int,struct demux_cached_range*) ;
 int FUNC_1 (struct demux_cached_range**,int,int) ;

__attribute__((used)) static void FUNC_2(struct demux_internal *VAR_0,
                              struct demux_cached_range *VAR_1)
{
    VAR_0->current_range = VAR_1;


    for (int VAR_2 = 0; VAR_2 < VAR_0->num_ranges; VAR_2++) {
        if (VAR_0->ranges[VAR_2] == VAR_1) {
            FUNC_1(VAR_0->ranges, VAR_0->num_ranges, VAR_2);
            break;
        }
    }
    FUNC_0(VAR_0, VAR_0->ranges, VAR_0->num_ranges, VAR_1);
}
