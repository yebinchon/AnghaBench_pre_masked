
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mpv_global {int dummy; } ;
struct mp_log {int dummy; } ;
struct m_obj_desc {int priv_size; int priv_defaults; int options; } ;
struct m_config_group {int group; } ;


 struct m_config_group* FUNC_0 (struct mpv_global*,int ) ;
 int FUNC_1 (void*,int ,int ) ;
 void* FUNC_2 (void*,struct mpv_global*,int ) ;
 void* FUNC_3 (void*,int ) ;

void *FUNC_4(void *VAR_0, struct mp_log *VAR_1,
        struct mpv_global *VAR_2, struct m_obj_desc *VAR_3, const char *VAR_4)
{
    const struct m_config_group *VAR_5 = FUNC_0(VAR_2, VAR_3->options);
    if (VAR_5) {
        return FUNC_2(VAR_0, VAR_2, VAR_5->group);
    } else {
        void *VAR_6 = FUNC_3(VAR_0, VAR_3->priv_size);
        if (VAR_3->priv_defaults)
            FUNC_1(VAR_6, VAR_3->priv_defaults, VAR_3->priv_size);
        return VAR_6;
    }
}
