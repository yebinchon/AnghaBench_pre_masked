
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t transition_t ;
struct SmackMatches {char* DEBUG_name; scalar_t__ m_count; } ;
struct SMACK {unsigned char* char_to_symbol; size_t* table; unsigned int row_shift; struct SmackMatches* m_match; } ;
typedef int FOUND_CALLBACK ;


 unsigned int FUNC_0 (struct SMACK*,unsigned int,int ,void*,unsigned int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (char*,char*,unsigned char,char*,char*) ;

unsigned
FUNC_2( struct SMACK * VAR_1,
                const void *VAR_2,
                unsigned VAR_3,
                FOUND_CALLBACK VAR_4,
                void *VAR_5,
                unsigned *VAR_6)
{
    const unsigned char *VAR_7 = (const unsigned char*)VAR_2;
    unsigned VAR_8;
    unsigned VAR_9;
    const unsigned char *VAR_10 = VAR_1->char_to_symbol;
    transition_t *VAR_11 = VAR_1->table;
    unsigned VAR_12 = VAR_1->row_shift;
    unsigned VAR_13 = 0;
    const struct SmackMatches *VAR_14 = VAR_1->m_match;



    VAR_8 = *VAR_6 & 0xFFFFFF;


    for (VAR_9=0; VAR_9<VAR_3; VAR_9++) {
        unsigned char VAR_15;
        unsigned char VAR_16;


        VAR_16 = VAR_7[VAR_9];






        VAR_15 = VAR_10[VAR_16];
        VAR_8 = *(VAR_11 + (VAR_8<<VAR_12) + VAR_15);



        if (VAR_14[VAR_8].m_count)
            VAR_13 = FUNC_0(VAR_1, VAR_9, VAR_4, VAR_5, VAR_8);
    }
    *VAR_6 = VAR_8;
    return VAR_13;
}
