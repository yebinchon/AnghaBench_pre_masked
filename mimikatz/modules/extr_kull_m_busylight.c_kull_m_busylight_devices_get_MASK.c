
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_20__ {int Size; } ;
struct TYPE_19__ {scalar_t__ Capabilities; } ;
struct TYPE_16__ {int box_sensivity; int box_timeout; int box_triggertime; } ;
struct TYPE_18__ {int cbSize; scalar_t__ hBusy; int dKeepAliveThread; struct TYPE_18__* next; int hKeepAliveThread; int DevicePath; scalar_t__ id; TYPE_1__ dpi; TYPE_4__* deviceId; TYPE_6__ hidAttributes; int hidCaps; } ;
struct TYPE_17__ {int cbSize; } ;
typedef int SP_DEVICE_INTERFACE_DETAIL_DATA ;
typedef TYPE_2__ SP_DEVICE_INTERFACE_DATA ;
typedef TYPE_3__* PSP_DEVICE_INTERFACE_DETAIL_DATA ;
typedef int PHIDP_PREPARSED_DATA ;
typedef TYPE_4__* PCBUSYLIGHT_DEVICE_ID ;
typedef TYPE_3__* PBUSYLIGHT_DEVICE ;
typedef int NTSTATUS ;
typedef TYPE_6__ HIDD_ATTRIBUTES ;
typedef scalar_t__ HDEVINFO ;
typedef scalar_t__ HANDLE ;
typedef int GUID ;
typedef scalar_t__ DWORD ;
typedef int BUSYLIGHT_DEVICE ;
typedef int BOOL ;


 int FUNC_0 (scalar_t__) ;
 void* FUNC_1 (int ,int,int,int *,int ,int ,int *) ;
 int FUNC_2 (int *,int ,int ,TYPE_3__*,int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (scalar_t__,TYPE_6__*) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (scalar_t__,int *) ;
 int FUNC_8 (int ,int *) ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_9 (int ,int) ;
 scalar_t__ FUNC_10 (TYPE_3__*) ;
 int FUNC_11 (int ) ;
 int VAR_9 ;
 int FUNC_12 (char*,int ) ;
 int FUNC_13 (char*) ;
 int FUNC_14 (scalar_t__) ;
 int FUNC_15 (scalar_t__,int *,int *,scalar_t__,TYPE_2__*) ;
 scalar_t__ FUNC_16 (int *,int *,int *,int) ;
 scalar_t__ FUNC_17 (scalar_t__,TYPE_2__*,TYPE_3__*,scalar_t__,scalar_t__*,int *) ;
 int VAR_10 ;
 int FUNC_18 (int ) ;
 TYPE_4__* FUNC_19 (TYPE_6__*) ;
 int VAR_11 ;

BOOL FUNC_20(PBUSYLIGHT_DEVICE *VAR_12, DWORD *VAR_13, DWORD VAR_14, BOOL VAR_15)
{
 PBUSYLIGHT_DEVICE *VAR_16 = VAR_12;
 GUID VAR_17;
 HDEVINFO VAR_18;
 SP_DEVICE_INTERFACE_DATA VAR_19;
 BOOL VAR_20;
 DWORD VAR_21, VAR_22, VAR_23 = 0;
 PSP_DEVICE_INTERFACE_DETAIL_DATA VAR_24;
 HANDLE VAR_25;
 HIDD_ATTRIBUTES VAR_26;
 PCBUSYLIGHT_DEVICE_ID VAR_27;
 PHIDP_PREPARSED_DATA VAR_28;
 NTSTATUS VAR_29;

 *VAR_16 = ((void*)0);
 FUNC_6(&VAR_17);
 VAR_18 = FUNC_16(&VAR_17, ((void*)0), ((void*)0), VAR_0 | VAR_1);
 if(VAR_18 != VAR_7)
 {
  for(VAR_21 = 0, VAR_20 = VAR_10; VAR_20; VAR_21++)
  {
   VAR_19.cbSize = sizeof(SP_DEVICE_INTERFACE_DATA);
   if((VAR_20 = FUNC_15(VAR_18, ((void*)0), &VAR_17, VAR_21, &VAR_19)))
   {
    VAR_22 = 0;
    if(!FUNC_17(VAR_18, &VAR_19, ((void*)0), 0, &VAR_22, ((void*)0)) && (FUNC_3() == VAR_2))
    {
     if((VAR_24 = (PSP_DEVICE_INTERFACE_DETAIL_DATA) FUNC_9(VAR_8, VAR_22)))
     {
      VAR_24->cbSize = sizeof(SP_DEVICE_INTERFACE_DETAIL_DATA);
      if(FUNC_17(VAR_18, &VAR_19, VAR_24, VAR_22, &VAR_22, ((void*)0)))
      {
       VAR_25 = FUNC_1(VAR_24->DevicePath, 0, VAR_4 | VAR_5, ((void*)0), VAR_9, 0, ((void*)0));
       if(VAR_25 != VAR_7)
       {
        VAR_26.Size = sizeof(HIDD_ATTRIBUTES);
        if(FUNC_5(VAR_25, &VAR_26))
        {
         if((VAR_27 = FUNC_19(&VAR_26)))
         {
          if((VAR_27->Capabilities & VAR_14) == VAR_14)
          {
           if((*VAR_16 = (PBUSYLIGHT_DEVICE) FUNC_9(VAR_8, sizeof(BUSYLIGHT_DEVICE))))
           {
            if(FUNC_7(VAR_25, &VAR_28))
            {
             VAR_29 = FUNC_8(VAR_28, &(*VAR_16)->hidCaps);
             if(!FUNC_11(VAR_29))
              FUNC_12(L"HidP_GetCaps (%08x)\n", VAR_29);
             FUNC_4(VAR_28);
            }
            (*VAR_16)->DevicePath = FUNC_18(VAR_24->DevicePath);
            (*VAR_16)->hidAttributes = VAR_26;
            (*VAR_16)->deviceId = VAR_27;
            (*VAR_16)->dpi.box_sensivity = 4;
            (*VAR_16)->dpi.box_timeout = 4;
            (*VAR_16)->dpi.box_triggertime = 85;
            (*VAR_16)->id = VAR_23;
            (*VAR_16)->hBusy = FUNC_1(VAR_24->DevicePath, VAR_3 | VAR_6, VAR_4 | VAR_5, ((void*)0), VAR_9, 0, ((void*)0));

            if((*VAR_16)->hBusy && ((*VAR_16)->hBusy != VAR_7))
            {
             if(VAR_15)
             {
              (*VAR_16)->dKeepAliveThread = 5000;
              if(((*VAR_16)->hKeepAliveThread = FUNC_2(((void*)0), 0, VAR_11, *VAR_16, 0, ((void*)0))))
              {
               VAR_16 = &(*VAR_16)->next;
               VAR_23++;
              }
              else
              {
               FUNC_13(L"CreateThread (hKeepAliveThread)");
               FUNC_0((*VAR_16)->hBusy);
               FUNC_10(*VAR_16);
              }
             }
             else
             {
              VAR_16 = &(*VAR_16)->next;
              VAR_23++;
             }
            }
            else
            {
             FUNC_13(L"CreateFile (hBusy)");
             *VAR_16 = (PBUSYLIGHT_DEVICE) FUNC_10(*VAR_16);
            }
           }
          }
         }
        }
        FUNC_0(VAR_25);
       }
       else FUNC_13(L"CreateFile (deviceHandle)");
      }
      FUNC_10(VAR_24);
     }
    }
   }
  }
  FUNC_14(VAR_18);
 }
 else FUNC_13(L"SetupDiGetClassDevs");

 if(VAR_13)
  *VAR_13 = VAR_23;
 return (VAR_23 > 0);
}
