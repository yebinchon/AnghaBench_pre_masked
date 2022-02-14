
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct m_config_option {TYPE_1__* opt; } ;
struct m_config {int dummy; } ;
struct bstr {int dummy; } ;
struct TYPE_2__ {int * type; } ;


 struct m_config_option* FUNC_0 (struct m_config const*,struct bstr) ;
 int VAR_0 ;

struct m_config_option *FUNC_1(const struct m_config *VAR_1,
                                        struct bstr VAR_2)
{
    struct m_config_option *VAR_3 = FUNC_0(VAR_1, VAR_2);


    if (VAR_3 && VAR_3->opt->type == &VAR_0)
        VAR_3 = ((void*)0);
    return VAR_3;
}
