
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_9__ ;
typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef size_t uint8_t ;
typedef size_t int32_t ;
struct TYPE_18__ {TYPE_1__* pActiveClass; } ;
typedef TYPE_8__ USBH_HandleTypeDef ;
struct TYPE_16__ {TYPE_5__** OutputTerminalDesc; TYPE_4__** SelectorUnitDesc; TYPE_3__** MixerUnitDesc; TYPE_2__** FeatureUnitDesc; } ;
struct TYPE_17__ {size_t FeatureUnitNum; size_t MixerUnitNum; size_t SelectorUnitNum; size_t OutputTerminalNum; TYPE_6__ cs_desc; } ;
struct TYPE_19__ {TYPE_7__ class_desc; } ;
struct TYPE_15__ {size_t bSourceID; size_t bTerminalID; } ;
struct TYPE_14__ {size_t bSourceID0; size_t bUnitID; } ;
struct TYPE_13__ {size_t bSourceID0; size_t bSourceID1; size_t bUnitID; } ;
struct TYPE_12__ {size_t bSourceID; size_t bUnitID; } ;
struct TYPE_11__ {TYPE_9__* pData; } ;
typedef TYPE_9__ AUDIO_HandleTypeDef ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int32_t FUNC_0(USBH_HandleTypeDef *VAR_4, uint8_t VAR_5)
{
  uint8_t VAR_6;
  AUDIO_HandleTypeDef *VAR_7;

  VAR_7 = VAR_4->pActiveClass->pData;


  for(VAR_6 = 0; VAR_6 < VAR_7->class_desc.FeatureUnitNum; VAR_6 ++)
  {
    if(VAR_7->class_desc.cs_desc.FeatureUnitDesc[VAR_6]->bSourceID == VAR_5)
    {
      VAR_5 = VAR_7->class_desc.cs_desc.FeatureUnitDesc[VAR_6]->bUnitID;

      return ((VAR_5 << 16) | (VAR_0 << 8) | VAR_6);
    }
  }


  for(VAR_6 = 0; VAR_6 < VAR_7->class_desc.MixerUnitNum; VAR_6 ++)
  {
    if((VAR_7->class_desc.cs_desc.MixerUnitDesc[VAR_6]->bSourceID0 == VAR_5)||
       (VAR_7->class_desc.cs_desc.MixerUnitDesc[VAR_6]->bSourceID1 == VAR_5))
    {
      VAR_5 = VAR_7->class_desc.cs_desc.MixerUnitDesc[VAR_6]->bUnitID;

      return ((VAR_5 << 16) | (VAR_1 << 8) | VAR_6);
    }
  }



  for(VAR_6 = 0; VAR_6 < VAR_7->class_desc.SelectorUnitNum; VAR_6 ++)
  {
    if(VAR_7->class_desc.cs_desc.SelectorUnitDesc[VAR_6]->bSourceID0 == VAR_5)
    {
      VAR_5 = VAR_7->class_desc.cs_desc.SelectorUnitDesc[VAR_6]->bUnitID;

      return ((VAR_5 << 16) | (VAR_3 << 8) | VAR_6);
    }
  }



  for(VAR_6 = 0; VAR_6 < VAR_7->class_desc.OutputTerminalNum; VAR_6 ++)
  {
    if(VAR_7->class_desc.cs_desc.OutputTerminalDesc[VAR_6]->bSourceID == VAR_5)
    {
      VAR_5 = VAR_7->class_desc.cs_desc.OutputTerminalDesc[VAR_6]->bTerminalID;

      return ((VAR_5 << 16) | (VAR_2 << 8) | VAR_6);
    }
  }


  return -1;
}
