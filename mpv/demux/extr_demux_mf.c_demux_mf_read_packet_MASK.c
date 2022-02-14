
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct stream {int dummy; } ;
struct demuxer {int global; TYPE_3__* priv; } ;
struct demux_packet {int pts; int keyframe; int stream; int buffer; } ;
struct TYPE_8__ {size_t curr_frame; size_t nr_of_files; char** names; TYPE_2__* sh; struct stream** streams; } ;
typedef TYPE_3__ mf_t ;
typedef struct demux_packet demux_packet_t ;
struct TYPE_9__ {int start; scalar_t__ len; } ;
typedef TYPE_4__ bstr ;
struct TYPE_7__ {int index; TYPE_1__* codec; } ;
struct TYPE_6__ {int fps; } ;


 int VAR_0 ;
 int FUNC_0 (struct stream*) ;
 int FUNC_1 (int ,int ,scalar_t__) ;
 struct demux_packet* FUNC_2 (scalar_t__) ;
 struct stream* FUNC_3 (char*,int ) ;
 TYPE_4__ FUNC_4 (struct stream*,int *,int ) ;
 int FUNC_5 (struct stream*,int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static bool FUNC_7(struct demuxer *VAR_1,
                                 struct demux_packet **VAR_2)
{
    mf_t *VAR_3 = VAR_1->priv;
    if (VAR_3->curr_frame >= VAR_3->nr_of_files)
        return 0;

    struct stream *VAR_4 = ((void*)0);
    if (VAR_3->streams)
        VAR_4 = VAR_3->streams[VAR_3->curr_frame];
    struct stream *VAR_5 = VAR_4;
    if (!VAR_5) {
        char *VAR_6 = VAR_3->names[VAR_3->curr_frame];
        if (VAR_6)
            VAR_5 = FUNC_3(VAR_6, VAR_1->global);
    }

    if (VAR_5) {
        FUNC_5(VAR_5, 0);
        bstr VAR_7 = FUNC_4(VAR_5, ((void*)0), VAR_0);
        if (VAR_7.len) {
            demux_packet_t *VAR_8 = FUNC_2(VAR_7.len);
            if (VAR_8) {
                FUNC_1(VAR_8->buffer, VAR_7.start, VAR_7.len);
                VAR_8->pts = VAR_3->curr_frame / VAR_3->sh->codec->fps;
                VAR_8->keyframe = 1;
                VAR_8->stream = VAR_3->sh->index;
                *VAR_2 = VAR_8;
            }
        }
        FUNC_6(VAR_7.start);
    }

    if (VAR_5 && VAR_5 != VAR_4)
        FUNC_0(VAR_5);

    VAR_3->curr_frame++;
    return 1;
}
