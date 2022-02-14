
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
typedef size_t uint32_t ;
typedef int uint16_t ;
struct TYPE_14__ {TYPE_1__* pActiveClass; } ;
typedef TYPE_5__ USBH_HandleTypeDef ;
struct TYPE_11__ {int * data; } ;
struct TYPE_12__ {TYPE_2__ payload; } ;
struct TYPE_13__ {scalar_t__ iteration; TYPE_3__ data_container; } ;
struct TYPE_16__ {TYPE_4__ ptp; } ;
struct TYPE_15__ {int OperationsSupported_len; int EventsSupported_len; int DevicePropertiesSupported_len; int CaptureFormats_len; int ImageFormats_len; int SerialNumber; int DeviceVersion; int Model; int Manufacturer; int ImageFormats; int CaptureFormats; int DevicePropertiesSupported; int EventsSupported; int OperationsSupported; void* FunctionalMode; int VendorExtensionDesc; void* VendorExtensionVersion; int VendorExtensionID; void* StandardVersion; } ;
struct TYPE_10__ {TYPE_7__* pData; } ;
typedef TYPE_6__ PTP_DeviceInfoTypedef ;
typedef TYPE_7__ MTP_HandleTypeDef ;


 void* FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 void* FUNC_2 (int*,int *,size_t) ;
 int FUNC_3 (int ,int *,int*) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int FUNC_4 (char*) ;

__attribute__((used)) static void FUNC_5 (USBH_HandleTypeDef *VAR_6, PTP_DeviceInfoTypedef *VAR_7)
{
  MTP_HandleTypeDef *VAR_8 = VAR_6->pActiveClass->pData;
  uint8_t *VAR_9 = VAR_8->ptp.data_container.payload.data;
  uint32_t VAR_10;
  uint16_t VAR_11;


  FUNC_4 (" MTP device info size exceeds internal buffer size.               only available data are decoded.");


  if(VAR_8->ptp.iteration == 0)
  {
    VAR_7->StandardVersion = FUNC_0(&VAR_9[VAR_2]);
    VAR_7->VendorExtensionID = FUNC_1(&VAR_9[VAR_4]);
    VAR_7->VendorExtensionVersion = FUNC_0(&VAR_9[VAR_5]);
    FUNC_3(VAR_7->VendorExtensionDesc, &VAR_9[VAR_3], &VAR_11);

    VAR_10=VAR_11*2+1;
    VAR_7->FunctionalMode = FUNC_0(&VAR_9[VAR_0+VAR_10]);
    VAR_7->OperationsSupported_len = FUNC_2 ((uint16_t *)&VAR_7->OperationsSupported,
                                                      VAR_9,
                                                      VAR_1+VAR_10);

    VAR_10=VAR_10+VAR_7->OperationsSupported_len*sizeof(uint16_t)+sizeof(uint32_t);
    VAR_7->EventsSupported_len = FUNC_2 ((uint16_t *)&VAR_7->EventsSupported,
                                                      VAR_9,
                                                      VAR_1+VAR_10);

    VAR_10=VAR_10+VAR_7->EventsSupported_len*sizeof(uint16_t)+sizeof(uint32_t);
    VAR_7->DevicePropertiesSupported_len = FUNC_2 ((uint16_t *)&VAR_7->DevicePropertiesSupported,
                                                      VAR_9,
                                                      VAR_1+VAR_10);

    VAR_10=VAR_10+VAR_7->DevicePropertiesSupported_len*sizeof(uint16_t)+sizeof(uint32_t);

    VAR_7->CaptureFormats_len = FUNC_2 ((uint16_t *)&VAR_7->CaptureFormats,
                                                      VAR_9,
                                                      VAR_1+VAR_10);

    VAR_10=VAR_10+VAR_7->CaptureFormats_len*sizeof(uint16_t)+sizeof(uint32_t);
    VAR_7->ImageFormats_len = FUNC_2 ((uint16_t *)&VAR_7->ImageFormats,
                                                      VAR_9,
                                                      VAR_1+VAR_10);

    VAR_10=VAR_10+VAR_7->ImageFormats_len*sizeof(uint16_t)+sizeof(uint32_t);
    FUNC_3(VAR_7->Manufacturer, &VAR_9[VAR_1+VAR_10], &VAR_11);

    VAR_10+=VAR_11*2+1;
    FUNC_3(VAR_7->Model, &VAR_9[VAR_1+VAR_10], &VAR_11);

    VAR_10+=VAR_11*2+1;
    FUNC_3(VAR_7->DeviceVersion, &VAR_9[VAR_1+VAR_10], &VAR_11);

    VAR_10+=VAR_11*2+1;
    FUNC_3(VAR_7->SerialNumber, &VAR_9[VAR_1+VAR_10], &VAR_11);
  }
}
