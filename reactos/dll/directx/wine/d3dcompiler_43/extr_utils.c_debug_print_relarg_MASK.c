
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct shader_reg {TYPE_2__* rel_reg; } ;
struct TYPE_3__ {int swizzle; } ;
struct TYPE_4__ {scalar_t__ type; scalar_t__ regnum; TYPE_1__ u; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 char* FUNC_0 (int ) ;
 char const* FUNC_1 (char*,char const*,...) ;

__attribute__((used)) static const char *FUNC_2(const struct shader_reg *VAR_2)
{
    const char *VAR_3;
    if (!VAR_2->rel_reg) return "";

    VAR_3 = FUNC_0(VAR_2->rel_reg->u.swizzle);

    if (VAR_2->rel_reg->type == VAR_0)
        return FUNC_1("[a%u%s]", VAR_2->rel_reg->regnum, VAR_3);
    else if(VAR_2->rel_reg->type == VAR_1 && VAR_2->rel_reg->regnum == 0)
        return FUNC_1("[aL%s]", VAR_3);
    else
        return "Unexpected relative addressing argument";
}
