
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ name; scalar_t__ biggest_key; } ;
typedef TYPE_1__ typeinfo ;


 int FUNC_0 (void*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (TYPE_1__*) ;

void FUNC_3(void* VAR_0, void* VAR_1) {
    typeinfo *VAR_2 = VAR_1;
    FUNC_0(VAR_0);
    if (VAR_2->biggest_key)
        FUNC_1(VAR_2->biggest_key);
    FUNC_1(VAR_2->name);
    FUNC_2(VAR_2);
}
