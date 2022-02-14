
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_csp_params {int dummy; } ;
struct mp_csp_equalizer_state {int dummy; } ;
struct mp_csp_equalizer_opts {int dummy; } ;
struct m_config_cache {struct mp_csp_equalizer_opts* opts; } ;


 int FUNC_0 (struct m_config_cache*) ;
 int FUNC_1 (struct mp_csp_params*,struct mp_csp_equalizer_opts*) ;

void FUNC_2(struct mp_csp_equalizer_state *VAR_0,
                                struct mp_csp_params *VAR_1)
{
    struct m_config_cache *VAR_2 = (struct m_config_cache *)VAR_0;
    FUNC_0(VAR_2);
    struct mp_csp_equalizer_opts *VAR_3 = VAR_2->opts;
    FUNC_1(VAR_1, VAR_3);
}
