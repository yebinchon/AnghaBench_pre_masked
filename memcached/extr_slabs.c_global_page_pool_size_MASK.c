
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int slabs; } ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 TYPE_1__* VAR_3 ;
 int VAR_4 ;

unsigned int FUNC_2(bool *VAR_5) {
    unsigned int VAR_6 = 0;
    FUNC_0(&VAR_4);
    if (VAR_5 != ((void*)0))
        *VAR_5 = VAR_2 >= VAR_1 ? 1 : 0;
    VAR_6 = VAR_3[VAR_0].slabs;
    FUNC_1(&VAR_4);
    return VAR_6;
}
