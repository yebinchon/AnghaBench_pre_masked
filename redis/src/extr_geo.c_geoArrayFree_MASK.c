
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t used; struct TYPE_4__* array; int member; } ;
typedef TYPE_1__ geoArray ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;

void FUNC_2(geoArray *VAR_0) {
    size_t VAR_1;
    for (VAR_1 = 0; VAR_1 < VAR_0->used; VAR_1++) FUNC_0(VAR_0->array[VAR_1].member);
    FUNC_1(VAR_0->array);
    FUNC_1(VAR_0);
}
