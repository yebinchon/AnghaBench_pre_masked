
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sh_stream {int dummy; } ;
struct demuxer {struct demux_internal* in; } ;
struct demux_internal {int num_streams; int lock; struct sh_stream** streams; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

struct sh_stream *FUNC_3(struct demuxer *VAR_0, int VAR_1)
{
    struct demux_internal *VAR_2 = VAR_0->in;
    FUNC_1(&VAR_2->lock);
    FUNC_0(VAR_1 >= 0 && VAR_1 < VAR_2->num_streams);
    struct sh_stream *VAR_3 = VAR_2->streams[VAR_1];
    FUNC_2(&VAR_2->lock);
    return VAR_3;
}
