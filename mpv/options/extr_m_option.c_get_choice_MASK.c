
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct m_opt_choice_alternatives {int value; scalar_t__ name; } ;
struct TYPE_3__ {int flags; int min; int max; struct m_opt_choice_alternatives* priv; } ;
typedef TYPE_1__ m_option_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;

__attribute__((used)) static struct m_opt_choice_alternatives *FUNC_1(const m_option_t *VAR_2,
                                                    const void *VAR_3, int *VAR_4)
{
    int VAR_5 = *(int *)VAR_3;
    struct m_opt_choice_alternatives *VAR_6;
    for (VAR_6 = VAR_2->priv; VAR_6->name; VAR_6++) {
        if (VAR_6->value == VAR_5)
            return VAR_6;
    }
    if ((VAR_2->flags & VAR_1) && (VAR_2->flags & VAR_0)) {
        if (VAR_5 >= VAR_2->min && VAR_5 <= VAR_2->max) {
            *VAR_4 = VAR_5;
            return ((void*)0);
        }
    }
    FUNC_0();
}
