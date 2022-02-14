
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef void* uint8_t ;
typedef size_t uint32_t ;
typedef int uint16_t ;
struct TYPE_14__ {TYPE_1__* pActiveClass; } ;
typedef TYPE_5__ USBH_HandleTypeDef ;
struct TYPE_11__ {void** data; } ;
struct TYPE_12__ {TYPE_2__ payload; } ;
struct TYPE_13__ {TYPE_3__ data_container; } ;
struct TYPE_16__ {TYPE_4__ ptp; } ;
struct TYPE_15__ {scalar_t__ str; void* u64; void* i64; void* u32; void* i32; void* u16; void* i16; void* u8; void* i8; } ;
struct TYPE_10__ {TYPE_7__* pData; } ;
typedef TYPE_6__ PTP_PropertyValueTypedef ;
typedef TYPE_7__ MTP_HandleTypeDef ;


 void* FUNC_0 (void**) ;
 void* FUNC_1 (void**) ;
 void* FUNC_2 (void**) ;
 int FUNC_3 (void**,void**,int*) ;

__attribute__((used)) static void FUNC_4(USBH_HandleTypeDef *VAR_0,
                                   uint32_t *VAR_1,
                                   uint32_t VAR_2,
                                   PTP_PropertyValueTypedef* VAR_3,
                                   uint16_t VAR_4)
{
  MTP_HandleTypeDef *VAR_5 = VAR_0->pActiveClass->pData;
  uint8_t *VAR_6 = VAR_5->ptp.data_container.payload.data;
  uint16_t VAR_7;
  switch (VAR_4)
  {
  case 134:
    VAR_3->i8 = *(uint8_t *)&(VAR_6[*VAR_1]);
    *VAR_1 += 1;
    break;
  case 128:
    VAR_3->u8 = *(uint8_t *)&(VAR_6[*VAR_1]);
    *VAR_1 += 1;
    break;
  case 137:

    VAR_3->i16 = FUNC_0(&(VAR_6[*VAR_1]));
    *VAR_1 += 2;
    break;
  case 131:
    VAR_3->u16 = FUNC_0(&(VAR_6[*VAR_1]));
    *VAR_1 += 2;
    break;
  case 136:
    VAR_3->i32 = FUNC_1(&(VAR_6[*VAR_1]));
    *VAR_1 += 4;
    break;
  case 130:
    VAR_3->u32 = FUNC_1(&(VAR_6[*VAR_1]));
    *VAR_1 += 4;
    break;
  case 135:
    VAR_3->i64 = FUNC_2(&(VAR_6[*VAR_1]));
    *VAR_1 += 8;
    break;
  case 129:
    VAR_3->u64 = FUNC_2(&(VAR_6[*VAR_1]));
    *VAR_1 += 8;
    break;

  case 132:
    *VAR_1 += 16;
    break;
  case 138:
    *VAR_1 += 16;
    break;

  case 133:

    FUNC_3((uint8_t *)VAR_3->str, (uint8_t *)&(VAR_6[*VAR_1]), &VAR_7);
    *VAR_1 += VAR_7*2+1;
    break;
  default:
    break;
  }
}
