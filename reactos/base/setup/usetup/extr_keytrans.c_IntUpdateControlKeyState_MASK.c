
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int kip ;
struct TYPE_6__ {int LedFlags; scalar_t__ UnitId; } ;
struct TYPE_5__ {int Flags; int MakeCode; } ;
typedef TYPE_1__* PKEYBOARD_INPUT_DATA ;
typedef int NTSTATUS ;
typedef int* LPDWORD ;
typedef TYPE_2__ KEYBOARD_INDICATOR_PARAMETERS ;
typedef int IO_STATUS_BLOCK ;
typedef int HANDLE ;
typedef int DWORD ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (int ) ;
 int VAR_10 ;
 int FUNC_3 (int ,int *,int *,int *,int *,int ,TYPE_2__*,int,int *,int ) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;

__attribute__((used)) static void
FUNC_4(HANDLE VAR_15, LPDWORD VAR_16, PKEYBOARD_INPUT_DATA VAR_17)
{
 DWORD VAR_18 = 0;
    DWORD VAR_19, VAR_20;

 if (VAR_17->Flags & VAR_7)
  return;

    VAR_19 = VAR_20 = *VAR_16;

 if (!(VAR_17->Flags & VAR_6)) {
  switch (VAR_17->MakeCode) {
   case 0x2a:
   case 0x36:
    VAR_18 = VAR_14;
    break;

   case 0x1d:
    VAR_18 = VAR_9;
    break;

   case 0x38:
    VAR_18 = VAR_8;
    break;

   case 0x3A:
    if (!(VAR_17->Flags & VAR_5))
     VAR_20 ^= VAR_0;
    break;

   case 0x45:
    if (!(VAR_17->Flags & VAR_5))
     VAR_20 ^= VAR_10;
    break;

   case 0x46:
    if (!(VAR_17->Flags & VAR_5))
     VAR_20 ^= VAR_13;
    break;

   default:
    return;
  }
 } else {
  switch (VAR_17->MakeCode) {
   case 0x1d:
    VAR_18 = VAR_12;
    break;

   case 0x38:
    VAR_18 = VAR_11;
    break;

   default:
    return;
  }
 }


    if ((VAR_19 ^ VAR_20) & (VAR_10 | VAR_0 | VAR_13))
    {
        IO_STATUS_BLOCK VAR_21;
        NTSTATUS VAR_22;
        KEYBOARD_INDICATOR_PARAMETERS VAR_23;

        VAR_23.LedFlags = 0;
        VAR_23.UnitId = 0;

        if ((VAR_20 & VAR_10))
            VAR_23.LedFlags |= VAR_3;

        if ((VAR_20 & VAR_0))
            VAR_23.LedFlags |= VAR_2;

        if ((VAR_20 & VAR_13))
            VAR_23.LedFlags |= VAR_4;


        FUNC_0("NtDeviceIoControlFile dwLeds=%x\n", VAR_23.LedFlags);

        VAR_22 = FUNC_3(
              VAR_15,
              ((void*)0),
              ((void*)0),
              ((void*)0),
              &VAR_21,
              VAR_1,
        &VAR_23,
              sizeof(VAR_23),
        ((void*)0),
              0);

        if (!FUNC_2(VAR_22))
        {
            FUNC_1("NtDeviceIoControlFile(IOCTL_KEYBOARD_SET_INDICATORS) failed (Status %lx)\n", VAR_22);
        }
    } else

 if (VAR_17->Flags & VAR_5)
  VAR_20 &= ~VAR_18;
 else
  VAR_20 |= VAR_18;

    *VAR_16 = VAR_20;
}
