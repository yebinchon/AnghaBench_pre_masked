
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct m_config_option {int opt; } ;
struct m_config {int dummy; } ;
typedef int bstr ;


 int VAR_0 ;
 int VAR_1 ;
 struct m_config_option* FUNC_0 (struct m_config*,int *,int*,int*) ;
 int FUNC_1 (int ) ;

int FUNC_2(struct m_config *VAR_2, bstr VAR_3)
{
    bool VAR_4;
    int VAR_5;
    struct m_config_option *VAR_6 =
        FUNC_0(VAR_2, &VAR_3, &VAR_4, &VAR_5);

    if (!VAR_6)
        return VAR_1;

    if (VAR_4 || (VAR_5 & VAR_0))
        return 0;

    return FUNC_1(VAR_6->opt);
}
