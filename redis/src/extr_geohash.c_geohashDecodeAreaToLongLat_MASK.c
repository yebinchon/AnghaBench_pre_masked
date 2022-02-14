
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int min; int max; } ;
struct TYPE_5__ {int min; int max; } ;
struct TYPE_7__ {TYPE_2__ latitude; TYPE_1__ longitude; } ;
typedef TYPE_3__ GeoHashArea ;



int FUNC_0(const GeoHashArea *VAR_0, double *VAR_1) {
    if (!VAR_1) return 0;
    VAR_1[0] = (VAR_0->longitude.min + VAR_0->longitude.max) / 2;
    VAR_1[1] = (VAR_0->latitude.min + VAR_0->latitude.max) / 2;
    return 1;
}
