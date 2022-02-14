
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int USBH_StatusTypeDef ;
struct TYPE_13__ {int Data; } ;
struct TYPE_14__ {int (* pUser ) (TYPE_3__*,int ) ;TYPE_2__ device; TYPE_1__* pActiveClass; } ;
typedef TYPE_3__ USBH_HandleTypeDef ;
struct TYPE_16__ {int wItemLength; } ;
struct TYPE_15__ {int ctl_state; TYPE_8__ HID_Desc; } ;
struct TYPE_12__ {TYPE_4__* pData; } ;
typedef TYPE_4__ HID_HandleTypeDef ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*,int ) ;
 int FUNC_1 (TYPE_3__*,int ) ;
 int FUNC_2 (TYPE_8__*,int ) ;
 int FUNC_3 (TYPE_3__*,int ,int ) ;
 int FUNC_4 (TYPE_3__*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (TYPE_3__*,int ) ;

__attribute__((used)) static USBH_StatusTypeDef FUNC_6(USBH_HandleTypeDef *VAR_5)
{

  USBH_StatusTypeDef VAR_6 = VAR_1;
  USBH_StatusTypeDef VAR_7 = VAR_1;
  HID_HandleTypeDef *VAR_8 = VAR_5->pActiveClass->pData;


  switch (VAR_8->ctl_state)
  {
  case 130:
  case 133:


    if (FUNC_0 (VAR_5, VAR_4)== VAR_3)
    {

      FUNC_2(&VAR_8->HID_Desc, VAR_5->device.Data);
      VAR_8->ctl_state = 132;
    }

    break;
  case 132:



    if (FUNC_1(VAR_5, VAR_8->HID_Desc.wItemLength) == VAR_3)
    {


      VAR_8->ctl_state = 129;
    }

    break;

  case 129:

    VAR_7 = FUNC_3 (VAR_5, 0, 0);


    if (VAR_7 == VAR_3)
    {
      VAR_8->ctl_state = 128;
    }
    else if(VAR_7 == VAR_2)
    {
      VAR_8->ctl_state = 128;
    }
    break;

  case 128:

    if (FUNC_4 (VAR_5, 0) == VAR_3)
    {
      VAR_8->ctl_state = 131;


      VAR_5->pUser(VAR_5, VAR_0);
      VAR_6 = VAR_3;
    }
    break;

  case 131:
  default:
    break;
  }

  return VAR_6;
}
