
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ra_format {scalar_t__ ctype; int num_components; int pixel_size; int* component_depth; } ;
struct ra {int num_formats; struct ra_format** formats; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct ra_format const*) ;

const struct ra_format *FUNC_1(struct ra *VAR_1,
                                            int VAR_2,
                                            int VAR_3)
{
    for (int VAR_4 = 0; VAR_4 < VAR_1->num_formats; VAR_4++) {
        const struct ra_format *VAR_5 = VAR_1->formats[VAR_4];
        if (VAR_5->ctype == VAR_0 && VAR_5->num_components == VAR_3 &&
            VAR_5->pixel_size == VAR_2 * VAR_3 &&
            VAR_5->component_depth[0] == VAR_2 * 8 &&
            FUNC_0(VAR_5))
            return VAR_5;
    }
    return ((void*)0);
}
