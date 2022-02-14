
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {size_t const item_size_max; } ;
struct TYPE_3__ {size_t const size; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 TYPE_2__ VAR_2 ;
 TYPE_1__* VAR_3 ;

unsigned int FUNC_0(const size_t VAR_4) {
    int VAR_5 = VAR_0;

    if (VAR_4 == 0 || VAR_4 > VAR_2.item_size_max)
        return 0;
    while (VAR_4 > VAR_3[VAR_5].size)
        if (VAR_5++ == VAR_1)
            return VAR_1;
    return VAR_5;
}
