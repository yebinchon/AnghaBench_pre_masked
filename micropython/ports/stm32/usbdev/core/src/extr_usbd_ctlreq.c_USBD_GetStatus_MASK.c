
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int USBD_SetupReqTypedef ;
struct TYPE_5__ {int dev_state; int dev_config_status; int dev_remote_wakeup; } ;
typedef TYPE_1__ USBD_HandleTypeDef ;


 int FUNC_0 (TYPE_1__*,int *) ;
 int FUNC_1 (TYPE_1__*,int *,int) ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_2(USBD_HandleTypeDef *VAR_2 ,
                           USBD_SetupReqTypedef *VAR_3)
{


  switch (VAR_2->dev_state)
  {
  case 129:
  case 128:




    VAR_2->dev_config_status = 0;


    if (VAR_2->dev_remote_wakeup)
    {
       VAR_2->dev_config_status |= VAR_0;
    }

    FUNC_1 (VAR_2,
                      (uint8_t *)& VAR_2->dev_config_status,
                      2);
    break;

  default :
    FUNC_0(VAR_2 , VAR_3);
    break;
  }
}
