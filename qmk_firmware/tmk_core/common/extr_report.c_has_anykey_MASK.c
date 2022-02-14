
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_5__ {int* bits; } ;
struct TYPE_6__ {int* keys; TYPE_1__ nkro; } ;
typedef TYPE_2__ report_keyboard_t ;
struct TYPE_7__ {scalar_t__ nkro; } ;


 scalar_t__ VAR_0 ;
 TYPE_3__ VAR_1 ;

uint8_t FUNC_0(report_keyboard_t* VAR_2) {
    uint8_t VAR_3 = 0;
    uint8_t* VAR_4 = VAR_2->keys;
    uint8_t VAR_5 = sizeof(VAR_2->keys);






    while (VAR_5--) {
        if (*VAR_4++) VAR_3++;
    }
    return VAR_3;
}
