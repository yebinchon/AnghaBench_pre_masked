
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct priv {int frame_size; int read_frames; int frame_rate; TYPE_1__* sh; } ;
struct demuxer {TYPE_2__* stream; struct priv* priv; } ;
struct demux_packet {int keyframe; int pos; int pts; int stream; int len; int buffer; } ;
struct TYPE_5__ {scalar_t__ eof; } ;
struct TYPE_4__ {int index; } ;


 int FUNC_0 (struct demuxer*,char*) ;
 int FUNC_1 (struct demux_packet*,int) ;
 struct demux_packet* FUNC_2 (int) ;
 int FUNC_3 (TYPE_2__*,int ,int ) ;
 int FUNC_4 (TYPE_2__*) ;

__attribute__((used)) static bool FUNC_5(struct demuxer *VAR_0, struct demux_packet **VAR_1)
{
    struct priv *VAR_2 = VAR_0->priv;

    if (VAR_0->stream->eof)
        return 0;

    struct demux_packet *VAR_3 = FUNC_2(VAR_2->frame_size * VAR_2->read_frames);
    if (!VAR_3) {
        FUNC_0(VAR_0, "Can't read packet.\n");
        return 1;
    }

    VAR_3->keyframe = 1;
    VAR_3->pos = FUNC_4(VAR_0->stream);
    VAR_3->pts = (VAR_3->pos / VAR_2->frame_size) / VAR_2->frame_rate;

    int VAR_4 = FUNC_3(VAR_0->stream, VAR_3->buffer, VAR_3->len);
    FUNC_1(VAR_3, VAR_4);

    VAR_3->stream = VAR_2->sh->index;
    *VAR_1 = VAR_3;

    return 1;
}
