
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_8__ {int wLength; } ;
typedef TYPE_1__ USBD_SetupReqTypedef ;
struct TYPE_9__ {int dev_state; int dev_config; int dev_default_config; } ;
typedef TYPE_2__ USBD_HandleTypeDef ;


 int FUNC_0 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_1 (TYPE_2__*,int *,int) ;



__attribute__((used)) static void FUNC_2(USBD_HandleTypeDef *VAR_0 ,
                           USBD_SetupReqTypedef *VAR_1)
{

  if (VAR_1->wLength != 1)
  {
     FUNC_0(VAR_0 , VAR_1);
  }
  else
  {
    switch (VAR_0->dev_state )
    {
    case 129:
      VAR_0->dev_default_config = 0;
      FUNC_1 (VAR_0,
                        (uint8_t *)&VAR_0->dev_default_config,
                        1);
      break;

    case 128:

      FUNC_1 (VAR_0,
                        (uint8_t *)&VAR_0->dev_config,
                        1);
      break;

    default:
       FUNC_0(VAR_0 , VAR_1);
      break;
    }
  }
}
