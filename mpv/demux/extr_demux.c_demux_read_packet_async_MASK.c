
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sh_stream {struct demux_stream* ds; } ;
struct demux_stream {struct demux_internal* in; } ;
struct demux_packet {int dummy; } ;
struct demux_internal {int lock; scalar_t__ blocked; scalar_t__ threading; } ;


 int FUNC_0 (struct demux_stream*,struct demux_packet**) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct demux_internal*) ;

int FUNC_4(struct sh_stream *VAR_0, struct demux_packet **VAR_1)
{
    struct demux_stream *VAR_2 = VAR_0 ? VAR_0->ds : ((void*)0);
    *VAR_1 = ((void*)0);
    if (!VAR_2)
        return -1;
    struct demux_internal *VAR_3 = VAR_2->in;

    FUNC_1(&VAR_3->lock);
    int VAR_4 = -1;
    while (1) {
        VAR_4 = FUNC_0(VAR_2, VAR_1);
        if (VAR_3->threading || VAR_3->blocked || VAR_4 != 0)
            break;

        FUNC_3(VAR_3);
    }
    FUNC_2(&VAR_3->lock);
    return VAR_4;
}
