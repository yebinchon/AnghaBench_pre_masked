
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
struct TYPE_4__ {int length; } ;
typedef TYPE_1__ intset ;
typedef int int64_t ;


 int FUNC_0 (TYPE_1__*,scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;

uint8_t FUNC_2(intset *VAR_0, uint32_t VAR_1, int64_t *VAR_2) {
    if (VAR_1 < FUNC_1(VAR_0->length)) {
        *VAR_2 = FUNC_0(VAR_0,VAR_1);
        return 1;
    }
    return 0;
}
