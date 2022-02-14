
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ra_format {int pixel_size; int num_components; scalar_t__* component_size; scalar_t__* component_depth; int ordered; } ;



__attribute__((used)) static bool FUNC_0(const struct ra_format *VAR_0)
{
    if (!VAR_0->pixel_size || !VAR_0->num_components || !VAR_0->ordered)
        return 0;
    for (int VAR_1 = 1; VAR_1 < VAR_0->num_components; VAR_1++) {
        if (VAR_0->component_size[VAR_1] != VAR_0->component_size[0] ||
            VAR_0->component_depth[VAR_1] != VAR_0->component_depth[0])
            return 0;
    }
    if (VAR_0->component_size[0] * VAR_0->num_components != VAR_0->pixel_size * 8)
        return 0;
    return 1;
}
