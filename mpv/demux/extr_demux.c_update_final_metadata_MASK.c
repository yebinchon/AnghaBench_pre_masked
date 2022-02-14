
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct timed_metadata {struct mp_tags* tags; scalar_t__ from_stream; } ;
struct sh_stream {scalar_t__ type; struct mp_tags* tags; int attached_picture; } ;
struct mp_tags {int dummy; } ;
struct demux_internal {int num_streams; struct sh_stream* metadata_stream; struct sh_stream** streams; TYPE_1__* d_user; } ;
struct TYPE_3__ {int metadata; struct demux_internal* in; } ;
typedef TYPE_1__ demuxer_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,struct mp_tags*) ;

__attribute__((used)) static void FUNC_2(demuxer_t *VAR_2, struct timed_metadata *VAR_3)
{
    FUNC_0(VAR_2 == VAR_2->in->d_user);
    struct demux_internal *VAR_4 = VAR_2->in;

    struct mp_tags *VAR_5 = ((void*)0);




    int VAR_6 = 0;
    int VAR_7 = -1;
    int VAR_8 = 0;
    for (int VAR_9 = 0; VAR_9 < VAR_4->num_streams; VAR_9++) {
        struct sh_stream *VAR_10 = VAR_4->streams[VAR_9];
        if (VAR_10->type == VAR_1 && !VAR_10->attached_picture)
            VAR_8 += 1;
        if (VAR_10->type == VAR_0) {
            VAR_6 += 1;
            VAR_7 = VAR_9;
        }
    }




    if (VAR_8 == 0 && VAR_6 == 1 &&
        VAR_4->streams[VAR_7] == VAR_4->metadata_stream)
    {
        VAR_5 = VAR_4->metadata_stream->tags;
        if (VAR_3 && VAR_3->from_stream)
            VAR_5 = VAR_3->tags;
    }


    if (VAR_3 && !VAR_3->from_stream)
        VAR_5 = VAR_3->tags;

    if (VAR_5)
        FUNC_1(VAR_2->metadata, VAR_5);
}
