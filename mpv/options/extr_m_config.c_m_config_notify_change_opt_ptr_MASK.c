
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct m_config_option {void* data; } ;
struct m_config {int num_opts; struct m_config_option* opts; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct m_config*,struct m_config_option*) ;

void FUNC_2(struct m_config *VAR_0, void *VAR_1)
{
    for (int VAR_2 = 0; VAR_2 < VAR_0->num_opts; VAR_2++) {
        struct m_config_option *VAR_3 = &VAR_0->opts[VAR_2];
        if (VAR_3->data == VAR_1) {
            FUNC_1(VAR_0, VAR_3);
            return;
        }
    }


    FUNC_0(0);
}
