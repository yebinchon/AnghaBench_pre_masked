
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct demux_cached_range {scalar_t__ seek_start; } ;



__attribute__((used)) static int FUNC_0(const void *VAR_0, const void *VAR_1)
{
    struct demux_cached_range *VAR_2 = (void *)VAR_0;
    struct demux_cached_range *VAR_3 = (void *)VAR_1;

    if (VAR_2->seek_start == VAR_3->seek_start)
        return 0;
    return VAR_2->seek_start < VAR_3->seek_start ? -1 : 1;
}
