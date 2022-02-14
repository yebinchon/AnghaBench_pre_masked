
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SMACK {scalar_t__ m_state_table; } ;


 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static void
FUNC_1(struct SMACK *VAR_0)
{
    if (VAR_0->m_state_table) {
        FUNC_0(VAR_0->m_state_table);
        VAR_0->m_state_table = 0;
    }
}
