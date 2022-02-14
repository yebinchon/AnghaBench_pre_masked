
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct demux_internal {int num_ranges; scalar_t__ current_range; scalar_t__* ranges; int seekable_cache; } ;
struct demux_cached_range {scalar_t__ seek_start; int num_streams; scalar_t__ seek_end; struct demux_cached_range** streams; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct demux_cached_range**,int,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct demux_internal*,struct demux_cached_range*) ;
 int FUNC_3 (struct demux_cached_range*) ;

__attribute__((used)) static void FUNC_4(struct demux_internal *VAR_2)
{
    while (1) {
        struct demux_cached_range *VAR_3 = ((void*)0);

        int VAR_4 = VAR_2->num_ranges - 1;


        if (VAR_2->current_range) {
            FUNC_1(VAR_2->current_range && VAR_2->num_ranges > 0);
            FUNC_1(VAR_2->current_range == VAR_2->ranges[VAR_2->num_ranges - 1]);
            VAR_4 -= 1;
        }

        for (int VAR_5 = VAR_4; VAR_5 >= 0; VAR_5--) {
            struct demux_cached_range *VAR_6 = VAR_2->ranges[VAR_5];
            if (VAR_6->seek_start == VAR_1 || !VAR_2->seekable_cache) {
                FUNC_2(VAR_2, VAR_6);
                FUNC_0(VAR_2->ranges, VAR_2->num_ranges, VAR_5);
                for (int VAR_7 = 0; VAR_7 < VAR_6->num_streams; VAR_7++)
                    FUNC_3(VAR_6->streams[VAR_7]);
                FUNC_3(VAR_6);
            } else {
                if (!VAR_3 || (VAR_6->seek_end - VAR_6->seek_start <
                               VAR_3->seek_end - VAR_3->seek_start))
                    VAR_3 = VAR_6;
            }
        }

        if (VAR_2->num_ranges <= VAR_0 || !VAR_3)
            break;

        FUNC_2(VAR_2, VAR_3);
    }
}
