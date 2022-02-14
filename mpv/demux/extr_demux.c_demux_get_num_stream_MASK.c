
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct demuxer {struct demux_internal* in; } ;
struct demux_internal {int num_streams; int lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

int FUNC_2(struct demuxer *VAR_0)
{
    struct demux_internal *VAR_1 = VAR_0->in;
    FUNC_0(&VAR_1->lock);
    int VAR_2 = VAR_1->num_streams;
    FUNC_1(&VAR_1->lock);
    return VAR_2;
}
