
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int sl_curr; unsigned int perslab; } ;
typedef TYPE_1__ slabclass_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;

unsigned int FUNC_2(const unsigned int VAR_4, bool *VAR_5,
        unsigned int *VAR_6) {
    unsigned int VAR_7;
    slabclass_t *VAR_8;

    FUNC_0(&VAR_3);
    VAR_8 = &VAR_2[VAR_4];
    VAR_7 = VAR_8->sl_curr;
    if (VAR_5 != ((void*)0))
        *VAR_5 = VAR_1 >= VAR_0 ? 1 : 0;
    if (VAR_6 != ((void*)0))
        *VAR_6 = VAR_8->perslab;
    FUNC_1(&VAR_3);
    return VAR_7;
}
