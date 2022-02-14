
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct m_profile {int name; struct m_profile* next; } ;
struct m_config {struct m_profile* profiles; } ;
typedef int bstr ;


 scalar_t__ FUNC_0 (int ,int ) ;

struct m_profile *FUNC_1(const struct m_config *VAR_0, bstr VAR_1)
{
    for (struct m_profile *VAR_2 = VAR_0->profiles; VAR_2; VAR_2 = VAR_2->next) {
        if (FUNC_0(VAR_1, VAR_2->name))
            return VAR_2;
    }
    return ((void*)0);
}
