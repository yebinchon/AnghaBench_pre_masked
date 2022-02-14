
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {void (* print ) (void*,char const*) ;void* print_user; } ;
struct TYPE_5__ {TYPE_1__ warn; } ;
typedef TYPE_2__ fz_context ;



void FUNC_0(fz_context *VAR_0, void (*VAR_1)(void *VAR_2, const char *VAR_3), void *VAR_4)
{
 VAR_0->warn.print_user = VAR_4;
 VAR_0->warn.print = VAR_1;
}
