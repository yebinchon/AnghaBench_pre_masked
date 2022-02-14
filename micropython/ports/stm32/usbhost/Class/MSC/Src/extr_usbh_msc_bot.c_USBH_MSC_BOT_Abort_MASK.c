
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef int USBH_StatusTypeDef ;
struct TYPE_7__ {TYPE_1__* pActiveClass; } ;
typedef TYPE_2__ USBH_HandleTypeDef ;
struct TYPE_8__ {int OutEp; int InEp; } ;
struct TYPE_6__ {TYPE_3__* pData; } ;
typedef TYPE_3__ MSC_HandleTypeDef ;




 int FUNC_0 (TYPE_2__*,int ) ;
 int VAR_0 ;

__attribute__((used)) static USBH_StatusTypeDef FUNC_1(USBH_HandleTypeDef *VAR_1, uint8_t VAR_2, uint8_t VAR_3)
{
  USBH_StatusTypeDef VAR_4 = VAR_0;
  MSC_HandleTypeDef *VAR_5 = VAR_1->pActiveClass->pData;

  switch (VAR_3)
  {
  case 129 :

    VAR_4 = FUNC_0(VAR_1, VAR_5->InEp);

    break;

  case 128 :

    VAR_4 = FUNC_0(VAR_1, VAR_5->OutEp);
    break;

  default:
    break;
  }
  return VAR_4;
}
