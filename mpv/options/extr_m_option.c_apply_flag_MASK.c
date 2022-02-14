
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct m_option {struct m_opt_choice_alternatives* priv; } ;
struct m_opt_choice_alternatives {int value; scalar_t__ name; } ;
typedef int bstr ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_1(const struct m_option *VAR_2, int *VAR_3, bstr VAR_4)
{
    struct m_opt_choice_alternatives *VAR_5;
    for (VAR_5 = VAR_2->priv; VAR_5->name; VAR_5++) {
        if (FUNC_0(VAR_4, VAR_5->name)) {
            if (*VAR_3 & VAR_5->value)
                return VAR_0;
            *VAR_3 |= VAR_5->value;
            return 0;
        }
    }
    return VAR_1;
}
