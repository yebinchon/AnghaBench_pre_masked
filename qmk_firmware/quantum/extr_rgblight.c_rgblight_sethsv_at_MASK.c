
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_5__ {int enable; } ;
struct TYPE_4__ {int b; int g; int r; } ;
typedef TYPE_1__ LED_TYPE ;


 TYPE_3__ VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ,TYPE_1__*) ;

void FUNC_2(uint8_t VAR_1, uint8_t VAR_2, uint8_t VAR_3, uint8_t VAR_4) {
    if (!VAR_0.enable) {
        return;
    }

    LED_TYPE VAR_5;
    FUNC_1(VAR_1, VAR_2, VAR_3, &VAR_5);
    FUNC_0(VAR_5.r, VAR_5.g, VAR_5.b, VAR_4);
}
