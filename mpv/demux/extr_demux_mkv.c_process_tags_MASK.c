
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct sh_stream {struct mp_tags* tags; } ;
struct mp_tags {int dummy; } ;
struct mkv_demuxer {int num_tracks; TYPE_3__** tracks; struct ebml_tags* tags; } ;
struct ebml_tags {int n_tag; struct ebml_tag* tag; } ;
struct TYPE_11__ {scalar_t__ target_chapter_uid; scalar_t__ target_edition_uid; scalar_t__ target_track_uid; scalar_t__ target_attachment_uid; } ;
struct ebml_tag {int n_simple_tag; TYPE_5__* simple_tag; TYPE_4__ targets; } ;
struct TYPE_13__ {int num_chapters; int num_editions; struct mp_tags* metadata; TYPE_2__* editions; TYPE_1__* chapters; struct mkv_demuxer* priv; } ;
typedef TYPE_6__ demuxer_t ;
struct TYPE_12__ {scalar_t__ tag_string; scalar_t__ tag_name; } ;
struct TYPE_10__ {scalar_t__ uid; struct sh_stream* stream; } ;
struct TYPE_9__ {scalar_t__ demuxer_id; struct mp_tags* metadata; } ;
struct TYPE_8__ {scalar_t__ demuxer_id; struct mp_tags* metadata; } ;


 int FUNC_0 (struct mp_tags*,scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_1(demuxer_t *VAR_0)
{
    struct mkv_demuxer *VAR_1 = VAR_0->priv;
    struct ebml_tags *VAR_2 = VAR_1->tags;

    if (!VAR_2)
        return;

    for (int VAR_3 = 0; VAR_3 < VAR_2->n_tag; VAR_3++) {
        struct ebml_tag VAR_4 = VAR_2->tag[VAR_3];
        struct mp_tags *VAR_5 = ((void*)0);

        if (VAR_4.targets.target_chapter_uid) {
            for (int VAR_6 = 0; VAR_6 < VAR_0->num_chapters; VAR_6++) {
                if (VAR_0->chapters[VAR_6].demuxer_id ==
                    VAR_4.targets.target_chapter_uid)
                {
                    VAR_5 = VAR_0->chapters[VAR_6].metadata;
                    break;
                }
            }
        } else if (VAR_4.targets.target_edition_uid) {
            for (int VAR_7 = 0; VAR_7 < VAR_0->num_editions; VAR_7++) {
                if (VAR_0->editions[VAR_7].demuxer_id ==
                    VAR_4.targets.target_edition_uid)
                {
                    VAR_5 = VAR_0->editions[VAR_7].metadata;
                    break;
                }
            }
        } else if (VAR_4.targets.target_track_uid) {
            for (int VAR_8 = 0; VAR_8 < VAR_1->num_tracks; VAR_8++) {
                if (VAR_1->tracks[VAR_8]->uid ==
                    VAR_4.targets.target_track_uid)
                {
                    struct sh_stream *VAR_9 = VAR_1->tracks[VAR_8]->stream;
                    if (VAR_9)
                        VAR_5 = VAR_9->tags;
                    break;
                }
            }
        } else if (VAR_4.targets.target_attachment_uid) {

        } else {
            VAR_5 = VAR_0->metadata;
        }

        if (VAR_5) {
            for (int VAR_10 = 0; VAR_10 < VAR_4.n_simple_tag; VAR_10++) {
                if (VAR_4.simple_tag[VAR_10].tag_name && VAR_4.simple_tag[VAR_10].tag_string) {
                    FUNC_0(VAR_5, VAR_4.simple_tag[VAR_10].tag_name,
                                         VAR_4.simple_tag[VAR_10].tag_string);
                }
            }
        }
    }
}
