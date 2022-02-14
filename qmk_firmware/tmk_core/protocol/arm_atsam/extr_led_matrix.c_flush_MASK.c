
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef size_t uint8_t ;
typedef int uint32_t ;
struct TYPE_12__ {int tick; } ;
struct TYPE_11__ {int b; int g; int r; } ;
struct TYPE_8__ {int * b; int * g; int * r; } ;
struct TYPE_10__ {TYPE_2__ rgb; } ;
struct TYPE_7__ {int SDB_N; } ;
struct TYPE_9__ {TYPE_1__ bit; } ;


 double VAR_0 ;
 double VAR_1 ;
 double VAR_2 ;
 int FUNC_0 (size_t) ;
 int FUNC_1 (size_t) ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 double VAR_5 ;
 int VAR_6 ;
 TYPE_6__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_2 () ;
 scalar_t__ VAR_10 ;
 double VAR_11 ;
 scalar_t__ VAR_12 ;
 float VAR_13 ;
 TYPE_5__* VAR_14 ;
 int VAR_15 ;
 TYPE_4__* VAR_16 ;
 float VAR_17 ;
 TYPE_3__ VAR_18 ;

void FUNC_3(void) {





    if (!VAR_18.bit.SDB_N) {
        return;
    }



    while (VAR_10) {
    }


    for (uint8_t VAR_19 = 0; VAR_19 < VAR_4; VAR_19++) {
        *VAR_16[VAR_19].rgb.r = VAR_14[VAR_19].r;
        *VAR_16[VAR_19].rgb.g = VAR_14[VAR_19].g;
        *VAR_16[VAR_19].rgb.b = VAR_14[VAR_19].b;
    }
    uint8_t VAR_20;


    if (VAR_8 != VAR_9) {
        for (VAR_20 = 0; VAR_20 < VAR_3; VAR_20++) FUNC_0(VAR_20);
        VAR_9 = VAR_8;
    }

    for (VAR_20 = 0; VAR_20 < VAR_3; VAR_20++) FUNC_1(VAR_20);

    FUNC_2();
}
