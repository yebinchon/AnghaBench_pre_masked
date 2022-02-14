
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int const uint32_t ;
struct TYPE_3__ {size_t size; int * data; } ;
typedef TYPE_1__ FUZZ_dataProducer_t ;



uint32_t FUNC_0(FUZZ_dataProducer_t *VAR_0) {
    const uint8_t* VAR_1 = VAR_0->data;
    const size_t VAR_2 = VAR_0->size;
    if (VAR_2 == 0) {
        return 0;
    } else if (VAR_2 < 4) {
        VAR_0->size -= 1;
        return (uint32_t)VAR_1[VAR_2 - 1];
    } else {
        VAR_0->size -= 4;
        return *(VAR_1 + VAR_2 - 4);
    }
}
