
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


union m_option_value {TYPE_1__* type; int member_0; } ;
struct mp_log {int dummy; } ;
struct m_property {int dummy; } ;
struct m_option {TYPE_1__* type; int member_0; } ;
struct TYPE_2__ {int (* multiply ) (union m_option_value*,union m_option_value*,double) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (union m_option_value*,union m_option_value*) ;
 int FUNC_2 (struct mp_log*,struct m_property const*,char const*,int ,union m_option_value*,void*) ;
 int FUNC_3 (union m_option_value*,union m_option_value*,double) ;

__attribute__((used)) static int FUNC_4(struct mp_log *VAR_5,
                               const struct m_property *VAR_6,
                               const char *VAR_7, double VAR_8, void *VAR_9)
{
    union m_option_value VAR_10 = {0};
    struct m_option VAR_11 = {0};
    int VAR_12;

    VAR_12 = FUNC_2(VAR_5, VAR_6, VAR_7, VAR_1,
                      &VAR_11, VAR_9);
    if (VAR_12 != VAR_3)
        return VAR_12;
    FUNC_0(VAR_11.type);

    if (!VAR_11.type->multiply)
        return VAR_2;

    VAR_12 = FUNC_2(VAR_5, VAR_6, VAR_7, VAR_0, &VAR_10, VAR_9);
    if (VAR_12 != VAR_3)
        return VAR_12;
    VAR_11.type->multiply(&VAR_11, &VAR_10, VAR_8);
    VAR_12 = FUNC_2(VAR_5, VAR_6, VAR_7, VAR_4, &VAR_10, VAR_9);
    FUNC_1(&VAR_11, &VAR_10);
    return VAR_12;
}
