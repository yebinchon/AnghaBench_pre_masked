
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int sg_name_u; int sg_name; } ;
struct TYPE_3__ {size_t ga_len; } ;


 TYPE_2__* FUNC_0 () ;
 TYPE_1__ VAR_0 ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2()
{
    --VAR_0.ga_len;
    FUNC_1(FUNC_0()[VAR_0.ga_len].sg_name);
    FUNC_1(FUNC_0()[VAR_0.ga_len].sg_name_u);
}
