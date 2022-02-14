
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int USBH_StatusTypeDef ;
struct TYPE_5__ {int ** MixerUnitDesc; int ** SelectorUnitDesc; int ** FeatureUnitDesc; int ** OutputTerminalDesc; int ** InputTerminalDesc; int * HeaderDesc; } ;
struct TYPE_7__ {size_t ASNum; TYPE_2__* as_desc; int MixerUnitNum; TYPE_1__ cs_desc; int SelectorUnitNum; int FeatureUnitNum; int OutputTerminalNum; int InputTerminalNum; } ;
struct TYPE_6__ {int * FormatTypeDesc; int * GeneralDesc; } ;
typedef int AUDIO_SelectorDescTypeDef ;
typedef int AUDIO_OTDescTypeDef ;
typedef int AUDIO_MixerDescTypeDef ;
typedef int AUDIO_ITDescTypeDef ;
typedef int AUDIO_HeaderDescTypeDef ;
typedef int AUDIO_FeatureDescTypeDef ;
typedef TYPE_3__ AUDIO_ClassSpecificDescTypedef ;
typedef int AUDIO_ASGeneralDescTypeDef ;
typedef int AUDIO_ASFormatTypeDescTypeDef ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static USBH_StatusTypeDef FUNC_0(AUDIO_ClassSpecificDescTypedef *VAR_3,
                                      uint8_t VAR_4,
                                      uint8_t *VAR_5)
{
  if(VAR_4 == VAR_1)
  {
    switch(VAR_5[2])
    {
    case 132:
      VAR_3->cs_desc.HeaderDesc = (AUDIO_HeaderDescTypeDef *)VAR_5;
      break;

    case 131:
      VAR_3->cs_desc.InputTerminalDesc[VAR_3->InputTerminalNum++] = (AUDIO_ITDescTypeDef*) VAR_5;
      break;

    case 129:
      VAR_3->cs_desc.OutputTerminalDesc[VAR_3->OutputTerminalNum++] = (AUDIO_OTDescTypeDef*) VAR_5;
      break;

    case 134:
      VAR_3->cs_desc.FeatureUnitDesc[VAR_3->FeatureUnitNum++] = (AUDIO_FeatureDescTypeDef*) VAR_5;
      break;

    case 128:
      VAR_3->cs_desc.SelectorUnitDesc[VAR_3->SelectorUnitNum++] = (AUDIO_SelectorDescTypeDef*) VAR_5;
      break;

    case 130:
      VAR_3->cs_desc.MixerUnitDesc[VAR_3->MixerUnitNum++] = (AUDIO_MixerDescTypeDef*) VAR_5;
      break;

    default:
      break;
    }
  }
  else if(VAR_4 == VAR_2)
  {
    switch(VAR_5[2])
    {
    case 135:
      VAR_3->as_desc[VAR_3->ASNum].GeneralDesc = (AUDIO_ASGeneralDescTypeDef*) VAR_5;
      break;
    case 133:
      VAR_3->as_desc[VAR_3->ASNum++].FormatTypeDesc = (AUDIO_ASFormatTypeDescTypeDef*) VAR_5;
      break;
    default:
      break;
    }
  }

  return VAR_0;
}
