
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ transition_t ;
struct SMACK {unsigned int m_state_count; unsigned char* char_to_symbol; int row_shift; scalar_t__* table; int symbol_count; } ;


 unsigned int VAR_0 ;
 unsigned int FUNC_0 (unsigned int,unsigned int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*,char*) ;
 scalar_t__* FUNC_3 (int) ;
 int FUNC_4 (scalar_t__*,int ,int) ;
 int FUNC_5 (int ) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_6(struct SMACK *VAR_2)
{
    unsigned VAR_3;
    unsigned VAR_4 = VAR_2->m_state_count;
    unsigned VAR_5;
    transition_t *VAR_6;
    unsigned char *VAR_7 = VAR_2->char_to_symbol;






    VAR_2->row_shift = FUNC_5(VAR_2->symbol_count);
    VAR_5 = 1 << VAR_2->row_shift;





    VAR_6 = FUNC_3(sizeof(transition_t) * VAR_4 * VAR_5);
    if (VAR_6 == ((void*)0)) {
        FUNC_2(VAR_1, "%s: out of memory error\n", "smack");
        FUNC_1(1);
    }
    FUNC_4(VAR_6, 0, sizeof(transition_t) * VAR_4 * VAR_5);


    for (VAR_3=0; VAR_3<VAR_4; VAR_3++) {
        unsigned VAR_8;

        for (VAR_8=0; VAR_8<VAR_0; VAR_8++) {
            unsigned VAR_9;
            unsigned VAR_10 = VAR_7[VAR_8];

            VAR_9 = FUNC_0(VAR_3,VAR_8);

            *(VAR_6 + VAR_3*VAR_5 + VAR_10) = (transition_t)VAR_9;
        }
    }

    VAR_2->table = VAR_6;
}
