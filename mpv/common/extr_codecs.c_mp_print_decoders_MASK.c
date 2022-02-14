
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_log {int dummy; } ;
struct mp_decoder_list {int num_entries; struct mp_decoder_entry* entries; } ;
struct mp_decoder_entry {int desc; int codec; int decoder; } ;


 int FUNC_0 (struct mp_log*,int,char*,...) ;
 scalar_t__ FUNC_1 (int ,int ) ;

void FUNC_2(struct mp_log *VAR_0, int VAR_1, const char *VAR_2,
                       struct mp_decoder_list *VAR_3)
{
    FUNC_0(VAR_0, VAR_1, "%s\n", VAR_2);
    for (int VAR_4 = 0; VAR_4 < VAR_3->num_entries; VAR_4++) {
        struct mp_decoder_entry *VAR_5 = &VAR_3->entries[VAR_4];
        FUNC_0(VAR_0, VAR_1, "    %s", VAR_5->decoder);
        if (FUNC_1(VAR_5->decoder, VAR_5->codec) != 0)
            FUNC_0(VAR_0, VAR_1, " (%s)", VAR_5->codec);
        FUNC_0(VAR_0, VAR_1, " - %s\n", VAR_5->desc);
    }
    if (VAR_3->num_entries == 0)
        FUNC_0(VAR_0, VAR_1, "    (no decoders)\n");
}
