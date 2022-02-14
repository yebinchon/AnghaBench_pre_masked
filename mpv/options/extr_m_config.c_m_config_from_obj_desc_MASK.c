
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mpv_global {int dummy; } ;
struct mp_log {int dummy; } ;
struct m_obj_desc {int (* set_defaults ) (struct mpv_global*,int ) ;int options; int priv_defaults; int priv_size; } ;
struct m_config {int optstruct; struct mpv_global* global; } ;


 struct m_config* FUNC_0 (void*,struct mp_log*,int ,int ,int ) ;
 int FUNC_1 (struct mpv_global*,int ) ;

__attribute__((used)) static struct m_config *FUNC_2(void *VAR_0,
                                               struct mp_log *VAR_1,
                                               struct mpv_global *VAR_2,
                                               struct m_obj_desc *VAR_3)
{
    struct m_config *VAR_4 =
        FUNC_0(VAR_0, VAR_1, VAR_3->priv_size, VAR_3->priv_defaults,
                     VAR_3->options);
    VAR_4->global = VAR_2;
    if (VAR_3->set_defaults && VAR_4->global)
        VAR_3->set_defaults(VAR_4->global, VAR_4->optstruct);
    return VAR_4;
}
