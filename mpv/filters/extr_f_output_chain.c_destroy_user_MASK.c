
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_user_filter {int args; } ;
struct mp_filter {struct mp_user_filter* priv; } ;
struct m_option {int * type; } ;


 int FUNC_0 (struct m_option*,int *) ;
 int VAR_0 ;
 int FUNC_1 (struct mp_filter*) ;

__attribute__((used)) static void FUNC_2(struct mp_filter *VAR_1)
{
    struct mp_user_filter *VAR_2 = VAR_1->priv;

    struct m_option VAR_3 = {.type = &VAR_0};
    FUNC_0(&VAR_3, &VAR_2->args);

    FUNC_1(VAR_1);
}
