
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int USBH_StatusTypeDef ;
struct TYPE_5__ {int is_connected; } ;
struct TYPE_6__ {scalar_t__ gState; int os_event; int (* pUser ) (TYPE_2__*,int ) ;TYPE_1__ device; } ;
typedef TYPE_2__ USBH_HandleTypeDef ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (TYPE_2__*,int ) ;

USBH_StatusTypeDef FUNC_2 (USBH_HandleTypeDef *VAR_6)
{
  if(VAR_6->gState == VAR_2 )
  {
    VAR_6->device.is_connected = 1;
    VAR_6->gState = VAR_2 ;

    if(VAR_6->pUser != ((void*)0))
    {
      VAR_6->pUser(VAR_6, VAR_3);
    }
  }
  else if(VAR_6->gState == VAR_1 )
  {
    VAR_6->gState = VAR_0 ;
  }




  return VAR_4;
}
