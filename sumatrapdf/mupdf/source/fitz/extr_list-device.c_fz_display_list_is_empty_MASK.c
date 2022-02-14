
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ len; } ;
typedef TYPE_1__ fz_display_list ;
typedef int fz_context ;



int FUNC_0(fz_context *VAR_0, const fz_display_list *VAR_1)
{
 return !VAR_1 || VAR_1->len == 0;
}
