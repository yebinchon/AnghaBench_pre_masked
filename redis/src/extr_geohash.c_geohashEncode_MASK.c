
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_8__ {int step; int bits; } ;
struct TYPE_7__ {double min; double max; } ;
typedef TYPE_1__ GeoHashRange ;
typedef TYPE_2__ GeoHashBits ;


 double VAR_0 ;
 double VAR_1 ;
 double VAR_2 ;
 double VAR_3 ;
 scalar_t__ FUNC_0 (TYPE_1__ const*) ;
 int FUNC_1 (double,double) ;

int FUNC_2(const GeoHashRange *VAR_4, const GeoHashRange *VAR_5,
                  double VAR_6, double VAR_7, uint8_t VAR_8,
                  GeoHashBits *VAR_9) {

    if (VAR_9 == ((void*)0) || VAR_8 > 32 || VAR_8 == 0 ||
        FUNC_0(VAR_5) || FUNC_0(VAR_4)) return 0;



    if (VAR_6 > VAR_2 || VAR_6 < VAR_3 ||
        VAR_7 > VAR_0 || VAR_7 < VAR_1) return 0;

    VAR_9->bits = 0;
    VAR_9->step = VAR_8;

    if (VAR_7 < VAR_5->min || VAR_7 > VAR_5->max ||
        VAR_6 < VAR_4->min || VAR_6 > VAR_4->max) {
        return 0;
    }

    double VAR_10 =
        (VAR_7 - VAR_5->min) / (VAR_5->max - VAR_5->min);
    double VAR_11 =
        (VAR_6 - VAR_4->min) / (VAR_4->max - VAR_4->min);


    VAR_10 *= (1ULL << VAR_8);
    VAR_11 *= (1ULL << VAR_8);
    VAR_9->bits = FUNC_1(VAR_10, VAR_11);
    return 1;
}
