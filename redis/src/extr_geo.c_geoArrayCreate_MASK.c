
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ used; scalar_t__ buckets; int * array; } ;
typedef TYPE_1__ geoArray ;


 TYPE_1__* FUNC_0 (int) ;

geoArray *FUNC_1(void) {
    geoArray *VAR_0 = FUNC_0(sizeof(*VAR_0));

    VAR_0->array = ((void*)0);
    VAR_0->buckets = 0;
    VAR_0->used = 0;
    return VAR_0;
}
