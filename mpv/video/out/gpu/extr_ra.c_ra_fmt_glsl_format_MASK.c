
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ra_format {scalar_t__ ctype; scalar_t__ num_components; scalar_t__* component_depth; } ;
struct glsl_fmt {scalar_t__ ctype; scalar_t__ num_components; scalar_t__* component_depth; char const* glsl_format; } ;


 int FUNC_0 (struct glsl_fmt*) ;
 struct glsl_fmt* VAR_0 ;

const char *FUNC_1(const struct ra_format *VAR_1)
{
    for (int VAR_2 = 0; VAR_2 < FUNC_0(VAR_0); VAR_2++) {
        const struct glsl_fmt *VAR_3 = &VAR_0[VAR_2];

        if (VAR_1->ctype != VAR_3->ctype)
            continue;
        if (VAR_1->num_components != VAR_3->num_components)
            continue;

        for (int VAR_4 = 0; VAR_4 < VAR_1->num_components; VAR_4++) {
            if (VAR_1->component_depth[VAR_4] != VAR_3->component_depth[VAR_4])
                goto next_fmt;
        }

        return VAR_3->glsl_format;

next_fmt: ;
    }

    return ((void*)0);
}
