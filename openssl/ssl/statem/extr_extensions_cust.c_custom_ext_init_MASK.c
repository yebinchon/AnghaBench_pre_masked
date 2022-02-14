
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t meths_count; TYPE_2__* meths; } ;
typedef TYPE_1__ custom_ext_methods ;
struct TYPE_5__ {scalar_t__ ext_flags; } ;
typedef TYPE_2__ custom_ext_method ;



void FUNC_0(custom_ext_methods *VAR_0)
{
    size_t VAR_1;
    custom_ext_method *VAR_2 = VAR_0->meths;

    for (VAR_1 = 0; VAR_1 < VAR_0->meths_count; VAR_1++, VAR_2++)
        VAR_2->ext_flags = 0;
}
