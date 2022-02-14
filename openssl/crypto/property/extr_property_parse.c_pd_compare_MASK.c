
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ name_idx; } ;
typedef TYPE_1__ PROPERTY_DEFINITION ;



__attribute__((used)) static int FUNC_0(const PROPERTY_DEFINITION *const *VAR_0,
                      const PROPERTY_DEFINITION *const *VAR_1)
{
    const PROPERTY_DEFINITION *VAR_2 = *VAR_0;
    const PROPERTY_DEFINITION *VAR_3 = *VAR_1;

    if (VAR_2->name_idx < VAR_3->name_idx)
        return -1;
    if (VAR_2->name_idx > VAR_3->name_idx)
        return 1;
    return 0;
}
