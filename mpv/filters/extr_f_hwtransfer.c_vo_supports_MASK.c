
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_hwdec_ctx {int hw_imgfmt; int* supported_formats; } ;



__attribute__((used)) static bool FUNC_0(struct mp_hwdec_ctx *VAR_0, int VAR_1, int VAR_2)
{
    if (!VAR_0->hw_imgfmt)
        return 1;
    if (VAR_0->hw_imgfmt != VAR_1)
        return 0;

    for (int VAR_3 = 0; VAR_0->supported_formats && VAR_0->supported_formats[VAR_3]; VAR_3++) {
        if (VAR_0->supported_formats[VAR_3] == VAR_2)
            return 1;
    }

    return 0;
}
