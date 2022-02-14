
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct m_config_option {int dummy; } ;
struct m_config {int (* option_set_callback ) (int ,struct m_config_option*,void*,int) ;int option_set_callback_cb; } ;


 int VAR_0 ;
 int FUNC_0 (struct m_config*,struct m_config_option*,int) ;
 int FUNC_1 (struct m_config*,struct m_config_option*,void*,int) ;
 int FUNC_2 (int ,struct m_config_option*,void*,int) ;

int FUNC_3(struct m_config *VAR_1, struct m_config_option *VAR_2,
                            void *VAR_3, int VAR_4)
{
    if (!VAR_2)
        return VAR_0;

    if (VAR_1->option_set_callback) {
        int VAR_5 = FUNC_0(VAR_1, VAR_2, VAR_4);
        if (VAR_5 <= 1)
            return VAR_5;

        return VAR_1->option_set_callback(VAR_1->option_set_callback_cb,
                                           VAR_2, VAR_3, VAR_4);
    } else {
        return FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4);
    }
}
