
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct window_data {scalar_t__ relaxed; scalar_t__ excess_free; scalar_t__ evicted; scalar_t__ dirty; scalar_t__ age; } ;



__attribute__((used)) static void FUNC_0(struct window_data *VAR_0, struct window_data *VAR_1,
        uint32_t VAR_2) {
    for (int VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
        struct window_data *VAR_4 = &VAR_0[VAR_3];
        VAR_1->age += VAR_4->age;
        VAR_1->dirty += VAR_4->dirty;
        VAR_1->evicted += VAR_4->evicted;
        VAR_1->excess_free += VAR_4->excess_free;
        VAR_1->relaxed += VAR_4->relaxed;
    }
}
