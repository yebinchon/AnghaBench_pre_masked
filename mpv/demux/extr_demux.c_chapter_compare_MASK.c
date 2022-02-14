
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct demux_chapter {scalar_t__ pts; scalar_t__ original_index; } ;



__attribute__((used)) static int FUNC_0(const void *VAR_0, const void *VAR_1)
{
    struct demux_chapter *VAR_2 = (void *)VAR_0;
    struct demux_chapter *VAR_3 = (void *)VAR_1;

    if (VAR_2->pts > VAR_3->pts)
        return 1;
    else if (VAR_2->pts < VAR_3->pts)
        return -1;
    return VAR_2->original_index > VAR_3->original_index ? 1 :-1;
}
