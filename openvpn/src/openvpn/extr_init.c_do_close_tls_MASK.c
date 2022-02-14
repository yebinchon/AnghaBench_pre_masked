
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ pulled_options_state; int * options_string_remote; int * options_string_local; int * tls_multi; } ;
struct context {TYPE_1__ c2; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *,int) ;

__attribute__((used)) static void
FUNC_4(struct context *VAR_0)
{
    if (VAR_0->c2.tls_multi)
    {
        FUNC_3(VAR_0->c2.tls_multi, 1);
        VAR_0->c2.tls_multi = ((void*)0);
    }
    if (VAR_0->c2.pulled_options_state)
    {
        FUNC_1(VAR_0->c2.pulled_options_state);
        FUNC_2(VAR_0->c2.pulled_options_state);
    }
}
