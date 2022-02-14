
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_decoder_list {int num_entries; int entries; } ;
struct mp_decoder_entry {int desc; int decoder; int codec; } ;


 int FUNC_0 (struct mp_decoder_list*,int ,int ,struct mp_decoder_entry) ;
 int FUNC_1 (struct mp_decoder_list*,char const*) ;

void FUNC_2(struct mp_decoder_list *VAR_0, const char *VAR_1,
                    const char *VAR_2, const char *VAR_3)
{
    struct mp_decoder_entry VAR_4 = {
        .codec = FUNC_1(VAR_0, VAR_1),
        .decoder = FUNC_1(VAR_0, VAR_2),
        .desc = FUNC_1(VAR_0, VAR_3),
    };
    FUNC_0(VAR_0, VAR_0->entries, VAR_0->num_entries, VAR_4);
}
