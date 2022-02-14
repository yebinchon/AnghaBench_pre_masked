
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char const* (* description ) () ;} ;
typedef TYPE_1__ obs_module_t ;


 char const* FUNC_0 () ;

const char *FUNC_1(obs_module_t *VAR_0)
{
 return (VAR_0 && VAR_0->description) ? VAR_0->description() : ((void*)0);
}
