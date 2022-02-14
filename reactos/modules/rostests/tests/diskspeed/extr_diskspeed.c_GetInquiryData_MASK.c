
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {int NumberOfBuses; TYPE_1__* BusData; } ;
struct TYPE_9__ {scalar_t__ PathId; scalar_t__ TargetId; scalar_t__ Lun; scalar_t__ NextInquiryDataOffset; int InquiryData; } ;
struct TYPE_8__ {scalar_t__ PathId; scalar_t__ TargetId; scalar_t__ Lun; } ;
struct TYPE_7__ {int InquiryDataOffset; } ;
typedef int ScsiAddress ;
typedef TYPE_2__ SCSI_ADDRESS ;
typedef TYPE_3__* PSCSI_INQUIRY_DATA ;
typedef TYPE_4__* PSCSI_ADAPTER_BUS_INFO ;
typedef int PINQUIRYDATA ;
typedef int INQUIRYDATA ;
typedef int HANDLE ;
typedef int DWORD ;
typedef int Buffer ;
typedef TYPE_2__ BYTE ;
typedef scalar_t__ BOOL ;


 scalar_t__ FUNC_0 (int ,int ,int *,int ,TYPE_2__*,int,int *,scalar_t__) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int ,int ,int) ;

BOOL FUNC_2(HANDLE VAR_4, PINQUIRYDATA VAR_5)
{
  BOOL VAR_6;
  DWORD VAR_7;
  SCSI_ADDRESS VAR_8;
  PSCSI_ADAPTER_BUS_INFO VAR_9;
  PSCSI_INQUIRY_DATA VAR_10;
  BYTE VAR_11[4096];
  int VAR_12;

  VAR_6 = FUNC_0(VAR_4,
                    VAR_1,
      ((void*)0),
      0,
      &VAR_8,
      sizeof(VAR_8),
      &VAR_7,
      VAR_0);
  if (VAR_6 == VAR_0)
    {
      return VAR_0;
    }
  VAR_6 = FUNC_0(VAR_4,
                    VAR_2,
      ((void*)0),
      0,
      VAR_11,
      sizeof(VAR_11),
      &VAR_7,
      VAR_0);
  if (VAR_6)
    {
      VAR_9 = (PSCSI_ADAPTER_BUS_INFO)VAR_11;
      for (VAR_12 = 0; VAR_12 < VAR_9->NumberOfBuses; VAR_12++)
 {
   VAR_10 = (PSCSI_INQUIRY_DATA) (VAR_11 + VAR_9->BusData[VAR_12].InquiryDataOffset);
   if (VAR_9->BusData[VAR_12].InquiryDataOffset)
     {
        while (1)
          {
     if (VAR_10->PathId == VAR_8.PathId &&
         VAR_10->TargetId == VAR_8.TargetId &&
         VAR_10->Lun == VAR_8.Lun)
       {
         FUNC_1(VAR_5, VAR_10->InquiryData, sizeof(INQUIRYDATA));
         return VAR_3;
       }
     if (VAR_10->NextInquiryDataOffset == 0)
       {
         break;
       }
     VAR_10 = (PSCSI_INQUIRY_DATA) (VAR_11 + VAR_10->NextInquiryDataOffset);
   }
     }
 }
    }
  return VAR_0;
}
