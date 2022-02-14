
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint16_t ;
struct TYPE_18__ {int wValue; scalar_t__ wLength; } ;
typedef TYPE_3__ USBD_SetupReqTypedef ;
struct TYPE_19__ {TYPE_2__* pClass; int dev_speed; TYPE_1__* pDesc; } ;
typedef TYPE_4__ USBD_HandleTypeDef ;
struct TYPE_17__ {scalar_t__ (* GetOtherSpeedConfigDescriptor ) (TYPE_4__*,scalar_t__*) ;scalar_t__ (* GetDeviceQualifierDescriptor ) (TYPE_4__*,scalar_t__*) ;scalar_t__ (* GetFSConfigDescriptor ) (TYPE_4__*,scalar_t__*) ;scalar_t__ (* GetHSConfigDescriptor ) (TYPE_4__*,scalar_t__*) ;} ;
struct TYPE_16__ {int* (* GetDeviceDescriptor ) (TYPE_4__*,scalar_t__*) ;int* (* GetStrDescriptor ) (TYPE_4__*,int,scalar_t__*) ;} ;


 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 int FUNC_1 (TYPE_4__*,TYPE_3__*) ;
 int FUNC_2 (TYPE_4__*,int*,scalar_t__) ;
 int VAR_0 ;





 int* FUNC_3 (TYPE_4__*,scalar_t__*) ;
 scalar_t__ FUNC_4 (TYPE_4__*,scalar_t__*) ;
 scalar_t__ FUNC_5 (TYPE_4__*,scalar_t__*) ;
 int* FUNC_6 (TYPE_4__*,int,scalar_t__*) ;
 scalar_t__ FUNC_7 (TYPE_4__*,scalar_t__*) ;
 scalar_t__ FUNC_8 (TYPE_4__*,scalar_t__*) ;

__attribute__((used)) static void FUNC_9(USBD_HandleTypeDef *VAR_1 ,
                               USBD_SetupReqTypedef *VAR_2)
{
  uint16_t VAR_3;
  uint8_t *VAR_4;


  switch (VAR_2->wValue >> 8)
  {
  case 131:
    VAR_4 = VAR_1->pDesc->GetDeviceDescriptor(VAR_1, &VAR_3);
    break;

  case 132:
    if(VAR_1->dev_speed == VAR_0 )
    {
      VAR_4 = (uint8_t *)VAR_1->pClass->GetHSConfigDescriptor(VAR_1, &VAR_3);
      VAR_4[1] = 132;
    }
    else
    {
      VAR_4 = (uint8_t *)VAR_1->pClass->GetFSConfigDescriptor(VAR_1, &VAR_3);
      VAR_4[1] = 132;
    }
    break;

  case 128:
    VAR_4 = VAR_1->pDesc->GetStrDescriptor(VAR_1, VAR_2->wValue & 0xff, &VAR_3);
    if (VAR_4 == ((void*)0)) {
      FUNC_1(VAR_1, VAR_2);
      return;
    }
    break;

  case 130:

    if(VAR_1->dev_speed == VAR_0 )
    {
      VAR_4 = (uint8_t *)VAR_1->pClass->GetDeviceQualifierDescriptor(VAR_1, &VAR_3);
      break;
    }
    else
    {
      FUNC_1(VAR_1 , VAR_2);
      return;
    }

  case 129:
    if(VAR_1->dev_speed == VAR_0 )
    {
      VAR_4 = (uint8_t *)VAR_1->pClass->GetOtherSpeedConfigDescriptor(VAR_1, &VAR_3);
      VAR_4[1] = 129;
      break;
    }
    else
    {
      FUNC_1(VAR_1 , VAR_2);
      return;
    }

  default:
     FUNC_1(VAR_1 , VAR_2);
    return;
  }

  if((VAR_3 != 0)&& (VAR_2->wLength != 0))
  {

    VAR_3 = FUNC_0(VAR_3 , VAR_2->wLength);

    FUNC_2 (VAR_1,
                      VAR_4,
                      VAR_3);
  }

}
