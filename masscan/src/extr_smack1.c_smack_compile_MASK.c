
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SmackPattern {scalar_t__ is_anchor_end; scalar_t__ is_anchor_begin; scalar_t__ pattern_length; } ;
struct SMACK {int m_state_max; scalar_t__ is_anchor_begin; struct SmackPattern** m_pattern_list; scalar_t__ m_pattern_count; int * char_to_symbol; scalar_t__ is_nocase; scalar_t__ is_anchor_end; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct SMACK*,int) ;
 int FUNC_1 (struct SMACK*,int) ;
 int FUNC_2 (struct SMACK*) ;
 int FUNC_3 (struct SMACK*) ;
 int FUNC_4 (struct SMACK*,int ) ;
 int FUNC_5 (struct SMACK*) ;
 int FUNC_6 (struct SMACK*) ;
 int FUNC_7 (struct SMACK*) ;
 int FUNC_8 (struct SMACK*) ;
 int FUNC_9 (struct SMACK*) ;
 int FUNC_10 (struct SMACK*) ;
 int FUNC_11 (struct SMACK*,int ,int ) ;
 size_t FUNC_12 (unsigned int) ;

void
FUNC_13(struct SMACK *VAR_4)
{
    unsigned VAR_5;




    if (VAR_4->is_anchor_begin)
        FUNC_4(VAR_4, VAR_2);
    if (VAR_4->is_anchor_end)
        FUNC_4(VAR_4, VAR_1);
    if (VAR_4->is_nocase) {
        for (VAR_5='A'; VAR_5<='Z'; VAR_5++) {
            VAR_4->char_to_symbol[VAR_5] = VAR_4->char_to_symbol[FUNC_12(VAR_5)];
        }
    }







    VAR_4->m_state_max = 1;
    for (VAR_5=0; VAR_5<(int)VAR_4->m_pattern_count; VAR_5++) {
        struct SmackPattern *VAR_6 = VAR_4->m_pattern_list[VAR_5];

        VAR_4->m_state_max += VAR_6->pattern_length;
        VAR_4->m_state_max += VAR_6->is_anchor_begin;
        VAR_4->m_state_max += VAR_6->is_anchor_end;
    }




    FUNC_0(VAR_4, VAR_4->m_state_max);
    FUNC_1(VAR_4, VAR_4->m_state_max);





    FUNC_6(VAR_4);
    FUNC_7(VAR_4);
    FUNC_8(VAR_4);




    if (VAR_4->is_anchor_begin) {
        FUNC_11(VAR_4, VAR_0, VAR_3);
    }


    FUNC_9(VAR_4);




    FUNC_10(VAR_4);




    FUNC_5(VAR_4);







    FUNC_3(VAR_4);
    FUNC_2(VAR_4);

}
