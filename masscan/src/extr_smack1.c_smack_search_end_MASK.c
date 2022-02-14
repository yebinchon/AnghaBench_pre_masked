
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int transition_t ;
struct SmackMatches {scalar_t__ m_count; } ;
struct SMACK {unsigned int* table; unsigned int row_shift; unsigned int* char_to_symbol; struct SmackMatches* m_match; } ;
typedef int FOUND_CALLBACK ;


 size_t VAR_0 ;
 unsigned int FUNC_0 (struct SMACK*,int ,int ,void*,unsigned int) ;

unsigned
FUNC_1( struct SMACK * VAR_1,
                        FOUND_CALLBACK VAR_2,
                        void * VAR_3,
                        unsigned * VAR_4)
{
    unsigned VAR_5 = 0;
    transition_t *VAR_6 = VAR_1->table;
    unsigned VAR_7 = VAR_1->row_shift;
    unsigned VAR_8 = *VAR_4;
    const struct SmackMatches *VAR_9 = VAR_1->m_match;
    unsigned VAR_10 = VAR_1->char_to_symbol[VAR_0];






    VAR_8 = *(VAR_6 + (VAR_8<<VAR_7) + VAR_10);
    if (VAR_9[VAR_8].m_count)
        VAR_5 = FUNC_0(VAR_1, 0, VAR_2, VAR_3, VAR_8);

    *VAR_4 = VAR_8;
    return VAR_5;
}
