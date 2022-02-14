
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct m_config_option {int name; } ;
struct m_config {int num_opts; struct m_config_option* opts; } ;
struct bstr {int len; } ;


 struct bstr FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct bstr,struct bstr) ;

struct m_config_option *FUNC_2(const struct m_config *VAR_0,
                                            struct bstr VAR_1)
{
    if (!VAR_1.len)
        return ((void*)0);

    for (int VAR_2 = 0; VAR_2 < VAR_0->num_opts; VAR_2++) {
        struct m_config_option *VAR_3 = &VAR_0->opts[VAR_2];
        struct bstr VAR_4 = FUNC_0(VAR_3->name);
        if (FUNC_1(VAR_4, VAR_1) == 0)
            return VAR_3;
    }

    return ((void*)0);
}
