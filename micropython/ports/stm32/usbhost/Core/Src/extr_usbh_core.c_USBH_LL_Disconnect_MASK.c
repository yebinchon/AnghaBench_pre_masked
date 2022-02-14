
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int USBH_StatusTypeDef ;
struct TYPE_10__ {scalar_t__ is_connected; } ;
struct TYPE_9__ {int pipe_out; int pipe_in; } ;
struct TYPE_11__ {int os_event; int gState; int (* pUser ) (TYPE_3__*,int ) ;TYPE_2__ device; TYPE_1__ Control; } ;
typedef TYPE_3__ USBH_HandleTypeDef ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*,int ) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (TYPE_3__*,int ) ;

USBH_StatusTypeDef FUNC_6 (USBH_HandleTypeDef *VAR_4)
{

  FUNC_2(VAR_4);


  FUNC_0 (VAR_4, VAR_4->Control.pipe_in);
  FUNC_0 (VAR_4, VAR_4->Control.pipe_out);

  VAR_4->device.is_connected = 0;

  if(VAR_4->pUser != ((void*)0))
  {
    VAR_4->pUser(VAR_4, VAR_1);
  }
  FUNC_3("USB Device disconnected");


  FUNC_1(VAR_4);

  VAR_4->gState = VAR_0;





  return VAR_2;
}
