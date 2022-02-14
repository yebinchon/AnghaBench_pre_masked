
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_13__ {int Size; int VendorID; int ProductID; } ;
struct TYPE_12__ {int cbSize; scalar_t__ hDevice; struct TYPE_12__* next; int DevicePath; scalar_t__ id; TYPE_4__ hidAttributes; int hidCaps; } ;
struct TYPE_11__ {int cbSize; } ;
typedef int SR98_DEVICE ;
typedef int SP_DEVICE_INTERFACE_DETAIL_DATA ;
typedef TYPE_1__ SP_DEVICE_INTERFACE_DATA ;
typedef TYPE_2__* PSR98_DEVICE ;
typedef TYPE_2__* PSP_DEVICE_INTERFACE_DETAIL_DATA ;
typedef int PHIDP_PREPARSED_DATA ;
typedef int NTSTATUS ;
typedef TYPE_4__ HIDD_ATTRIBUTES ;
typedef scalar_t__ HDEVINFO ;
typedef scalar_t__ HANDLE ;
typedef int GUID ;
typedef scalar_t__ DWORD ;
typedef int BOOL ;


 int FUNC_0 (scalar_t__) ;
 void* FUNC_1 (int ,int,int,int *,int ,int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (scalar_t__,TYPE_4__*) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (scalar_t__,int *) ;
 int FUNC_7 (int ,int *) ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_8 (int ,int) ;
 scalar_t__ FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (int ) ;
 int VAR_9 ;
 int FUNC_11 (char*,int ) ;
 int FUNC_12 (char*) ;
 int FUNC_13 (scalar_t__) ;
 int FUNC_14 (scalar_t__,int *,int *,scalar_t__,TYPE_1__*) ;
 scalar_t__ FUNC_15 (int *,int *,int *,int) ;
 scalar_t__ FUNC_16 (scalar_t__,TYPE_1__*,TYPE_2__*,scalar_t__,scalar_t__*,int *) ;
 int VAR_10 ;
 int FUNC_17 (int ) ;

BOOL FUNC_18(PSR98_DEVICE *VAR_11, DWORD *VAR_12)
{
 PSR98_DEVICE *VAR_13 = VAR_11;
 GUID VAR_14;
 HDEVINFO VAR_15;
 SP_DEVICE_INTERFACE_DATA VAR_16;
 BOOL VAR_17;
 DWORD VAR_18, VAR_19, VAR_20 = 0;
 PSP_DEVICE_INTERFACE_DETAIL_DATA VAR_21;
 HANDLE VAR_22;
 HIDD_ATTRIBUTES VAR_23;
 PHIDP_PREPARSED_DATA VAR_24;
 NTSTATUS VAR_25;

 *VAR_13 = ((void*)0);
 FUNC_5(&VAR_14);
 VAR_15 = FUNC_15(&VAR_14, ((void*)0), ((void*)0), VAR_0 | VAR_1);
 if(VAR_15 != VAR_7)
 {
  for(VAR_18 = 0, VAR_17 = VAR_10; VAR_17; VAR_18++)
  {
   VAR_16.cbSize = sizeof(SP_DEVICE_INTERFACE_DATA);
   if((VAR_17 = FUNC_14(VAR_15, ((void*)0), &VAR_14, VAR_18, &VAR_16)))
   {
    VAR_19 = 0;
    if(!FUNC_16(VAR_15, &VAR_16, ((void*)0), 0, &VAR_19, ((void*)0)) && (FUNC_2() == VAR_2))
    {
     if((VAR_21 = (PSP_DEVICE_INTERFACE_DETAIL_DATA) FUNC_8(VAR_8, VAR_19)))
     {
      VAR_21->cbSize = sizeof(SP_DEVICE_INTERFACE_DETAIL_DATA);
      if(FUNC_16(VAR_15, &VAR_16, VAR_21, VAR_19, &VAR_19, ((void*)0)))
      {
       VAR_22 = FUNC_1(VAR_21->DevicePath, 0, VAR_4 | VAR_5, ((void*)0), VAR_9, 0, ((void*)0));
       if(VAR_22 != VAR_7)
       {
        VAR_23.Size = sizeof(HIDD_ATTRIBUTES);
        if(FUNC_4(VAR_22, &VAR_23))
        {
         if((VAR_23.VendorID == 0x6688) && ((VAR_23.ProductID >= 0x6850) && (VAR_23.ProductID <= 0x6868)))
         {
          if((*VAR_13 = (PSR98_DEVICE) FUNC_8(VAR_8, sizeof(SR98_DEVICE))))
          {
           if(FUNC_6(VAR_22, &VAR_24))
           {
            VAR_25 = FUNC_7(VAR_24, &(*VAR_13)->hidCaps);
            if(!FUNC_10(VAR_25))
             FUNC_11(L"HidP_GetCaps (%08x)\n", VAR_25);
            FUNC_3(VAR_24);
           }
           (*VAR_13)->DevicePath = FUNC_17(VAR_21->DevicePath);
           (*VAR_13)->hidAttributes = VAR_23;
           (*VAR_13)->id = VAR_20;
           (*VAR_13)->hDevice = FUNC_1(VAR_21->DevicePath, VAR_3 | VAR_6, VAR_4 | VAR_5, ((void*)0), VAR_9, 0, ((void*)0));

           if((*VAR_13)->hDevice && ((*VAR_13)->hDevice != VAR_7))
           {
            VAR_13 = &(*VAR_13)->next;
            VAR_20++;
           }
           else
           {
            FUNC_12(L"CreateFile (hDevice)");
            *VAR_13 = (PSR98_DEVICE) FUNC_9(*VAR_13);
           }
          }
         }
        }
        FUNC_0(VAR_22);
       }
       else FUNC_12(L"CreateFile (deviceHandle)");
      }
      FUNC_9(VAR_21);
     }
    }
   }
  }
  FUNC_13(VAR_15);
 }
 else FUNC_12(L"SetupDiGetClassDevs");

 if(VAR_12)
  *VAR_12 = VAR_20;
 return (VAR_20 > 0);
}
