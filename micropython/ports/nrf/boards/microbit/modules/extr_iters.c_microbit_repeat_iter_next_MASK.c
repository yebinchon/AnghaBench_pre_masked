
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ index; int iterable; } ;
typedef TYPE_1__ repeat_iterator_t ;
typedef scalar_t__ mp_obj_t ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,int ,int ) ;

__attribute__((used)) static mp_obj_t FUNC_4(mp_obj_t VAR_1) {
    repeat_iterator_t *VAR_2 = (repeat_iterator_t *)VAR_1;
    VAR_2->index++;
    if (VAR_2->index >= FUNC_1(FUNC_2(VAR_2->iterable))) {
        VAR_2->index = 0;
    }
    return FUNC_3(VAR_2->iterable, FUNC_0(VAR_2->index), VAR_0);
}
