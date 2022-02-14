
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* orig; scalar_t__ is_alias; } ;
typedef TYPE_1__ type_t ;



__attribute__((used)) static inline type_t *FUNC_0(const type_t *VAR_0)
{
    if (VAR_0->is_alias)
        return FUNC_0(VAR_0->orig);
    else
        return (type_t *)VAR_0;
}
