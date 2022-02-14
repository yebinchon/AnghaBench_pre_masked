
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_shader_signature_element {scalar_t__ semantic_name; scalar_t__ semantic_idx; scalar_t__ sysval_semantic; scalar_t__ component_type; scalar_t__ register_idx; scalar_t__ mask; } ;
struct wined3d_shader_signature {unsigned int element_count; struct wined3d_shader_signature_element* elements; } ;


 int FUNC_0 (scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_1(const struct wined3d_shader_signature *VAR_0, const struct wined3d_shader_signature *VAR_1)
{
    unsigned int VAR_2;
    int VAR_3;

    if (VAR_0->element_count != VAR_1->element_count)
        return VAR_0->element_count < VAR_1->element_count ? -1 : 1;

    for (VAR_2 = 0; VAR_2 < VAR_0->element_count; ++VAR_2)
    {
        const struct wined3d_shader_signature_element *VAR_4, *VAR_5;

        VAR_4 = &VAR_0->elements[VAR_2];
        VAR_5 = &VAR_1->elements[VAR_2];

        if (!VAR_4->semantic_name || !VAR_5->semantic_name)
        {


            if (VAR_4->semantic_name != VAR_5->semantic_name)
                return VAR_4->semantic_name < VAR_5->semantic_name ? -1 : 1;
            continue;
        }

        if ((VAR_3 = FUNC_0(VAR_4->semantic_name, VAR_5->semantic_name)))
            return VAR_3;
        if (VAR_4->semantic_idx != VAR_5->semantic_idx)
            return VAR_4->semantic_idx < VAR_5->semantic_idx ? -1 : 1;
        if (VAR_4->sysval_semantic != VAR_5->sysval_semantic)
            return VAR_4->sysval_semantic < VAR_5->sysval_semantic ? -1 : 1;
        if (VAR_4->component_type != VAR_5->component_type)
            return VAR_4->component_type < VAR_5->component_type ? -1 : 1;
        if (VAR_4->register_idx != VAR_5->register_idx)
            return VAR_4->register_idx < VAR_5->register_idx ? -1 : 1;
        if (VAR_4->mask != VAR_5->mask)
            return VAR_4->mask < VAR_5->mask ? -1 : 1;
    }
    return 0;
}
