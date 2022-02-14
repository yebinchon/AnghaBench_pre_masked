
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct demuxer {int num_chapters; TYPE_1__* chapters; } ;
struct TYPE_2__ {double pts; } ;



__attribute__((used)) static double FUNC_0(struct demuxer *VAR_0, int VAR_1)
{
    if (VAR_1 < 0 || VAR_1 >= VAR_0->num_chapters)
        return -1;
    return VAR_0->chapters[VAR_1].pts;
}
