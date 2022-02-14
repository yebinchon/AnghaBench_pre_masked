
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct TYPE_10__ {scalar_t__ wValue; } ;
typedef TYPE_1__ USBD_SetupReqTypedef ;
struct TYPE_11__ {int dev_state; scalar_t__ dev_config; } ;
typedef TYPE_2__ USBD_HandleTypeDef ;


 int FUNC_0 (TYPE_2__*,scalar_t__) ;
 int FUNC_1 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;


 int FUNC_3 (TYPE_2__*,scalar_t__) ;

__attribute__((used)) static void FUNC_4(USBD_HandleTypeDef *VAR_2 ,
                           USBD_SetupReqTypedef *VAR_3)
{

  uint8_t VAR_4;

  VAR_4 = (uint8_t)(VAR_3->wValue);

  if (VAR_4 > VAR_1 )
  {
     FUNC_1(VAR_2 , VAR_3);
  }
  else
  {
    switch (VAR_2->dev_state)
    {
    case 129:
      if (VAR_4)
      {
        VAR_2->dev_config = VAR_4;
        VAR_2->dev_state = 128;
        if(FUNC_3(VAR_2 , VAR_4) == VAR_0)
        {
          FUNC_1(VAR_2 , VAR_3);
          return;
        }
        FUNC_2(VAR_2);
      }
      else
      {
         FUNC_2(VAR_2);
      }
      break;

    case 128:
      if (VAR_4 == 0)
      {
        VAR_2->dev_state = 129;
        VAR_2->dev_config = VAR_4;
        FUNC_0(VAR_2 , VAR_4);
        FUNC_2(VAR_2);

      }
      else if (VAR_4 != VAR_2->dev_config)
      {

        FUNC_0(VAR_2 , VAR_2->dev_config);


        VAR_2->dev_config = VAR_4;
        if(FUNC_3(VAR_2 , VAR_4) == VAR_0)
        {
          FUNC_1(VAR_2 , VAR_3);
          return;
        }
        FUNC_2(VAR_2);
      }
      else
      {
        FUNC_2(VAR_2);
      }
      break;

    default:
       FUNC_1(VAR_2 , VAR_3);
      break;
    }
  }
}
