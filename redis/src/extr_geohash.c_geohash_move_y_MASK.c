
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
typedef scalar_t__ int8_t ;
struct TYPE_3__ {int bits; int step; } ;
typedef TYPE_1__ GeoHashBits ;



__attribute__((used)) static void FUNC_0(GeoHashBits *VAR_0, int8_t VAR_1) {
    if (VAR_1 == 0)
        return;

    uint64_t VAR_2 = VAR_0->bits & 0xaaaaaaaaaaaaaaaaULL;
    uint64_t VAR_3 = VAR_0->bits & 0x5555555555555555ULL;

    uint64_t VAR_4 = 0xaaaaaaaaaaaaaaaaULL >> (64 - VAR_0->step * 2);
    if (VAR_1 > 0) {
        VAR_3 = VAR_3 + (VAR_4 + 1);
    } else {
        VAR_3 = VAR_3 | VAR_4;
        VAR_3 = VAR_3 - (VAR_4 + 1);
    }
    VAR_3 &= (0x5555555555555555ULL >> (64 - VAR_0->step * 2));
    VAR_0->bits = (VAR_2 | VAR_3);
}
