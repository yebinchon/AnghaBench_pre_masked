
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_decoder_list {struct mp_decoder_entry* entries; } ;
struct mp_decoder_entry {int desc; int decoder; int codec; } ;
struct m_sub_property {char* member_0; int member_1; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct m_sub_property*,int,void*) ;

__attribute__((used)) static int FUNC_2(int VAR_0, int VAR_1, void *VAR_2, void *VAR_3)
{
    struct mp_decoder_list *VAR_4 = VAR_3;
    struct mp_decoder_entry *VAR_5 = &VAR_4->entries[VAR_0];

    struct m_sub_property VAR_6[] = {
        {"codec", FUNC_0(VAR_5->codec)},
        {"driver" , FUNC_0(VAR_5->decoder)},
        {"description", FUNC_0(VAR_5->desc)},
        {0}
    };

    return FUNC_1(VAR_6, VAR_1, VAR_2);
}
