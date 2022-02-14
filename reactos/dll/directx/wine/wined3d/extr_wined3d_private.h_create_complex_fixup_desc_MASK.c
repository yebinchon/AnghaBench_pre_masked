
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct color_fixup_desc {unsigned int member_0; unsigned int member_2; unsigned int member_4; unsigned int member_6; int member_7; int member_5; int member_3; int member_1; } ;
typedef enum complex_fixup { ____Placeholder_complex_fixup } complex_fixup ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline struct color_fixup_desc FUNC_0(enum complex_fixup VAR_2)
{
    struct color_fixup_desc VAR_3 =
    {
        0u, VAR_2 & (1u << 0) ? VAR_1 : VAR_0,
        0u, VAR_2 & (1u << 1) ? VAR_1 : VAR_0,
        0u, VAR_2 & (1u << 2) ? VAR_1 : VAR_0,
        0u, VAR_2 & (1u << 3) ? VAR_1 : VAR_0,
    };
    return VAR_3;
}
