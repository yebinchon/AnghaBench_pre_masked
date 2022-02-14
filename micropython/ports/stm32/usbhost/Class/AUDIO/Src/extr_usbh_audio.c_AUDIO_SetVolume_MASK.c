
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
typedef int USBH_StatusTypeDef ;
struct TYPE_7__ {TYPE_1__* pActiveClass; } ;
typedef TYPE_2__ USBH_HandleTypeDef ;
struct TYPE_8__ {int * mem; } ;
struct TYPE_6__ {TYPE_3__* pData; } ;
typedef TYPE_3__ AUDIO_HandleTypeDef ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int ,int ,int ,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static USBH_StatusTypeDef FUNC_1 (USBH_HandleTypeDef *VAR_3, uint8_t VAR_4, uint8_t VAR_5, uint16_t VAR_6)
{
  USBH_StatusTypeDef VAR_7 = VAR_1 ;
  AUDIO_HandleTypeDef *VAR_8;


  VAR_8 = VAR_3->pActiveClass->pData;

  VAR_8->mem[0] = VAR_6;

  VAR_7 = FUNC_0(VAR_3,
                          VAR_0,
                          VAR_4,
                          VAR_2,
                          VAR_5,
                          2);

  return VAR_7;
}
