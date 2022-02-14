
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ra_format {struct pl_fmt const* priv; } ;
struct pl_fmt {int dummy; } ;



__attribute__((used)) static inline const struct pl_fmt *FUNC_0(const struct ra_format *VAR_0)
{
    return VAR_0->priv;
}
