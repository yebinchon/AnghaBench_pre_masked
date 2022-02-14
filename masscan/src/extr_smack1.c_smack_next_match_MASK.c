
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SmackMatches {size_t* m_ids; } ;
struct SMACK {struct SmackMatches* m_match; } ;


 size_t VAR_0 ;

size_t
FUNC_0(struct SMACK *VAR_1, unsigned *VAR_2)
{
    unsigned VAR_3, VAR_4;
    size_t VAR_5 = VAR_0;


    VAR_3 = *VAR_2 & 0xFFFFFF;
    VAR_4 = (*VAR_2)>>24;


    if (VAR_4) {
        const struct SmackMatches *VAR_6 = VAR_1->m_match;
        VAR_5 = VAR_6[VAR_3].m_ids[VAR_4-1];
        VAR_4--;
    }


    *VAR_2 = VAR_3 | (VAR_4<<24);

    return VAR_5;
}
