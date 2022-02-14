
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t uint8_t ;
typedef int uint16_t ;
struct TYPE_6__ {int enable; } ;
struct TYPE_5__ {scalar_t__ w; scalar_t__ b; scalar_t__ g; scalar_t__ r; } ;
typedef TYPE_1__ LED_TYPE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 TYPE_1__* VAR_5 ;
 int * VAR_6 ;
 size_t FUNC_0 (int *) ;
 TYPE_3__ VAR_7 ;
 int FUNC_1 (TYPE_1__*,int ) ;

void FUNC_2(void) {
    LED_TYPE *VAR_8;
    uint16_t VAR_9 = VAR_1;

    if (!VAR_7.enable) {
        for (uint8_t VAR_10 = VAR_4; VAR_10 < VAR_3; VAR_10++) {
            VAR_5[VAR_10].r = 0;
            VAR_5[VAR_10].g = 0;
            VAR_5[VAR_10].b = 0;



        }
    }







    VAR_8 = VAR_5 + VAR_2;

    FUNC_1(VAR_8, VAR_9);
}
