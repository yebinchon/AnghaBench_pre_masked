
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_9__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_13__ ;
typedef struct TYPE_16__ TYPE_11__ ;


typedef size_t uint32_t ;
typedef int USBH_StatusTypeDef ;
struct TYPE_21__ {int (* pUser ) (TYPE_4__*,int ) ;TYPE_1__* pActiveClass; } ;
typedef TYPE_4__ USBH_HandleTypeDef ;
struct TYPE_23__ {int StorageDescription; int VolumeLabel; } ;
struct TYPE_16__ {size_t n; int * Storage; } ;
struct TYPE_17__ {int VendorExtensionID; int SerialNumber; int DeviceVersion; int Model; int Manufacturer; int DevicePropertiesSupported_len; int EventsSupported_len; int OperationsSupported_len; int FunctionalMode; int StandardVersion; } ;
struct TYPE_20__ {TYPE_9__* storinfo; TYPE_11__ storids; TYPE_13__ devinfo; } ;
struct TYPE_19__ {int CurrentStorageId; } ;
struct TYPE_22__ {int state; size_t current_storage_unit; int is_ready; TYPE_3__ info; TYPE_2__ params; } ;
struct TYPE_18__ {TYPE_5__* pData; } ;
typedef TYPE_5__ MTP_HandleTypeDef ;


 int VAR_0 ;





 int VAR_1 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (TYPE_4__*) ;
 int VAR_2 ;
 int FUNC_2 (TYPE_4__*,TYPE_13__*) ;
 int FUNC_3 (TYPE_4__*,TYPE_11__*) ;
 int FUNC_4 (TYPE_4__*,int ,TYPE_9__*) ;
 int FUNC_5 (TYPE_4__*,int) ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (TYPE_4__*,int ) ;

__attribute__((used)) static USBH_StatusTypeDef FUNC_8 (USBH_HandleTypeDef *VAR_3)
{
  USBH_StatusTypeDef VAR_4 = VAR_1;
  MTP_HandleTypeDef *VAR_5 = VAR_3->pActiveClass->pData;
  uint32_t VAR_6 = 0;

  switch(VAR_5->state)
  {
  case 128:

    VAR_4 = FUNC_5 (VAR_3, 1);

    if(VAR_4 == VAR_2)
    {
      FUNC_6("MTP Session #0 Opened");
      VAR_5->state = 132;
    }
    break;

  case 132:
    VAR_4 = FUNC_2 (VAR_3, &(VAR_5->info.devinfo));

    if(VAR_4 == VAR_2)
    {
      FUNC_0(">>>>> MTP Device Information");
      FUNC_0("Standard version : %x", VAR_5->info.devinfo.StandardVersion);
      FUNC_0("Vendor ExtID : %s", (VAR_5->info.devinfo.VendorExtensionID == 6)?"MTP": "NOT SUPPORTED");
      FUNC_0("Functional mode : %s", (VAR_5->info.devinfo.FunctionalMode == 0) ? "Standard" : "Vendor");
      FUNC_0("Number of Supported Operation(s) : %d", VAR_5->info.devinfo.OperationsSupported_len);
      FUNC_0("Number of Supported Events(s) : %d", VAR_5->info.devinfo.EventsSupported_len);
      FUNC_0("Number of Supported Proprieties : %d", VAR_5->info.devinfo.DevicePropertiesSupported_len);
      FUNC_0("Manufacturer : %s", VAR_5->info.devinfo.Manufacturer);
      FUNC_0("Model : %s", VAR_5->info.devinfo.Model);
      FUNC_0("Device version : %s", VAR_5->info.devinfo.DeviceVersion);
      FUNC_0("Serial number : %s", VAR_5->info.devinfo.SerialNumber);

      VAR_5->state = 131;
    }
    break;

  case 131:
    VAR_4 = FUNC_3 (VAR_3, &(VAR_5->info.storids));

    if(VAR_4 == VAR_2)
    {
      FUNC_0("Number of storage ID items : %d", VAR_5->info.storids.n);
      for (VAR_6 = 0; VAR_6 < VAR_5->info.storids.n; VAR_6 ++)
      {
        FUNC_0("storage#%d ID : %x", VAR_6, VAR_5->info.storids.Storage[VAR_6]);
      }

      VAR_5->current_storage_unit = 0;
      VAR_5->state = 130;
    }
    break;

  case 130:
    VAR_4 = FUNC_4 (VAR_3,
                                      VAR_5->info.storids.Storage[VAR_5->current_storage_unit],
                                      &((VAR_5->info.storinfo)[VAR_5->current_storage_unit]));

    if(VAR_4 == VAR_2)
    {
      FUNC_6("Volume#%lu: %s   [%s]", VAR_5->current_storage_unit,
                  VAR_5->info.storinfo[VAR_5->current_storage_unit].StorageDescription,
                  VAR_5->info.storinfo[VAR_5->current_storage_unit].VolumeLabel);
      if(++VAR_5->current_storage_unit >= VAR_5->info.storids.n)
      {
        VAR_5->state = 129;
        VAR_5->is_ready = 1;
        VAR_5->current_storage_unit = 0;
        VAR_5->params.CurrentStorageId = VAR_5->info.storids.Storage[0];

        FUNC_6( "MTP Class initialized.");
        FUNC_6("%s is default storage unit", VAR_5->info.storinfo[0].StorageDescription);
        VAR_3->pUser(VAR_3, VAR_0);
      }
    }
    break;

  case 129:
    FUNC_1(VAR_3);
  default:
    VAR_4 = VAR_2;
    break;
  }
  return VAR_4;
}
