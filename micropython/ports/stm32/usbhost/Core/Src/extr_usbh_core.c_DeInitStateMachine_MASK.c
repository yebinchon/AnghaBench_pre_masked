
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t uint32_t ;
typedef int USBH_StatusTypeDef ;
struct TYPE_6__ {int speed; int address; scalar_t__* Data; } ;
struct TYPE_5__ {scalar_t__ errorcount; int pipe_size; int state; } ;
struct TYPE_7__ {TYPE_2__ device; TYPE_1__ Control; scalar_t__ Timer; int RequestState; int EnumState; int gState; scalar_t__* Pipes; } ;
typedef TYPE_3__ USBH_HandleTypeDef ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static USBH_StatusTypeDef FUNC_0(USBH_HandleTypeDef *VAR_10)
{
  uint32_t VAR_11 = 0;


  for ( ; VAR_11 < VAR_6; VAR_11++)
  {
    VAR_10->Pipes[VAR_11] = 0;
  }

  for(VAR_11 = 0; VAR_11< VAR_5; VAR_11++)
  {
    VAR_10->device.Data[VAR_11] = 0;
  }

  VAR_10->gState = VAR_3;
  VAR_10->EnumState = VAR_2;
  VAR_10->RequestState = VAR_0;
  VAR_10->Timer = 0;

  VAR_10->Control.state = VAR_1;
  VAR_10->Control.pipe_size = VAR_7;
  VAR_10->Control.errorcount = 0;

  VAR_10->device.address = VAR_4;
  VAR_10->device.speed = VAR_9;

  return VAR_8;
}
