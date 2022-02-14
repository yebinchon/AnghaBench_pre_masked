
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
typedef int uint16_t ;
struct TYPE_15__ {TYPE_1__* pActiveClass; } ;
typedef TYPE_5__ USBH_HandleTypeDef ;
struct TYPE_12__ {int * data; } ;
struct TYPE_13__ {TYPE_2__ payload; } ;
struct TYPE_14__ {TYPE_3__ data_container; } ;
struct TYPE_17__ {TYPE_4__ ptp; } ;
struct TYPE_16__ {void* datatype; int propval; void* property; void* ObjectHandle; } ;
struct TYPE_11__ {TYPE_7__* pData; } ;
typedef TYPE_6__ MTP_PropertiesTypedef ;
typedef TYPE_7__ MTP_HandleTypeDef ;


 void* FUNC_0 (int *) ;
 void* FUNC_1 (int *) ;
 int FUNC_2 (TYPE_5__*,scalar_t__*,scalar_t__,int *,void*) ;

__attribute__((used)) static uint32_t FUNC_3 (USBH_HandleTypeDef *VAR_0,
                                   MTP_PropertiesTypedef *VAR_1,
                                   uint32_t VAR_2)
{
  MTP_HandleTypeDef *VAR_3 = VAR_0->pActiveClass->pData;
  uint8_t *VAR_4 = VAR_3->ptp.data_container.payload.data;
  uint32_t VAR_5;
  uint32_t VAR_6 = 0, VAR_7;

 VAR_5 = FUNC_1(VAR_4);


 if (VAR_5 == 0)
 {
   return 0;
 }

 VAR_4 += sizeof(uint32_t);
 VAR_2 -= sizeof(uint32_t);

 for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++)
 {
   if (VAR_2 <= 0)
   {
     return 0;
   }

   VAR_1[VAR_7].ObjectHandle = FUNC_1(VAR_4);
   VAR_4 += sizeof(uint32_t);
   VAR_2 -= sizeof(uint32_t);

   VAR_1[VAR_7].property = FUNC_0(VAR_4);
   VAR_4 += sizeof(uint16_t);
   VAR_2 -= sizeof(uint16_t);

   VAR_1[VAR_7].datatype = FUNC_0(VAR_4);
   VAR_4 += sizeof(uint16_t);
   VAR_2 -= sizeof(uint16_t);

   VAR_6 = 0;

   FUNC_2(VAR_0, &VAR_6, VAR_2, &VAR_1[VAR_7].propval, VAR_1[VAR_7].datatype);

   VAR_4 += VAR_6;
   VAR_2 -= VAR_6;
 }

 return VAR_5;
}
