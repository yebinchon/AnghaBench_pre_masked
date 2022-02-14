
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct color_fixup_desc {scalar_t__ x_source; scalar_t__ y_source; scalar_t__ z_source; scalar_t__ w_source; } ;
typedef enum complex_fixup { ____Placeholder_complex_fixup } complex_fixup ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static inline enum complex_fixup FUNC_0(struct color_fixup_desc VAR_1)
{
    enum complex_fixup VAR_2 = 0;
    if (VAR_1.x_source == VAR_0) VAR_2 |= (1u << 0);
    if (VAR_1.y_source == VAR_0) VAR_2 |= (1u << 1);
    if (VAR_1.z_source == VAR_0) VAR_2 |= (1u << 2);
    if (VAR_1.w_source == VAR_0) VAR_2 |= (1u << 3);
    return VAR_2;
}
