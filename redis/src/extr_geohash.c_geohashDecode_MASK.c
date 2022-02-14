
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef unsigned long long uint8_t ;
typedef int uint64_t ;
typedef double uint32_t ;
struct TYPE_13__ {double min; double max; } ;
struct TYPE_12__ {double min; double max; } ;
struct TYPE_15__ {unsigned long long step; int bits; } ;
struct TYPE_16__ {TYPE_2__ longitude; TYPE_1__ latitude; TYPE_4__ hash; } ;
struct TYPE_14__ {double max; double min; } ;
typedef TYPE_3__ GeoHashRange ;
typedef TYPE_4__ GeoHashBits ;
typedef TYPE_5__ GeoHashArea ;


 scalar_t__ FUNC_0 (TYPE_4__ const) ;
 scalar_t__ FUNC_1 (TYPE_3__ const) ;
 int FUNC_2 (int ) ;

int FUNC_3(const GeoHashRange VAR_0, const GeoHashRange VAR_1,
                   const GeoHashBits VAR_2, GeoHashArea *VAR_3) {
    if (FUNC_0(VAR_2) || ((void*)0) == VAR_3 || FUNC_1(VAR_1) ||
        FUNC_1(VAR_0)) {
        return 0;
    }

    VAR_3->hash = VAR_2;
    uint8_t VAR_4 = VAR_2.step;
    uint64_t VAR_5 = FUNC_2(VAR_2.bits);

    double VAR_6 = VAR_1.max - VAR_1.min;
    double VAR_7 = VAR_0.max - VAR_0.min;

    uint32_t VAR_8 = VAR_5;
    uint32_t VAR_9 = VAR_5 >> 32;




    VAR_3->latitude.min =
        VAR_1.min + (VAR_8 * 1.0 / (1ull << VAR_4)) * VAR_6;
    VAR_3->latitude.max =
        VAR_1.min + ((VAR_8 + 1) * 1.0 / (1ull << VAR_4)) * VAR_6;
    VAR_3->longitude.min =
        VAR_0.min + (VAR_9 * 1.0 / (1ull << VAR_4)) * VAR_7;
    VAR_3->longitude.max =
        VAR_0.min + ((VAR_9 + 1) * 1.0 / (1ull << VAR_4)) * VAR_7;

    return 1;
}
