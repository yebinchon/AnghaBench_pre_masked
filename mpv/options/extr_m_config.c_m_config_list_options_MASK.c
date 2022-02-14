
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct m_config_option {int name; scalar_t__ is_hidden; } ;
struct m_config {int num_opts; struct m_config_option* opts; } ;


 int FUNC_0 (void*,char**,int,char*) ;
 char** FUNC_1 (void*) ;
 char* FUNC_2 (void*,int ) ;

char **FUNC_3(void *VAR_0, const struct m_config *VAR_1)
{
    char **VAR_2 = FUNC_1(VAR_0);
    int VAR_3 = 0;
    for (int VAR_4 = 0; VAR_4 < VAR_1->num_opts; VAR_4++) {
        struct m_config_option *VAR_5 = &VAR_1->opts[VAR_4];
        if (VAR_5->is_hidden)
            continue;


        char *VAR_6 = FUNC_2(VAR_0, VAR_5->name);
        FUNC_0(VAR_0, VAR_2, VAR_3, VAR_6);
    }
    FUNC_0(VAR_0, VAR_2, VAR_3, ((void*)0));
    return VAR_2;
}
