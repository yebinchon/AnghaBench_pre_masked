
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int uint8_t ;
typedef int USBH_StatusTypeDef ;
struct TYPE_14__ {TYPE_1__* pActiveClass; } ;
typedef TYPE_4__ USBH_HandleTypeDef ;
struct TYPE_12__ {int volumeMin; int volumeMax; void* resolution; void* volume; } ;
struct TYPE_13__ {TYPE_2__ attribute; } ;
struct TYPE_15__ {int cs_req_state; int * mem; TYPE_3__ headphone; } ;
struct TYPE_11__ {TYPE_5__* pData; } ;
typedef TYPE_5__ AUDIO_HandleTypeDef ;







 void* FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_4__*,int ,int ,int ,int ,int) ;
 int FUNC_2 (TYPE_4__*,int ,int ,int ,int ,int) ;
 int FUNC_3 (TYPE_4__*,int ,int ,int ,int ,int) ;
 int FUNC_4 (TYPE_4__*,int ,int ,int ,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static USBH_StatusTypeDef FUNC_5(USBH_HandleTypeDef *VAR_4, uint8_t VAR_5, uint8_t VAR_6)
{
  AUDIO_HandleTypeDef *VAR_7 = VAR_4->pActiveClass->pData;
  USBH_StatusTypeDef VAR_8 = VAR_1;
  USBH_StatusTypeDef VAR_9 = VAR_1;


  switch (VAR_7->cs_req_state)
  {
  case 128:
    VAR_9 = FUNC_1(VAR_4,
                                VAR_0,
                                VAR_5,
                                VAR_3,
                                VAR_6,
                                0x02);
    if(VAR_9 != VAR_1)
    {
      VAR_7->cs_req_state = 130;
      VAR_7->headphone.attribute.volume = FUNC_0(&(VAR_7->mem[0]));
    }
    break;

  case 130:
    VAR_9 = FUNC_3(VAR_4,
                                VAR_0,
                                VAR_5,
                                VAR_3,
                                VAR_6,
                                0x02);
    if(VAR_9 != VAR_1)
    {
      VAR_7->cs_req_state = 131;
      VAR_7->headphone.attribute.volumeMin = FUNC_0(&VAR_7->mem[0]);
    }
    break;

  case 131:
    VAR_9 = FUNC_2(VAR_4,
                                VAR_0,
                                VAR_5,
                                VAR_3,
                                VAR_6,
                                0x02);
    if(VAR_9 != VAR_1)
    {
      VAR_7->cs_req_state = 129;
      VAR_7->headphone.attribute.volumeMax = FUNC_0(&VAR_7->mem[0]);

      if (VAR_7->headphone.attribute.volumeMax < VAR_7->headphone.attribute.volumeMin)
      {
        VAR_7->headphone.attribute.volumeMax = 0xFF00;
      }
    }
    break;

  case 129:
    VAR_9 = FUNC_4(VAR_4,
                                VAR_0,
                                VAR_5,
                                VAR_3,
                                VAR_6,
                                0x02);
    if(VAR_9 != VAR_1)
    {
      VAR_7->cs_req_state = 132;
      VAR_7->headphone.attribute.resolution = FUNC_0(&VAR_7->mem[0]);
    }
    break;


  case 132:
    VAR_8 = VAR_2;
  default:
    break;
  }
  return VAR_8;
}
