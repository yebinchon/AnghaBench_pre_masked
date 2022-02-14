
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sd_ass_priv {int ass_library; } ;
struct sd {int log; TYPE_1__* attachments; struct mp_subtitle_opts* opts; struct sd_ass_priv* priv; } ;
struct mp_subtitle_opts {int use_embedded_fonts; int ass_enabled; } ;
struct demux_attachment {int data_size; int data; int name; } ;
struct TYPE_2__ {int num_entries; struct demux_attachment* entries; } ;


 int FUNC_0 (int ,int ,int ,int ) ;
 scalar_t__ FUNC_1 (int ,struct demux_attachment*) ;

__attribute__((used)) static void FUNC_2(struct sd *VAR_0)
{
    struct sd_ass_priv *VAR_1 = VAR_0->priv;
    struct mp_subtitle_opts *VAR_2 = VAR_0->opts;
    if (!VAR_2->ass_enabled || !VAR_2->use_embedded_fonts || !VAR_0->attachments)
        return;
    for (int VAR_3 = 0; VAR_3 < VAR_0->attachments->num_entries; VAR_3++) {
        struct demux_attachment *VAR_4 = &VAR_0->attachments->entries[VAR_3];
        if (FUNC_1(VAR_0->log, VAR_4))
            FUNC_0(VAR_1->ass_library, VAR_4->name, VAR_4->data, VAR_4->data_size);
    }
}
