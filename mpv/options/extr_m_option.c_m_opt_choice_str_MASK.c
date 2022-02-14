
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct m_opt_choice_alternatives {char const* name; int value; } ;



const char *FUNC_0(const struct m_opt_choice_alternatives *VAR_0,
                             int VAR_1)
{
    for (const struct m_opt_choice_alternatives *VAR_2 = VAR_0; VAR_2->name; VAR_2++) {
        if (VAR_2->value == VAR_1)
            return VAR_2->name;
    }
    return ((void*)0);
}
