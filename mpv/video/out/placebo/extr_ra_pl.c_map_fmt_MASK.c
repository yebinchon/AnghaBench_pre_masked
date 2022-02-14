
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ra_format {struct pl_fmt const* priv; } ;
struct ra {int num_formats; struct ra_format** formats; } ;
struct pl_fmt {int name; } ;


 int FUNC_0 (struct ra*,char*,int ) ;

__attribute__((used)) static struct ra_format *FUNC_1(struct ra *VAR_0, const struct pl_fmt *VAR_1)
{
    for (int VAR_2 = 0; VAR_2 < VAR_0->num_formats; VAR_2++) {
        if (VAR_0->formats[VAR_2]->priv == VAR_1)
            return VAR_0->formats[VAR_2];
    }

    FUNC_0(VAR_0, "Failed mapping pl_fmt '%s' to ra_fmt?\n", VAR_1->name);
    return ((void*)0);
}
