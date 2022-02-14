
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sh_stream {int dummy; } ;
struct demuxer {struct demux_internal* in; } ;
struct demux_internal {int lock; struct demuxer* d_thread; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct demux_internal*,struct sh_stream*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct demuxer *VAR_0, struct sh_stream *VAR_1)
{
    struct demux_internal *VAR_2 = VAR_0->in;
    FUNC_0(VAR_0 == VAR_2->d_thread);
    FUNC_2(&VAR_2->lock);
    FUNC_1(VAR_2, VAR_1);
    FUNC_3(&VAR_2->lock);
}
