
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ auth_user_pass_file; int sc_info; scalar_t__ key_pass_file; } ;
struct context {TYPE_1__ options; } ;


 int FUNC_0 (scalar_t__,int *) ;
 int FUNC_1 (scalar_t__) ;

void
FUNC_2(const struct context *VAR_0)
{

    if (VAR_0->options.key_pass_file)
    {
        FUNC_1(VAR_0->options.key_pass_file);
    }
}
