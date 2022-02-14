
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
typedef int USBH_StatusTypeDef ;
struct TYPE_11__ {int Timer; TYPE_1__* pActiveClass; } ;
typedef TYPE_3__ USBH_HandleTypeDef ;
struct TYPE_10__ {int state; int timer; int poll; int container; } ;
struct TYPE_12__ {int NotificationPipe; int NotificationEpSize; TYPE_2__ events; } ;
struct TYPE_9__ {TYPE_4__* pData; } ;
typedef TYPE_4__ MTP_HandleTypeDef ;


 int FUNC_0 (TYPE_3__*) ;


 int VAR_0 ;
 int FUNC_1 (TYPE_3__*,int *,int ,int ) ;
 int FUNC_2 (TYPE_3__*,int ) ;
 int VAR_1 ;

__attribute__((used)) static USBH_StatusTypeDef FUNC_3 (USBH_HandleTypeDef *VAR_2)
{
  USBH_StatusTypeDef VAR_3 = VAR_0 ;
  MTP_HandleTypeDef *VAR_4 = VAR_2->pActiveClass->pData;


  switch(VAR_4->events.state)
  {
  case 128:
    if((VAR_2->Timer & 1) == 0)
    {
      VAR_4->events.timer = VAR_2->Timer;
      FUNC_1(VAR_2,
                                (uint8_t *)&(VAR_4->events.container),
                                VAR_4->NotificationEpSize,
                                VAR_4->NotificationPipe);


     VAR_4->events.state = 129 ;
    }
    break;
  case 129:
    if(FUNC_2(VAR_2 , VAR_4->NotificationPipe) == VAR_1)
    {
      FUNC_0(VAR_2);
    }

    if(( VAR_2->Timer - VAR_4->events.timer) >= VAR_4->events.poll)
    {
     VAR_4->events.timer = VAR_2->Timer;

      FUNC_1(VAR_2,
                                (uint8_t *)&(VAR_4->events.container),
                                VAR_4->NotificationEpSize,
                                VAR_4->NotificationPipe);

    }
    break;

  default:
    break;
  }

  return VAR_3;
}
