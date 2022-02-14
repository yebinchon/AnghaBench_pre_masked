
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct m_config_option {int data; int opt; } ;
struct m_config {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct m_config*,struct m_config_option*,int) ;
 int FUNC_1 (struct m_config*,struct m_config_option*,void*,int) ;
 int FUNC_2 (struct m_config_option*,int) ;
 int FUNC_3 (struct m_config*,struct m_config_option*) ;
 int FUNC_4 (int ,int ,void*) ;

int FUNC_5(struct m_config *VAR_2,
                                   struct m_config_option *VAR_3,
                                   void *VAR_4, int VAR_5)
{
    if (!VAR_3)
        return VAR_0;

    int VAR_6 = FUNC_0(VAR_2, VAR_3, VAR_5);
    if (VAR_6 <= 1)
        return VAR_6;

    VAR_6 = FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5);
    if (VAR_6 != VAR_0)
        return VAR_6;



    if (!VAR_3->data)
        return VAR_5 & VAR_1 ? 0 : VAR_0;

    FUNC_4(VAR_3->opt, VAR_3->data, VAR_4);

    FUNC_2(VAR_3, VAR_5);
    FUNC_3(VAR_2, VAR_3);

    return 0;
}
