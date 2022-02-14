
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ AsciiChar; } ;
struct TYPE_12__ {int wRepeatCount; TYPE_1__ uChar; int dwControlKeyState; scalar_t__ bKeyDown; scalar_t__ wVirtualKeyCode; scalar_t__ wVirtualScanCode; } ;
struct TYPE_11__ {int Flags; scalar_t__ MakeCode; } ;
typedef TYPE_2__* PKEYBOARD_INPUT_DATA ;
typedef int NTSTATUS ;
typedef TYPE_3__ KEY_EVENT_RECORD ;
typedef int HANDLE ;
typedef int DWORD ;


 int FUNC_0 (char*,scalar_t__) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (int ,int *,TYPE_2__*) ;
 scalar_t__ FUNC_3 (TYPE_2__*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (TYPE_3__*,int) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;

NTSTATUS
FUNC_5(HANDLE VAR_6, PKEYBOARD_INPUT_DATA VAR_7, KEY_EVENT_RECORD *VAR_8)
{
 static DWORD VAR_9;

 FUNC_4(VAR_8, sizeof(KEY_EVENT_RECORD));

 if (!(VAR_7->Flags & VAR_2))
  VAR_8->bKeyDown = VAR_5;
 else
  VAR_8->bKeyDown = VAR_1;

 VAR_8->wRepeatCount = 1;
 VAR_8->wVirtualScanCode = VAR_7->MakeCode;

 FUNC_0("Translating: %x\n", VAR_7->MakeCode);

 FUNC_2(VAR_6, &VAR_9, VAR_7);
 VAR_8->dwControlKeyState = VAR_9;

 if (VAR_7->Flags & VAR_3)
  VAR_8->dwControlKeyState |= VAR_0;

 VAR_8->wVirtualKeyCode = FUNC_3(VAR_7,
                                            VAR_8->dwControlKeyState);

 FUNC_0("Result: %x\n", VAR_8->wVirtualKeyCode);

 if (VAR_8->bKeyDown) {
  VAR_8->uChar.AsciiChar =
                     FUNC_1(VAR_7,
                                       VAR_8->dwControlKeyState);
  FUNC_0("Char: %x\n", VAR_8->uChar.AsciiChar);
 } else {
  VAR_8->uChar.AsciiChar = 0;
 }

 return VAR_4;
}
