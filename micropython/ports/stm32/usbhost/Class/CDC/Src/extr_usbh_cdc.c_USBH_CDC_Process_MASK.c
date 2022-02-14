
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_12__ ;
typedef struct TYPE_15__ TYPE_10__ ;


typedef int USBH_StatusTypeDef ;
struct TYPE_20__ {TYPE_1__* pActiveClass; } ;
typedef TYPE_4__ USBH_HandleTypeDef ;
struct TYPE_18__ {int dwDTERate; int bParityType; int bDataBits; int bCharFormat; } ;
struct TYPE_16__ {TYPE_2__ b; } ;
struct TYPE_21__ {int state; TYPE_10__* pUserLineCoding; TYPE_12__ LineCoding; } ;
struct TYPE_19__ {int dwDTERate; int bParityType; int bDataBits; int bCharFormat; } ;
struct TYPE_17__ {TYPE_5__* pData; } ;
struct TYPE_15__ {TYPE_3__ b; } ;
typedef TYPE_5__ CDC_HandleTypeDef ;





 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (TYPE_4__*) ;


 int FUNC_2 (TYPE_4__*,TYPE_12__*) ;
 int FUNC_3 (TYPE_4__*,TYPE_10__*) ;
 int VAR_0 ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (TYPE_4__*,int) ;
 int VAR_1 ;

__attribute__((used)) static USBH_StatusTypeDef FUNC_6 (USBH_HandleTypeDef *VAR_2)
{
  USBH_StatusTypeDef VAR_3 = VAR_0;
  USBH_StatusTypeDef VAR_4 = VAR_1;
  CDC_HandleTypeDef *VAR_5 = VAR_2->pActiveClass->pData;

  switch(VAR_5->state)
  {

  case 130:
    VAR_3 = VAR_1;
    break;

  case 129:
    VAR_4 = FUNC_3(VAR_2, VAR_5->pUserLineCoding);

    if(VAR_4 == VAR_1)
    {
      VAR_5->state = 131;
    }

    else if(VAR_4 != VAR_0)
    {
      VAR_5->state = 132;
    }
    break;


  case 131:
    VAR_4 = FUNC_2(VAR_2, &(VAR_5->LineCoding));

    if(VAR_4 == VAR_1)
    {
      VAR_5->state = 130;

      if((VAR_5->LineCoding.b.bCharFormat == VAR_5->pUserLineCoding->b.bCharFormat) &&
         (VAR_5->LineCoding.b.bDataBits == VAR_5->pUserLineCoding->b.bDataBits) &&
         (VAR_5->LineCoding.b.bParityType == VAR_5->pUserLineCoding->b.bParityType) &&
         (VAR_5->LineCoding.b.dwDTERate == VAR_5->pUserLineCoding->b.dwDTERate))
      {
        FUNC_4(VAR_2);
      }
    }

    else if(VAR_4 != VAR_0)
    {
      VAR_5->state = 132;
    }

    break;

  case 128:
    FUNC_1(VAR_2);
    FUNC_0(VAR_2);
    break;

  case 132:
    VAR_4 = FUNC_5(VAR_2, 0x00);

    if(VAR_4 == VAR_1 )
    {

      VAR_5->state = 130 ;
    }
    break;

  default:
    break;

  }

  return VAR_3;
}
