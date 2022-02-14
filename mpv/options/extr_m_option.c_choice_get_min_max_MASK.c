
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct m_option {int flags; int max; int min; struct m_opt_choice_alternatives* priv; int * type; } ;
struct m_opt_choice_alternatives {int value; scalar_t__ name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int) ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_3(const struct m_option *VAR_5, int *VAR_6, int *VAR_7)
{
    FUNC_2(VAR_5->type == &VAR_4);
    *VAR_6 = VAR_0;
    *VAR_7 = VAR_1;
    for (struct m_opt_choice_alternatives *VAR_8 = VAR_5->priv; VAR_8->name; VAR_8++) {
        *VAR_6 = FUNC_1(*VAR_6, VAR_8->value);
        *VAR_7 = FUNC_0(*VAR_7, VAR_8->value);
    }
    if ((VAR_5->flags & VAR_3) && (VAR_5->flags & VAR_2)) {
        *VAR_6 = FUNC_1(*VAR_6, VAR_5->min);
        *VAR_7 = FUNC_0(*VAR_7, VAR_5->max);
    }
}
