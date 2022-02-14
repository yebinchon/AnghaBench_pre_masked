
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sh_stream {int title; TYPE_2__* attached_picture; TYPE_1__* codec; scalar_t__ index; scalar_t__ demuxer_id; } ;
struct demuxer {int num_attachments; struct demux_attachment* attachments; } ;
struct demux_attachment {int name; int data_size; int data; int type; } ;
struct TYPE_5__ {int keyframe; scalar_t__ pts; } ;
struct TYPE_4__ {char const* codec; } ;


 int VAR_0 ;
 int FUNC_0 (struct demuxer*,struct sh_stream*) ;
 struct sh_stream* FUNC_1 (int ) ;
 char* FUNC_2 (int ) ;
 TYPE_2__* FUNC_3 (int ,int ) ;
 int FUNC_4 (struct sh_stream*,TYPE_2__*) ;

__attribute__((used)) static void FUNC_5(struct demuxer *VAR_1)
{
    for (int VAR_2 = 0; VAR_2 < VAR_1->num_attachments; VAR_2++) {
        struct demux_attachment *VAR_3 = &VAR_1->attachments[VAR_2];
        const char *VAR_4 = FUNC_2(VAR_3->type);
        if (!VAR_4)
            continue;
        struct sh_stream *VAR_5 = FUNC_1(VAR_0);
        VAR_5->demuxer_id = -1 - VAR_5->index;
        VAR_5->codec->codec = VAR_4;
        VAR_5->attached_picture = FUNC_3(VAR_3->data, VAR_3->data_size);
        if (VAR_5->attached_picture) {
            VAR_5->attached_picture->pts = 0;
            FUNC_4(VAR_5, VAR_5->attached_picture);
            VAR_5->attached_picture->keyframe = 1;
        }
        VAR_5->title = VAR_3->name;
        FUNC_0(VAR_1, VAR_5);
    }
}
