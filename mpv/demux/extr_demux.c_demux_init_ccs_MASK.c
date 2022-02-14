
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sh_stream {scalar_t__ type; } ;
struct demuxer {struct demux_internal* in; } ;
struct demux_opts {int create_ccs; } ;
struct demux_internal {int num_streams; int lock; struct sh_stream** streams; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct sh_stream*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct demuxer *VAR_1, struct demux_opts *VAR_2)
{
    struct demux_internal *VAR_3 = VAR_1->in;
    if (!VAR_2->create_ccs)
        return;
    FUNC_1(&VAR_3->lock);
    for (int VAR_4 = 0; VAR_4 < VAR_3->num_streams; VAR_4++) {
        struct sh_stream *VAR_5 = VAR_3->streams[VAR_4];
        if (VAR_5->type == VAR_0)
            FUNC_0(VAR_5);
    }
    FUNC_2(&VAR_3->lock);
}
