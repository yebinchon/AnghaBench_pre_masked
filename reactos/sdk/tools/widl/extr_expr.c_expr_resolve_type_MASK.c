
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int type_t ;
struct expression_type {int const* type; } ;
struct expr_loc {int dummy; } ;
typedef int expr_t ;


 struct expression_type FUNC_0 (struct expr_loc const*,int const*,int const*) ;

const type_t *FUNC_1(const struct expr_loc *VAR_0, const type_t *VAR_1, const expr_t *VAR_2)
{
    struct expression_type VAR_3;
    VAR_3 = FUNC_0(VAR_0, VAR_1, VAR_2);
    return VAR_3.type;
}
