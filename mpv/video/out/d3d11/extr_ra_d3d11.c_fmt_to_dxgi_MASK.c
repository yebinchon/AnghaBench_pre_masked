
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ra_format {struct d3d_fmt* priv; } ;
struct d3d_fmt {int fmt; } ;
typedef int DXGI_FORMAT ;



__attribute__((used)) static DXGI_FORMAT FUNC_0(const struct ra_format *VAR_0)
{
    struct d3d_fmt *VAR_1 = VAR_0->priv;
    return VAR_1->fmt;
}
