
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ name; } ;
typedef TYPE_1__ type_t ;


 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_1(const type_t *VAR_0, const type_t *VAR_1)
{
    if (VAR_0 == VAR_1
        || (VAR_0->name
            && VAR_1->name
            && FUNC_0(VAR_0->name, VAR_1->name) == 0))
        return 0;

    return 1;
}
