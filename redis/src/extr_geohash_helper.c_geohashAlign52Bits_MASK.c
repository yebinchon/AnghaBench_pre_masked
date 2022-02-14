
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_3__ {int bits; int step; } ;
typedef int GeoHashFix52Bits ;
typedef TYPE_1__ GeoHashBits ;



GeoHashFix52Bits FUNC_0(const GeoHashBits VAR_0) {
    uint64_t VAR_1 = VAR_0.bits;
    VAR_1 <<= (52 - VAR_0.step * 2);
    return VAR_1;
}
