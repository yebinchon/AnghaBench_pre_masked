
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ USBH_StatusTypeDef ;
struct TYPE_8__ {int (* pUser ) (TYPE_2__*,int ) ;TYPE_1__* pActiveClass; } ;
typedef TYPE_2__ USBH_HandleTypeDef ;
struct TYPE_9__ {int LineCoding; } ;
struct TYPE_7__ {TYPE_3__* pData; } ;
typedef TYPE_3__ CDC_HandleTypeDef ;


 scalar_t__ FUNC_0 (TYPE_2__*,int *) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (TYPE_2__*,int ) ;

__attribute__((used)) static USBH_StatusTypeDef FUNC_2 (USBH_HandleTypeDef *VAR_3)
{
  USBH_StatusTypeDef VAR_4 = VAR_1 ;
  CDC_HandleTypeDef *VAR_5 = VAR_3->pActiveClass->pData;


  VAR_4 = FUNC_0(VAR_3, &VAR_5->LineCoding);
  if(VAR_4 == VAR_2)
  {
    VAR_3->pUser(VAR_3, VAR_0);
  }
  return VAR_4;
}
