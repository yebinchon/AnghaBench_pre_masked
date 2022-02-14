
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int USBH_StatusTypeDef ;
struct TYPE_6__ {scalar_t__ Timer; int os_event; TYPE_1__* pActiveClass; } ;
typedef TYPE_2__ USBH_HandleTypeDef ;
struct TYPE_7__ {scalar_t__ state; scalar_t__ timer; scalar_t__ poll; } ;
struct TYPE_5__ {TYPE_3__* pData; } ;
typedef TYPE_3__ HID_HandleTypeDef ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static USBH_StatusTypeDef FUNC_1(USBH_HandleTypeDef *VAR_4)
{
  HID_HandleTypeDef *VAR_5 = VAR_4->pActiveClass->pData;

  if(VAR_5->state == VAR_1)
  {
    if(( VAR_4->Timer - VAR_5->timer) >= VAR_5->poll)
    {
      VAR_5->state = VAR_0;



    }
  }
  return VAR_2;
}
