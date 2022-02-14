
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


typedef int uint8_t ;
struct TYPE_14__ {TYPE_1__* pActiveClass; } ;
typedef TYPE_5__ USBH_HandleTypeDef ;
struct TYPE_11__ {int * data; } ;
struct TYPE_12__ {TYPE_2__ payload; } ;
struct TYPE_13__ {TYPE_3__ data_container; } ;
struct TYPE_16__ {TYPE_4__ ptp; } ;
struct TYPE_15__ {int Storage; int n; } ;
struct TYPE_10__ {TYPE_7__* pData; } ;
typedef TYPE_6__ PTP_StorageIDsTypedef ;
typedef TYPE_7__ MTP_HandleTypeDef ;


 int FUNC_0 (int ,int *,int ) ;

__attribute__((used)) static void FUNC_1 (USBH_HandleTypeDef *VAR_0, PTP_StorageIDsTypedef *VAR_1)
{
  MTP_HandleTypeDef *VAR_2 = VAR_0->pActiveClass->pData;
  uint8_t *VAR_3 = VAR_2->ptp.data_container.payload.data;

  VAR_1->n = FUNC_0 (VAR_1->Storage, VAR_3, 0);
}
