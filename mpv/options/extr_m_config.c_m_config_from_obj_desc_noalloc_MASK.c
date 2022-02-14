
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_log {int dummy; } ;
struct m_obj_desc {int options; int priv_defaults; } ;
struct m_config {int dummy; } ;


 struct m_config* FUNC_0 (void*,struct mp_log*,int ,int ,int ) ;

struct m_config *FUNC_1(void *VAR_0,
                                                struct mp_log *VAR_1,
                                                struct m_obj_desc *VAR_2)
{
    return FUNC_0(VAR_0, VAR_1, 0, VAR_2->priv_defaults, VAR_2->options);
}
