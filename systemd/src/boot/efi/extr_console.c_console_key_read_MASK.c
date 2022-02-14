
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int VOID ;
typedef int UINTN ;
typedef int UINT64 ;
typedef int UINT32 ;
struct TYPE_13__ {int WaitForEvent; } ;
struct TYPE_12__ {TYPE_3__* ConIn; } ;
struct TYPE_9__ {int UnicodeChar; int ScanCode; } ;
struct TYPE_8__ {int KeyShiftState; } ;
struct TYPE_11__ {int UnicodeChar; int ScanCode; TYPE_2__ Key; TYPE_1__ KeyState; } ;
struct TYPE_10__ {int ReadKeyStroke; int ReadKeyStrokeEx; int WaitForKey; } ;
typedef int EFI_STATUS ;
typedef TYPE_3__ EFI_SIMPLE_TEXT_INPUT_EX_PROTOCOL ;
typedef TYPE_4__ EFI_KEY_DATA ;
typedef TYPE_4__ EFI_INPUT_KEY ;
typedef int EFI_GUID ;
typedef scalar_t__ BOOLEAN ;


 TYPE_7__* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int *,int **) ;
 TYPE_6__* VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_3 (int ,int,...) ;

EFI_STATUS FUNC_4(UINT64 *VAR_11, BOOLEAN VAR_12) {
        EFI_GUID VAR_13 = VAR_8;
        static EFI_SIMPLE_TEXT_INPUT_EX_PROTOCOL *VAR_14;
        static BOOLEAN VAR_15;
        UINTN VAR_16;
        EFI_INPUT_KEY VAR_17;
        EFI_STATUS VAR_18;

        if (!VAR_15) {
                VAR_18 = FUNC_2(&VAR_13, (VOID **)&VAR_14);
                if (FUNC_0(VAR_18))
                        VAR_14 = ((void*)0);

                VAR_15 = VAR_10;
        }


        if (VAR_12)
                FUNC_3(VAR_0->WaitForEvent, 3, 1, &VAR_9->ConIn->WaitForKey, &VAR_16);

        if (VAR_14) {
                EFI_KEY_DATA VAR_19;
                UINT64 VAR_20;

                VAR_18 = FUNC_3(VAR_14->ReadKeyStrokeEx, 2, VAR_14, &VAR_19);
                if (!FUNC_0(VAR_18)) {
                        UINT32 VAR_21 = 0;


                        if (VAR_19.KeyState.KeyShiftState & VAR_7) {
                                if (VAR_19.KeyState.KeyShiftState & (VAR_6|VAR_4))
                                        VAR_21 |= VAR_2;
                                if (VAR_19.KeyState.KeyShiftState & (VAR_5|VAR_3))
                                        VAR_21 |= VAR_1;
                        };


                        VAR_20 = FUNC_1(VAR_21, VAR_19.Key.ScanCode, VAR_19.Key.UnicodeChar);
                        if (VAR_20 > 0) {
                                *VAR_11 = VAR_20;
                                return 0;
                        }
                }
        }






        VAR_18 = FUNC_3(VAR_9->ConIn->ReadKeyStroke, 2, VAR_9->ConIn, &VAR_17);
        if (FUNC_0(VAR_18))
                return VAR_18;

        *VAR_11 = FUNC_1(0, VAR_17.ScanCode, VAR_17.UnicodeChar);
        return 0;
}
