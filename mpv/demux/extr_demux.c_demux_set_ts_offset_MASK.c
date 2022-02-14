
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct demuxer {struct demux_internal* in; } ;
struct demux_internal {double ts_offset; int lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct demuxer *VAR_0, double VAR_1)
{
    struct demux_internal *VAR_2 = VAR_0->in;
    FUNC_0(&VAR_2->lock);
    VAR_2->ts_offset = VAR_1;
    FUNC_1(&VAR_2->lock);
}
