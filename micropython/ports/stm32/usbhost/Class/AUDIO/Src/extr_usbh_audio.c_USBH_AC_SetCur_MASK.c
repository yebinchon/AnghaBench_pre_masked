
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_9__ ;
typedef struct TYPE_27__ TYPE_8__ ;
typedef struct TYPE_26__ TYPE_7__ ;
typedef struct TYPE_25__ TYPE_6__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;
typedef struct TYPE_19__ TYPE_13__ ;
typedef struct TYPE_18__ TYPE_12__ ;
typedef struct TYPE_17__ TYPE_11__ ;
typedef struct TYPE_16__ TYPE_10__ ;


typedef int uint8_t ;
typedef void* uint16_t ;
typedef int USBH_StatusTypeDef ;
struct TYPE_27__ {void* w; } ;
struct TYPE_26__ {void* w; } ;
struct TYPE_25__ {void* w; } ;
struct TYPE_28__ {int bmRequestType; TYPE_8__ wLength; TYPE_7__ wIndex; TYPE_6__ wValue; int bRequest; } ;
struct TYPE_16__ {TYPE_9__ b; } ;
struct TYPE_17__ {TYPE_10__ setup; } ;
struct TYPE_18__ {TYPE_11__ Control; TYPE_1__* pActiveClass; } ;
typedef TYPE_12__ USBH_HandleTypeDef ;
struct TYPE_23__ {TYPE_3__** FeatureUnitDesc; TYPE_2__** InputTerminalDesc; } ;
struct TYPE_24__ {TYPE_4__ cs_desc; } ;
struct TYPE_22__ {int bUnitID; } ;
struct TYPE_21__ {int bTerminalID; } ;
struct TYPE_20__ {TYPE_13__* pData; } ;
struct TYPE_19__ {int* mem; TYPE_5__ class_desc; } ;
typedef TYPE_13__ AUDIO_HandleTypeDef ;


 int VAR_0 ;


 int VAR_1 ;
 int FUNC_0 (TYPE_12__*,int*,void*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static USBH_StatusTypeDef FUNC_1(USBH_HandleTypeDef *VAR_5,
                                         uint8_t VAR_6,
                                         uint8_t VAR_7,
                                         uint8_t VAR_8,
                                         uint8_t VAR_9,
                                         uint16_t VAR_10)
{
  uint16_t VAR_11,VAR_12,VAR_13;
  uint8_t VAR_14,VAR_15;
  AUDIO_HandleTypeDef *VAR_16;
  VAR_16 = VAR_5->pActiveClass->pData;

  switch(VAR_6)
  {
  case 128:
    VAR_14 = VAR_16->class_desc.cs_desc.InputTerminalDesc[0]->bTerminalID;
    VAR_15 = 0;
    VAR_12 = ( VAR_14 << 8 ) | VAR_15 ;
    VAR_11 = (VAR_0 << 8 ) ;
    VAR_16->mem[0] = 0x00;

    VAR_13 = 1;
    break;
  case 129:
    VAR_14 = VAR_16->class_desc.cs_desc.FeatureUnitDesc[VAR_7]->bUnitID;
    VAR_15 = 0;
    VAR_12 = ( VAR_14 << 8 ) | VAR_15 ;

    VAR_11 = (VAR_8 << 8) | VAR_9;
    VAR_13 = VAR_10;
    break;
  }

  VAR_5->Control.setup.b.bmRequestType = VAR_2 | VAR_3 | VAR_4;


  VAR_5->Control.setup.b.bRequest = VAR_1;
  VAR_5->Control.setup.b.wValue.w = VAR_11;
  VAR_5->Control.setup.b.wIndex.w = VAR_12;
  VAR_5->Control.setup.b.wLength.w = VAR_13;

  return(FUNC_0(VAR_5, (uint8_t *)(VAR_16->mem) , VAR_13 ));

}
