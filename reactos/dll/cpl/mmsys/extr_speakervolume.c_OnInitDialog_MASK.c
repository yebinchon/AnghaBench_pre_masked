
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_11__ ;


typedef int WPARAM ;
struct TYPE_13__ {int dwMinimum; int dwMaximum; } ;
struct TYPE_18__ {int dwControlID; TYPE_1__ Bounds; } ;
struct TYPE_17__ {int cbStruct; int cChannels; int cbDetails; TYPE_11__* paDetails; scalar_t__ cMultipleItems; int dwControlID; } ;
struct TYPE_16__ {int cbStruct; int cChannels; int dwLineID; int dwComponentType; } ;
struct TYPE_15__ {int cbStruct; int cControls; int cbmxctrl; TYPE_6__* pamxctrl; int dwControlType; int dwLineID; } ;
struct TYPE_14__ {int volumeChannels; int volumeMinimum; int volumeMaximum; int volumeStep; TYPE_11__* volumeValues; scalar_t__ hMixer; int volumeControlID; } ;
struct TYPE_12__ {int dwValue; } ;
typedef int TCHAR ;
typedef TYPE_2__* PPAGE_DATA ;
typedef TYPE_3__ MIXERLINECONTROLS ;
typedef TYPE_4__ MIXERLINE ;
typedef int MIXERCONTROLDETAILS_UNSIGNED ;
typedef TYPE_5__ MIXERCONTROLDETAILS ;
typedef TYPE_6__ MIXERCONTROL ;
typedef int LPARAM ;
typedef int INT ;
typedef int HWND ;
typedef int HMIXEROBJ ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 () ;
 TYPE_11__* FUNC_2 (int ,int ,int) ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (int ,scalar_t__,int *,int ) ;
 scalar_t__ FUNC_4 (int,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_5 (int ,int ,int *,int ) ;
 int FUNC_6 (int ) ;
 int VAR_12 ;
 int FUNC_7 (int ,int,int ,int ,int) ;
 int FUNC_8 (int ,int *) ;
 int FUNC_9 (int ,int ) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_10 (char*) ;
 int FUNC_11 (int *) ;
 int VAR_22 ;
 int FUNC_12 (int,int) ;
 scalar_t__ FUNC_13 (int ,TYPE_5__*,int) ;
 scalar_t__ FUNC_14 (int ,TYPE_3__*,int) ;
 scalar_t__ FUNC_15 (int ,TYPE_4__*,int) ;
 scalar_t__ FUNC_16 (scalar_t__*,int ,int ,int ,int) ;

__attribute__((used)) static
BOOL
FUNC_17(
    PPAGE_DATA VAR_23,
    HWND VAR_24)
{
    TCHAR VAR_25[256];
    MIXERLINE VAR_26;
    MIXERCONTROL VAR_27;
    MIXERLINECONTROLS VAR_28;
    MIXERCONTROLDETAILS VAR_29;
    INT VAR_30, VAR_31;


    if (FUNC_16(&VAR_23->hMixer, 0, FUNC_6(VAR_24), 0, VAR_10 | VAR_0) != VAR_11)
    {
        FUNC_5(VAR_24, FUNC_10("Cannot open mixer"), ((void*)0), VAR_3);
        return VAR_1;
    }


    VAR_26.cbStruct = sizeof(MIXERLINE);
    VAR_26.dwComponentType = VAR_5;

    if (FUNC_15((HMIXEROBJ)VAR_23->hMixer, &VAR_26, VAR_9 | VAR_8) != VAR_11)
        return VAR_1;

    VAR_23->volumeChannels = VAR_26.cChannels;


    VAR_28.cbStruct = sizeof(MIXERLINECONTROLS);
    VAR_28.dwLineID = VAR_26.dwLineID;
    VAR_28.dwControlType = VAR_4;
    VAR_28.cControls = 1;
    VAR_28.cbmxctrl = sizeof(MIXERCONTROL);
    VAR_28.pamxctrl = &VAR_27;

    if (FUNC_14((HMIXEROBJ)VAR_23->hMixer, &VAR_28, VAR_9 | VAR_7) != VAR_11)
        return VAR_1;

    VAR_23->volumeControlID = VAR_27.dwControlID;
    VAR_23->volumeMinimum = VAR_27.Bounds.dwMinimum;
    VAR_23->volumeMaximum = VAR_27.Bounds.dwMaximum;
    VAR_23->volumeStep = (VAR_23->volumeMaximum - VAR_23->volumeMinimum) / (VAR_18 - VAR_19);


    VAR_23->volumeValues = FUNC_2(FUNC_1(),
                                        0,
                                        VAR_26.cChannels * sizeof(MIXERCONTROLDETAILS_UNSIGNED));
    if (VAR_23->volumeValues == ((void*)0))
        return VAR_1;


    VAR_29.cbStruct = sizeof(MIXERCONTROLDETAILS);
    VAR_29.dwControlID = VAR_27.dwControlID;
    VAR_29.cChannels = VAR_26.cChannels;
    VAR_29.cMultipleItems = 0;
    VAR_29.cbDetails = sizeof(MIXERCONTROLDETAILS_UNSIGNED);
    VAR_29.paDetails = VAR_23->volumeValues;

    if (FUNC_13((HMIXEROBJ)VAR_23->hMixer, &VAR_29, VAR_9 | VAR_6) != VAR_11)
        return VAR_1;


    for (VAR_30 = 0; VAR_30 < FUNC_12(VAR_26.cChannels, 5); VAR_30++)
    {
        VAR_31 = VAR_30 * 4;


        FUNC_3(VAR_22, VAR_2 + VAR_30, VAR_25, FUNC_11(VAR_25));
        FUNC_8(FUNC_0(VAR_24, 9472 + VAR_31), VAR_25);


        FUNC_7(VAR_24, 9475 + VAR_31, VAR_15, (WPARAM)VAR_17, (LPARAM)FUNC_4(VAR_19, VAR_18));
        FUNC_7(VAR_24, 9475 + VAR_31, VAR_16, VAR_21, 0);
        FUNC_7(VAR_24, 9475 + VAR_31, VAR_13, 0, VAR_20);
        FUNC_7(VAR_24, 9475 + VAR_31, VAR_14, (WPARAM)VAR_17, (LPARAM)(VAR_23->volumeValues[VAR_30].dwValue - VAR_23->volumeMinimum) / VAR_23->volumeStep);
    }


    for (VAR_30 = VAR_26.cChannels; VAR_30 < 8; VAR_30++)
    {
        VAR_31 = VAR_30 * 4;
        FUNC_9(FUNC_0(VAR_24, 9472 + VAR_31), VAR_12);
        FUNC_9(FUNC_0(VAR_24, 9473 + VAR_31), VAR_12);
        FUNC_9(FUNC_0(VAR_24, 9474 + VAR_31), VAR_12);
        FUNC_9(FUNC_0(VAR_24, 9475 + VAR_31), VAR_12);
    }

    return VAR_17;
}
