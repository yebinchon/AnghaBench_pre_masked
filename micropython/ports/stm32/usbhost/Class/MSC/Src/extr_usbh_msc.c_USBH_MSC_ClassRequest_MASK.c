
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef size_t uint8_t ;
typedef int int32_t ;
typedef int USBH_StatusTypeDef ;
struct TYPE_10__ {TYPE_1__* pActiveClass; } ;
typedef TYPE_3__ USBH_HandleTypeDef ;
struct TYPE_11__ {int req_state; size_t max_lun; int prev_req_state; TYPE_2__* unit; } ;
struct TYPE_9__ {int state_changed; int prev_ready_state; } ;
struct TYPE_8__ {TYPE_4__* pData; } ;
typedef TYPE_4__ MSC_HandleTypeDef ;





 int VAR_0 ;
 int FUNC_0 (TYPE_3__*,int) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_3__*,size_t*) ;
 int VAR_2 ;
 int FUNC_2 (char*,int ) ;

__attribute__((used)) static USBH_StatusTypeDef FUNC_3(USBH_HandleTypeDef *VAR_3)
{
  MSC_HandleTypeDef *VAR_4 = VAR_3->pActiveClass->pData;
  USBH_StatusTypeDef VAR_5 = VAR_0;
  uint8_t VAR_6;


  switch (VAR_4->req_state)
  {
  case 128:
  case 129:

    if(FUNC_1(VAR_3, (uint8_t *)&VAR_4->max_lun) == VAR_2 )
    {
      VAR_4->max_lun = (uint8_t )(VAR_4->max_lun) + 1;
      FUNC_2 ("Number of supported LUN: %lu", (int32_t)(VAR_4->max_lun));

      for(VAR_6 = 0; VAR_6 < VAR_4->max_lun; VAR_6++)
      {
        VAR_4->unit[VAR_6].prev_ready_state = VAR_1;
        VAR_4->unit[VAR_6].state_changed = 0;
      }
      VAR_5 = VAR_2;
    }
    break;

  case 130 :

    if(FUNC_0(VAR_3, 0x00) == VAR_2)
    {
      VAR_4->req_state = VAR_4->prev_req_state;
    }
    break;

  default:
    break;
  }

  return VAR_5;
}
