
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int u8x8_t ;
struct TYPE_3__ {int (* hardware_display_cb ) (int *,int,int,void*) ;} ;
struct TYPE_4__ {TYPE_1__ overlay; } ;
typedef TYPE_2__ u8g2_nodemcu_t ;



 int FUNC_0 (int *,int,int,void*) ;
 int FUNC_1 (int *,int,int,void*) ;
 int FUNC_2 (int *,int,int,void*) ;

uint8_t FUNC_3(u8x8_t *VAR_0, uint8_t VAR_1, uint8_t VAR_2, void *VAR_3)
{
  uint8_t VAR_4 = 1;
  u8g2_nodemcu_t *VAR_5 = (u8g2_nodemcu_t *)VAR_0;

  switch(VAR_1)
  {
  case 128:

    if (VAR_5->overlay.hardware_display_cb)
      return VAR_5->overlay.hardware_display_cb(VAR_0, VAR_1, VAR_2, VAR_3);
    break;

  default:

    if (VAR_5->overlay.hardware_display_cb)
      VAR_4 = VAR_5->overlay.hardware_display_cb(VAR_0, VAR_1, VAR_2, VAR_3);
    FUNC_2(VAR_0, VAR_1, VAR_2, VAR_3);
    break;
  }

  return VAR_4;
}
