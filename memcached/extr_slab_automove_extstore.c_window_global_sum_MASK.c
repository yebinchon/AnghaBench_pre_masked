
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct window_global {scalar_t__ pool_low; scalar_t__ pool_high; } ;



__attribute__((used)) static void FUNC_0(struct window_global *VAR_0,
        struct window_global *VAR_1, uint32_t VAR_2) {
    for (int VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
        struct window_global *VAR_4 = &VAR_0[VAR_3];
        VAR_1->pool_high += VAR_4->pool_high;
        VAR_1->pool_low += VAR_4->pool_low;
    }
}
