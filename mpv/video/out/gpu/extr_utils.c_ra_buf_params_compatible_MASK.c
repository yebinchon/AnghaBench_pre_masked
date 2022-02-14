
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ra_buf_params {scalar_t__ type; scalar_t__ size; scalar_t__ host_mapped; scalar_t__ host_mutable; } ;



__attribute__((used)) static bool FUNC_0(const struct ra_buf_params *VAR_0,
                                     const struct ra_buf_params *VAR_1)
{
    return VAR_0->type == VAR_1->type &&
           VAR_0->size <= VAR_1->size &&
           VAR_0->host_mapped == VAR_1->host_mapped &&
           VAR_0->host_mutable == VAR_1->host_mutable;
}
