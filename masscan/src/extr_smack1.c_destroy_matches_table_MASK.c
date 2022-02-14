
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SmackMatches {struct SmackMatches* DEBUG_name; struct SmackMatches* m_ids; scalar_t__ m_count; } ;
struct SMACK {unsigned int m_state_count; struct SmackMatches* m_match; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct SmackMatches*) ;

__attribute__((used)) static void
FUNC_2(struct SMACK *VAR_0)
{
    unsigned VAR_1;

    if (!VAR_0->m_match)
        return;


    for (VAR_1=0; VAR_1<VAR_0->m_state_count; VAR_1++) {
        struct SmackMatches *VAR_2;
        VAR_2 = &VAR_0->m_match[VAR_1];

        if (VAR_2->m_count) {
            FUNC_1(VAR_2->m_ids);
        } else {
            FUNC_0(VAR_2->m_ids == ((void*)0));
        }




    }

    FUNC_1(VAR_0->m_match);
    VAR_0->m_match = 0;
}
