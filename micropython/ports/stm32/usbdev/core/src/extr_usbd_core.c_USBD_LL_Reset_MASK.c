
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int USBD_StatusTypeDef ;
struct TYPE_11__ {int dev_config; TYPE_1__* pClass; scalar_t__ pClassData; int dev_state; TYPE_3__* ep_in; TYPE_2__* ep_out; } ;
typedef TYPE_4__ USBD_HandleTypeDef ;
struct TYPE_10__ {void* maxpacket; } ;
struct TYPE_9__ {void* maxpacket; } ;
struct TYPE_8__ {int (* DeInit ) (TYPE_4__*,int ) ;} ;


 int VAR_0 ;
 int FUNC_0 (TYPE_4__*,int,int ,void*) ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 int FUNC_1 (TYPE_4__*,int ) ;

USBD_StatusTypeDef FUNC_2(USBD_HandleTypeDef *VAR_4)
{

  FUNC_0(VAR_4,
              0x00,
              VAR_0,
              VAR_3);

  VAR_4->ep_out[0].maxpacket = VAR_3;


  FUNC_0(VAR_4,
              0x80,
              VAR_0,
              VAR_3);

  VAR_4->ep_in[0].maxpacket = VAR_3;

  VAR_4->dev_state = VAR_2;

  if (VAR_4->pClassData)
    VAR_4->pClass->DeInit(VAR_4, VAR_4->dev_config);


  return VAR_1;
}
