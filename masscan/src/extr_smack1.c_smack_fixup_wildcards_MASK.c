
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ transition_t ;
struct SmackPattern {size_t pattern_length; char* pattern; int is_wildcards; } ;
struct SMACK {size_t m_pattern_count; size_t row_shift; size_t* char_to_symbol; scalar_t__* table; scalar_t__ is_anchor_begin; struct SmackPattern** m_pattern_list; } ;


 int FUNC_0 (struct SMACK*,unsigned int*,char*,unsigned int*,unsigned int) ;

__attribute__((used)) static void
FUNC_1(struct SMACK *VAR_0)
{
    size_t VAR_1;

    for (VAR_1=0; VAR_1<VAR_0->m_pattern_count; VAR_1++) {
        size_t VAR_2;
        struct SmackPattern *VAR_3 = VAR_0->m_pattern_list[VAR_1];


        if (!VAR_3->is_wildcards)
            continue;


        for (VAR_2=0; VAR_2<VAR_3->pattern_length; VAR_2++) {
            unsigned VAR_4 = 0;
            unsigned VAR_5 = 0;
            size_t VAR_6 = ((size_t)1 << VAR_0->row_shift);
            transition_t *VAR_7;
            transition_t VAR_8;
            transition_t VAR_9 = (VAR_0->is_anchor_begin?1:0);
            size_t VAR_10;


            if (VAR_3->pattern[VAR_2] != '*')
                continue;


            while (VAR_5 < VAR_2)
                FUNC_0(VAR_0, &VAR_4, VAR_3->pattern, &VAR_5, (unsigned)VAR_2);

            VAR_4 = VAR_4 & 0xFFFFFF;
            VAR_7 = VAR_0->table + (VAR_4 << VAR_0->row_shift);
            VAR_8 = VAR_7[VAR_0->char_to_symbol['*']];

            for (VAR_10=0; VAR_10<VAR_6; VAR_10++) {
                if (VAR_7[VAR_10] == VAR_9)
                    VAR_7[VAR_10] = VAR_8;
            }
        }
    }

}
