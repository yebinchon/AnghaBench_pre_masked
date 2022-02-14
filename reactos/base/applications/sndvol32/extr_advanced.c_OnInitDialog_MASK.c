
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_9__ ;
typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int WPARAM ;
typedef int WCHAR ;
typedef int VOID ;
typedef size_t UINT ;
struct TYPE_14__ {int dwMaximum; int dwMinimum; } ;
struct TYPE_22__ {int dwControlType; int dwControlID; int szName; TYPE_1__ Bounds; } ;
struct TYPE_21__ {scalar_t__ fValue; } ;
struct TYPE_20__ {int dwValue; } ;
struct TYPE_19__ {int* dwMaximum; int* dwMinimum; TYPE_4__* Context; int * dwControlId; void** bEnabled; } ;
struct TYPE_18__ {scalar_t__ top; scalar_t__ bottom; scalar_t__ left; scalar_t__ right; } ;
struct TYPE_17__ {TYPE_3__* MixerWindow; int Mixer; int Line; int LineName; } ;
struct TYPE_15__ {int cy; } ;
struct TYPE_16__ {TYPE_2__ baseUnit; } ;
typedef TYPE_5__ RECT ;
typedef TYPE_6__* PADVANCED_DATA ;
typedef TYPE_7__ MIXERCONTROLDETAILS_UNSIGNED ;
typedef TYPE_8__ MIXERCONTROLDETAILS_BOOLEAN ;
typedef int LPVOID ;
typedef int LPPOINT ;
typedef TYPE_9__* LPMIXERCONTROL ;
typedef int LPARAM ;
typedef scalar_t__ LONG ;
typedef int HWND ;
typedef int DWORD ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int ,void*) ;
 void* VAR_1 ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 () ;
 int FUNC_4 (int ,TYPE_5__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (int ,int ,TYPE_9__*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_6 (int ,scalar_t__,int *,int ) ;
 scalar_t__ FUNC_7 (int,int) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_8 (int ,int ,int ,int) ;
 scalar_t__ FUNC_9 (int,int ,int) ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int FUNC_10 (int ,int,int ,int ,int) ;
 int FUNC_11 (int ,int ,scalar_t__,scalar_t__,scalar_t__,scalar_t__,int) ;
 int FUNC_12 (int ,int *) ;
 int FUNC_13 (int ,int ) ;
 int FUNC_14 (int ,int ,int,int,int ) ;
 scalar_t__ FUNC_15 (int ,size_t*,int ,TYPE_9__**) ;
 int FUNC_16 (int *,int ,int *,int ) ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 void* VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 scalar_t__ VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;

__attribute__((used)) static
VOID
FUNC_17(
    HWND VAR_37,
    PADVANCED_DATA VAR_38)
{
    MIXERCONTROLDETAILS_UNSIGNED VAR_39;
    MIXERCONTROLDETAILS_BOOLEAN VAR_40;
    WCHAR VAR_41[256], VAR_42[256];
    LPMIXERCONTROL VAR_43 = ((void*)0);
    UINT VAR_44 = 0, VAR_45;
    DWORD VAR_46, VAR_47, VAR_48;
    DWORD VAR_49 = 0;
    RECT VAR_50;
    LONG VAR_51;


    FUNC_6(VAR_36, VAR_13, VAR_41, FUNC_0(VAR_41));
    FUNC_16(VAR_42, FUNC_0(VAR_42), VAR_41, VAR_38->Context->LineName);
    FUNC_12(VAR_37, VAR_42);


    for (VAR_46 = VAR_4; VAR_46<= VAR_11; VAR_46++)
        FUNC_1(FUNC_2(VAR_37, VAR_46), VAR_1);


    FUNC_10(VAR_37, VAR_5, VAR_29, (WPARAM)VAR_31, (LPARAM)FUNC_7(VAR_33, VAR_32));
    FUNC_10(VAR_37, VAR_11, VAR_29, (WPARAM)VAR_31, (LPARAM)FUNC_7(VAR_33, VAR_32));
    FUNC_10(VAR_37, VAR_5, VAR_27, 0, (LPARAM)VAR_34);
    FUNC_10(VAR_37, VAR_11, VAR_27, 0, (LPARAM)VAR_34);
    FUNC_10(VAR_37, VAR_5, VAR_28, (WPARAM)VAR_31, (LPARAM)0);
    FUNC_10(VAR_37, VAR_11, VAR_28, (WPARAM)VAR_31, (LPARAM)0);


    VAR_47 = (VAR_32 / (VAR_35 + 1));
    if (VAR_32 % (VAR_35 + 1) != 0)
        VAR_47++;
    for (VAR_46 = VAR_47; VAR_46 < VAR_32; VAR_46 += VAR_47)
    {
        FUNC_10(VAR_37, VAR_5, VAR_30, 0, (LPARAM)VAR_46);
        FUNC_10(VAR_37, VAR_11, VAR_30, 0, (LPARAM)VAR_46);
    }


    for (VAR_46 = VAR_8; VAR_46<= VAR_7; VAR_46++)
        FUNC_13(FUNC_2(VAR_37, VAR_46), VAR_25);

    if (FUNC_15(VAR_38->Context->Mixer, &VAR_44, VAR_38->Context->Line, &VAR_43))
    {
        for (VAR_45 = 0; VAR_45 < VAR_44; VAR_45++)
        {
            if (VAR_43[VAR_45].dwControlType == VAR_15)
            {


                if (FUNC_14(VAR_38->Context->Mixer, VAR_43[VAR_45].dwControlID, 1, sizeof(MIXERCONTROLDETAILS_UNSIGNED), (LPVOID)&VAR_39) != -1)
                {
                    for (VAR_46 = VAR_4; VAR_46<= VAR_5; VAR_46++)
                        FUNC_1(FUNC_2(VAR_37, VAR_46), VAR_31);

                    VAR_47 = (VAR_43[VAR_45].Bounds.dwMaximum - VAR_43[VAR_45].Bounds.dwMinimum) / (VAR_32 - VAR_33);
                    VAR_48 = (VAR_39.dwValue - VAR_43[VAR_45].Bounds.dwMinimum) / VAR_47;
                    FUNC_10(VAR_37, VAR_5, VAR_28, (WPARAM)VAR_31, VAR_48);

                    VAR_38->bEnabled[0] = VAR_31;
                    VAR_38->dwControlId[0] = VAR_43[VAR_45].dwControlID;
                    VAR_38->dwMaximum[0] = VAR_43[VAR_45].Bounds.dwMaximum;
                    VAR_38->dwMinimum[0] = VAR_43[VAR_45].Bounds.dwMinimum;
                }
            }
            else if (VAR_43[VAR_45].dwControlType == VAR_18)
            {


                if (FUNC_14(VAR_38->Context->Mixer, VAR_43[VAR_45].dwControlID, 1, sizeof(MIXERCONTROLDETAILS_UNSIGNED), (LPVOID)&VAR_39) != -1)
                {
                    for (VAR_46 = VAR_10; VAR_46<= VAR_11; VAR_46++)
                        FUNC_1(FUNC_2(VAR_37, VAR_46), VAR_31);

                    VAR_47 = (VAR_43[VAR_45].Bounds.dwMaximum - VAR_43[VAR_45].Bounds.dwMinimum) / (VAR_32 - VAR_33);
                    VAR_48 = (VAR_39.dwValue - VAR_43[VAR_45].Bounds.dwMinimum) / VAR_47;
                    FUNC_10(VAR_37, VAR_11, VAR_28, (WPARAM)VAR_31, VAR_48);

                    VAR_38->bEnabled[1] = VAR_31;
                    VAR_38->dwControlId[1] = VAR_43[VAR_45].dwControlID;
                    VAR_38->dwMaximum[1] = VAR_43[VAR_45].Bounds.dwMaximum;
                    VAR_38->dwMinimum[1] = VAR_43[VAR_45].Bounds.dwMinimum;
                }
            }
            else if (((VAR_43[VAR_45].dwControlType & (VAR_19 | VAR_20 | VAR_21)) == VAR_16) &&
                     (VAR_43[VAR_45].dwControlType != VAR_17))
            {


                if (VAR_49 < 2)
                {
                    if (FUNC_14(VAR_38->Context->Mixer, VAR_43[VAR_45].dwControlID, 1, sizeof(MIXERCONTROLDETAILS_BOOLEAN), (LPVOID)&VAR_40) != -1)
                    {
                        FUNC_6(VAR_36, VAR_14 + VAR_49, VAR_41, FUNC_0(VAR_41));
                        FUNC_16(VAR_42, FUNC_0(VAR_42), VAR_41, VAR_43[VAR_45].szName);
                        FUNC_12(FUNC_2(VAR_37, VAR_6 + VAR_49), VAR_42);

                        FUNC_13(FUNC_2(VAR_37, VAR_6 + VAR_49), VAR_26);

                        FUNC_10(VAR_37, VAR_6 + VAR_49, VAR_0, (WPARAM)VAR_40.fValue, 0);

                        VAR_38->bEnabled[VAR_49 + 2] = VAR_31;
                        VAR_38->dwControlId[VAR_49 + 2] = VAR_43[VAR_45].dwControlID;

                        VAR_49++;
                    }
                }
            }
        }


        FUNC_5(FUNC_3(), 0, VAR_43);
    }

    if (VAR_49 != 0)
    {

        FUNC_13(FUNC_2(VAR_37, VAR_8), VAR_26);
        FUNC_13(FUNC_2(VAR_37, VAR_9), VAR_26);


        FUNC_4(VAR_37, &VAR_50);

        VAR_51 = FUNC_9((VAR_49 == 1) ? 73 : (73 + 15), VAR_38->Context->MixerWindow->baseUnit.cy, 8);
        VAR_50.bottom += VAR_51;

        FUNC_11(VAR_37, VAR_3, VAR_50.left, VAR_50.top, VAR_50.right - VAR_50.left, VAR_50.bottom - VAR_50.top, VAR_22 | VAR_24);


        FUNC_4(FUNC_2(VAR_37, VAR_12), &VAR_50);
        FUNC_8(VAR_2, VAR_37, (LPPOINT)&VAR_50, 2);

        VAR_50.top += VAR_51;
        VAR_50.bottom += VAR_51;

        FUNC_11(FUNC_2(VAR_37, VAR_12), VAR_3, VAR_50.left, VAR_50.top, VAR_50.right - VAR_50.left, VAR_50.bottom - VAR_50.top, VAR_23 | VAR_24);

        if (VAR_49 == 2)
        {

            FUNC_4(FUNC_2(VAR_37, VAR_8), &VAR_50);
            FUNC_8(VAR_2, VAR_37, (LPPOINT)&VAR_50, 2);

            VAR_51 = FUNC_9(15, VAR_38->Context->MixerWindow->baseUnit.cy, 8);
            VAR_50.bottom += VAR_51;

            FUNC_11(FUNC_2(VAR_37, VAR_8), VAR_3, VAR_50.left, VAR_50.top, VAR_50.right - VAR_50.left, VAR_50.bottom - VAR_50.top, VAR_22 | VAR_24);
        }
    }
}
