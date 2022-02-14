
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct m_opt_choice_alternatives {int value; scalar_t__ name; } ;
struct TYPE_4__ {int flags; int min; int max; struct m_opt_choice_alternatives* priv; int * type; } ;
typedef TYPE_1__ m_option_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int,int*,int*,int) ;
 int FUNC_2 (TYPE_1__ const*,int*,int*) ;
 double FUNC_3 (double) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_4(const m_option_t *VAR_3, void *VAR_4, double VAR_5, bool VAR_6)
{
    FUNC_0(VAR_3->type == &VAR_2);
    int VAR_7 = VAR_5 > 0 ? +1 : -1;
    bool VAR_8 = 0;
    int VAR_9 = *(int *)VAR_4;
    int VAR_10 = 0;

    if (FUNC_3(VAR_5) < 0.5)
        return;

    if ((VAR_3->flags & VAR_1) && (VAR_3->flags & VAR_0)) {
        int VAR_11 = VAR_9 + VAR_5;
        if (VAR_9 >= VAR_3->min && VAR_9 <= VAR_3->max &&
            VAR_11 >= VAR_3->min && VAR_11 <= VAR_3->max)
        {
            VAR_8 = 1;
            VAR_10 = VAR_11;
        } else {
            FUNC_1(VAR_7, VAR_9, &VAR_8, &VAR_10, VAR_3->min);
            FUNC_1(VAR_7, VAR_9, &VAR_8, &VAR_10, VAR_3->max);
        }
    }

    for (struct m_opt_choice_alternatives *VAR_12 = VAR_3->priv; VAR_12->name; VAR_12++)
        FUNC_1(VAR_7, VAR_9, &VAR_8, &VAR_10, VAR_12->value);

    if (!VAR_8) {
        int VAR_13, VAR_14;
        FUNC_2(VAR_3, &VAR_13, &VAR_14);
        VAR_10 = (VAR_7 == -1) ^ VAR_6 ? VAR_13 : VAR_14;
    }

    *(int *)VAR_4 = VAR_10;
}
