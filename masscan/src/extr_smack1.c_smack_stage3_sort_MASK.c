
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct SMACK {unsigned int m_state_count; unsigned int m_match_limit; TYPE_1__* m_match; } ;
struct TYPE_2__ {scalar_t__ m_count; } ;


 int FUNC_0 (struct SMACK*,unsigned int,unsigned int) ;

__attribute__((used)) static void
FUNC_1(struct SMACK *VAR_0)
{
    unsigned VAR_1 = 0;
    unsigned VAR_2 = VAR_0->m_state_count;

    for (;;) {

        while (VAR_1 < VAR_2 && VAR_0->m_match[VAR_1].m_count == 0)
            VAR_1++;
        while (VAR_1 < VAR_2 && VAR_0->m_match[VAR_2-1].m_count != 0)
            VAR_2--;

        if (VAR_1 >= VAR_2)
            break;

        FUNC_0(VAR_0, VAR_1, VAR_2-1);
    }

    VAR_0->m_match_limit = VAR_1;
}
