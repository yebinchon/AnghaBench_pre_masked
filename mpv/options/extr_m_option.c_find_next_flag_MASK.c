
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct m_option {struct m_opt_choice_alternatives* priv; } ;
struct m_opt_choice_alternatives {char const* name; int value; } ;


 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static const char *FUNC_1(const struct m_option *VAR_0, int *VAR_1)
{
    struct m_opt_choice_alternatives *VAR_2 = ((void*)0);
    struct m_opt_choice_alternatives *VAR_3;
    for (VAR_3 = VAR_0->priv; VAR_3->name; VAR_3++) {
        if (VAR_3->value && (VAR_3->value & (*VAR_1)) == VAR_3->value) {
            if (!VAR_2 || FUNC_0(VAR_3->value) > FUNC_0(VAR_2->value))
                VAR_2 = VAR_3;
        }
    }
    if (VAR_2) {
        *VAR_1 = *VAR_1 & ~(unsigned)VAR_2->value;
        return VAR_2->name;
    }
    *VAR_1 = 0;
    return ((void*)0);
}
