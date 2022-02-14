
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct TYPE_7__ {int sat; int hue; } ;
struct TYPE_6__ {scalar_t__ enable; } ;
struct TYPE_5__ {int b; int g; int r; } ;
typedef TYPE_1__ LED_TYPE ;


 TYPE_4__* VAR_0 ;
 TYPE_3__ VAR_1 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ,TYPE_1__*) ;

void FUNC_2(uint16_t VAR_2, uint8_t VAR_3, uint8_t VAR_4) {
  if (VAR_1.enable) {
    LED_TYPE VAR_5;
    FUNC_1(VAR_2, VAR_3, VAR_4, &VAR_5);
    VAR_0[0].hue = VAR_0[1].hue = VAR_2;
    VAR_0[0].sat = VAR_0[1].sat = VAR_3;

    FUNC_0(VAR_5.r, VAR_5.g, VAR_5.b);
  }
}
