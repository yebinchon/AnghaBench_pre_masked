
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int transition_t ;
struct SmackMatches {int m_count; size_t* m_ids; } ;
struct SMACK {unsigned char* char_to_symbol; unsigned int row_shift; unsigned int m_match_limit; struct SmackMatches* m_match; int * table; } ;


 size_t FUNC_0 (unsigned char const*,int ,unsigned char const*,int const*,unsigned int*,unsigned int,unsigned int) ;
 size_t FUNC_1 (unsigned char const*,int ,unsigned char const*,int const*,unsigned int*,unsigned int) ;

size_t
FUNC_2( struct SMACK * VAR_0,
                        unsigned * VAR_1,
                        const void * VAR_2,
                        unsigned * VAR_3,
                        unsigned VAR_4
                        )
{
    const unsigned char *VAR_5 = (const unsigned char*)VAR_2;
    unsigned VAR_6;
    register size_t VAR_7 = *VAR_3;
    const unsigned char *VAR_8 = VAR_0->char_to_symbol;
    const transition_t *VAR_9 = VAR_0->table;
    register unsigned VAR_10 = VAR_0->row_shift;
    const struct SmackMatches *VAR_11 = VAR_0->m_match;
    unsigned VAR_12 = 0;
    size_t VAR_13 = (size_t)-1;
    register unsigned VAR_14 = VAR_0->m_match_limit;



    VAR_6 = *VAR_1 & 0xFFFFFF;


    VAR_12 = (*VAR_1)>>24;


    if (!VAR_12) {
        switch (VAR_10) {
            case 7:
                VAR_7 += FUNC_1(VAR_5 + VAR_7,
                                 VAR_4 - VAR_7,
                                 VAR_8,
                                 VAR_9,
                                 &VAR_6,
                                 VAR_14);
                break;
            default:
                VAR_7 += FUNC_0(VAR_5 + VAR_7,
                                 VAR_4 - VAR_7,
                                 VAR_8,
                                 VAR_9,
                                 &VAR_6,
                                 VAR_14,
                                 VAR_10);
                break;

        }





        if (VAR_11[VAR_6].m_count) {
            VAR_7++;
            VAR_12 = VAR_11[VAR_6].m_count;
        }
    }

    *VAR_3 = (unsigned)VAR_7;


    if (VAR_12) {
        VAR_13 = VAR_11[VAR_6].m_ids[VAR_12-1];
        VAR_12--;
    }

    *VAR_1 = VAR_6 | (VAR_12<<24);
    return VAR_13;
}
