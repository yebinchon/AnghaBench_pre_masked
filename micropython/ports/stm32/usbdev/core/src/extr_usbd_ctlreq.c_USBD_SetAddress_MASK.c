
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_9__ {scalar_t__ wIndex; scalar_t__ wLength; scalar_t__ wValue; } ;
typedef TYPE_1__ USBD_SetupReqTypedef ;
struct TYPE_10__ {scalar_t__ dev_state; int dev_address; } ;
typedef TYPE_2__ USBD_HandleTypeDef ;


 int FUNC_0 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static void FUNC_3(USBD_HandleTypeDef *VAR_3 ,
                            USBD_SetupReqTypedef *VAR_4)
{
  uint8_t VAR_5;

  if ((VAR_4->wIndex == 0) && (VAR_4->wLength == 0))
  {
    VAR_5 = (uint8_t)(VAR_4->wValue) & 0x7F;

    if (VAR_3->dev_state == VAR_1)
    {
      FUNC_0(VAR_3 , VAR_4);
    }
    else
    {
      VAR_3->dev_address = VAR_5;
      FUNC_2(VAR_3, VAR_5);
      FUNC_1(VAR_3);

      if (VAR_5 != 0)
      {
        VAR_3->dev_state = VAR_0;
      }
      else
      {
        VAR_3->dev_state = VAR_2;
      }
    }
  }
  else
  {
     FUNC_0(VAR_3 , VAR_4);
  }
}
