
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct m_obj_desc {struct mp_user_filter_entry const* p; } ;
struct mp_user_filter_entry {struct m_obj_desc desc; } ;



__attribute__((used)) static bool FUNC_0(const struct mp_user_filter_entry **VAR_0, int VAR_1,
                          struct m_obj_desc *VAR_2, int VAR_3)
{
    if (VAR_3 >= VAR_1)
        return 0;
    const struct mp_user_filter_entry *VAR_4 = VAR_0[VAR_3];
    *VAR_2 = VAR_4->desc;
    VAR_2->p = VAR_4;
    return 1;
}
