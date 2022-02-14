
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mpv_global {int dummy; } ;
struct mp_csp_equalizer_state {int dummy; } ;
struct m_config_cache {int dummy; } ;


 struct m_config_cache* FUNC_0 (void*,struct mpv_global*,int *) ;
 int VAR_0 ;

struct mp_csp_equalizer_state *FUNC_1(void *VAR_1,
                                                    struct mpv_global *VAR_2)
{
    struct m_config_cache *VAR_3 = FUNC_0(VAR_1, VAR_2,
                                                    &VAR_0);

    return (struct mp_csp_equalizer_state *)VAR_3;
}
