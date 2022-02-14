
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
typedef int SP_DEVICE_INTERFACE_DETAIL_DATA ;
typedef TYPE_1__ SP_DEVICE_INTERFACE_DATA ;
typedef int RDM_DEVICE ;
typedef TYPE_2__* PSP_DEVICE_INTERFACE_DETAIL_DATA ;
typedef TYPE_2__* PRDM_DEVICE ;
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
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (scalar_t__,TYPE_4__*) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (scalar_t__,int *) ;
 int FUNC_7 (int ,int *) ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_8 (int ,int) ;
 scalar_t__ FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (int ) ;
 int VAR_10 ;
 int FUNC_11 (char*,int ) ;
 int FUNC_12 (char*) ;
 int FUNC_13 (scalar_t__) ;
 int FUNC_14 (scalar_t__,int *,int *,scalar_t__,TYPE_1__*) ;
 scalar_t__ FUNC_15 (int *,int *,int *,int) ;
 scalar_t__ FUNC_16 (scalar_t__,TYPE_1__*,TYPE_2__*,scalar_t__,scalar_t__*,int *) ;
 int VAR_11 ;
 int FUNC_17 (int ) ;

BOOL FUNC_18(PRDM_DEVICE *VAR_12, DWORD *VAR_13)
{
 PRDM_DEVICE *VAR_14 = VAR_12;
 GUID VAR_15;
 HDEVINFO VAR_16;
 SP_DEVICE_INTERFACE_DATA VAR_17;
 BOOL VAR_18;
 DWORD VAR_19, VAR_20, VAR_21 = 0;
 PSP_DEVICE_INTERFACE_DETAIL_DATA VAR_22;
 HANDLE VAR_23;
 HIDD_ATTRIBUTES VAR_24;
 PHIDP_PREPARSED_DATA VAR_25;
 NTSTATUS VAR_26;

 *VAR_14 = ((void*)0);
 FUNC_5(&VAR_15);
 VAR_16 = FUNC_15(&VAR_15, ((void*)0), ((void*)0), VAR_0 | VAR_1);
 if(VAR_16 != VAR_8)
 {
  for(VAR_19 = 0, VAR_18 = VAR_11; VAR_18; VAR_19++)
  {
   VAR_17.cbSize = sizeof(SP_DEVICE_INTERFACE_DATA);
   if((VAR_18 = FUNC_14(VAR_16, ((void*)0), &VAR_15, VAR_19, &VAR_17)))
   {
    VAR_20 = 0;
    if(!FUNC_16(VAR_16, &VAR_17, ((void*)0), 0, &VAR_20, ((void*)0)) && (FUNC_2() == VAR_3))
    {
     if((VAR_22 = (PSP_DEVICE_INTERFACE_DETAIL_DATA) FUNC_8(VAR_9, VAR_20)))
     {
      VAR_22->cbSize = sizeof(SP_DEVICE_INTERFACE_DETAIL_DATA);
      if(FUNC_16(VAR_16, &VAR_17, VAR_22, VAR_20, &VAR_20, ((void*)0)))
      {
       VAR_23 = FUNC_1(VAR_22->DevicePath, 0, VAR_5 | VAR_6, ((void*)0), VAR_10, 0, ((void*)0));
       if(VAR_23 != VAR_8)
       {
        VAR_24.Size = sizeof(HIDD_ATTRIBUTES);
        if(FUNC_4(VAR_23, &VAR_24))
        {
         if((VAR_24.VendorID == 0xffff) && (VAR_24.ProductID == 0x0035))
         {
          if((*VAR_14 = (PRDM_DEVICE) FUNC_8(VAR_9, sizeof(RDM_DEVICE))))
          {
           if(FUNC_6(VAR_23, &VAR_25))
           {
            VAR_26 = FUNC_7(VAR_25, &(*VAR_14)->hidCaps);
            if(!FUNC_10(VAR_26))
             FUNC_11(L"HidP_GetCaps (%08x)\n", VAR_26);
            FUNC_3(VAR_25);
           }
           (*VAR_14)->DevicePath = FUNC_17(VAR_22->DevicePath);
           (*VAR_14)->hidAttributes = VAR_24;
           (*VAR_14)->id = VAR_21;
           (*VAR_14)->hDevice = FUNC_1(VAR_22->DevicePath, VAR_4 | VAR_7, VAR_5 | VAR_6, ((void*)0), VAR_10, 0, ((void*)0));

           if((*VAR_14)->hDevice && ((*VAR_14)->hDevice != VAR_8))
           {
            VAR_14 = &(*VAR_14)->next;
            VAR_21++;
           }
           else
           {
            if(FUNC_2() != VAR_2)
             FUNC_12(L"CreateFile (hDevice)");
            *VAR_14 = (PRDM_DEVICE) FUNC_9(*VAR_14);
           }
          }
         }
        }
        FUNC_0(VAR_23);
       }
       else FUNC_12(L"CreateFile (deviceHandle)");
      }
      FUNC_9(VAR_22);
     }
    }
   }
  }
  FUNC_13(VAR_16);
 }
 else FUNC_12(L"SetupDiGetClassDevs");

 if(VAR_13)
  *VAR_13 = VAR_21;
 return (VAR_21 > 0);
}
