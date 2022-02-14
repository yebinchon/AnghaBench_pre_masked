
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int writemask; } ;
struct shader_reg {TYPE_1__ u; } ;


 int FUNC_0 (struct shader_reg const*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct shader_reg const*) ;
 char const* FUNC_3 (char*,int ,int ,int ) ;

const char *FUNC_4(const struct shader_reg *VAR_0)
{
    return FUNC_3("%s%s%s", FUNC_2(VAR_0),
            FUNC_0(VAR_0),
            FUNC_1(VAR_0->u.writemask));
}
