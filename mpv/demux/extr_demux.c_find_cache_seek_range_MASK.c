
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct demux_internal {int num_ranges; struct demux_cached_range** ranges; int seekable_cache; } ;
struct demux_cached_range {double seek_start; double seek_end; scalar_t__ is_eof; scalar_t__ is_bof; } ;


 double VAR_0 ;
 int FUNC_0 (struct demux_internal*,char*,...) ;
 int VAR_1 ;

__attribute__((used)) static struct demux_cached_range *FUNC_1(struct demux_internal *VAR_2,
                                                        double VAR_3, int VAR_4)
{




    if ((VAR_4 & VAR_1) || !VAR_2->seekable_cache)
        return ((void*)0);

    struct demux_cached_range *VAR_5 = ((void*)0);

    for (int VAR_6 = 0; VAR_6 < VAR_2->num_ranges; VAR_6++) {
        struct demux_cached_range *VAR_7 = VAR_2->ranges[VAR_6];
        if (VAR_7->seek_start != VAR_0) {
            FUNC_0(VAR_2, "cached range %d: %f <-> %f (bof=%d, eof=%d)\n",
                       VAR_6, VAR_7->seek_start, VAR_7->seek_end, VAR_7->is_bof, VAR_7->is_eof);

            if ((VAR_3 >= VAR_7->seek_start || VAR_7->is_bof) &&
                (VAR_3 <= VAR_7->seek_end || VAR_7->is_eof))
            {
                FUNC_0(VAR_2, "...using this range for in-cache seek.\n");
                VAR_5 = VAR_7;
                break;
            }
        }
    }

    return VAR_5;
}
