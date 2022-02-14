
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sh_stream {struct demux_stream* ds; } ;
struct mp_tags {int dummy; } ;
struct demuxer {struct demux_internal* in; } ;
struct demux_stream {int dummy; } ;
struct demux_internal {int lock; struct demuxer* d_thread; } ;


 double VAR_0 ;
 int FUNC_0 (struct demux_internal*,char*) ;
 int FUNC_1 (struct demux_internal*,struct mp_tags*,struct sh_stream*,double) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct mp_tags*) ;

void FUNC_6(struct demuxer *VAR_1, struct sh_stream *VAR_2,
                               struct mp_tags *VAR_3, double VAR_4)
{
    struct demux_internal *VAR_5 = VAR_1->in;
    FUNC_2(VAR_1 == VAR_5->d_thread);
    struct demux_stream *VAR_6 = VAR_2 ? VAR_2->ds : ((void*)0);
    FUNC_2(!VAR_2 || VAR_6);

    FUNC_3(&VAR_5->lock);

    if (VAR_4 == VAR_0) {
        FUNC_0(VAR_5, "Discarding timed metadata without timestamp.\n");
    } else {
        FUNC_1(VAR_5, VAR_3, VAR_2, VAR_4);
    }
    FUNC_5(VAR_3);

    FUNC_4(&VAR_5->lock);
}
