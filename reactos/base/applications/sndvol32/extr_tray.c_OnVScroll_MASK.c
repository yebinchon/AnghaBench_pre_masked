
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int WPARAM ;
typedef int VOID ;
struct TYPE_10__ {int cbStruct; size_t cChannels; int cbDetails; TYPE_2__* paDetails; int cMultipleItems; int dwControlID; } ;
struct TYPE_9__ {size_t volumeMinimum; size_t volumeMaximum; size_t volumeStep; size_t volumeChannels; size_t maxVolume; int hMixer; TYPE_2__* volumeCurrentValues; int volumeControlID; TYPE_1__* volumeInitValues; } ;
struct TYPE_8__ {size_t dwValue; } ;
struct TYPE_7__ {size_t dwValue; } ;
typedef TYPE_3__* PDIALOG_DATA ;
typedef int MIXERCONTROLDETAILS_UNSIGNED ;
typedef TYPE_4__ MIXERCONTROLDETAILS ;
typedef int LPCTSTR ;
typedef int LPARAM ;
typedef int HWND ;
typedef int HMIXEROBJ ;
typedef size_t DWORD ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int *,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ,int ,int ,int ,int ) ;
 int VAR_6 ;


 size_t VAR_7 ;
 size_t VAR_8 ;
 int FUNC_3 (int ,TYPE_4__*,int) ;

__attribute__((used)) static
VOID
FUNC_4(
    PDIALOG_DATA VAR_9,
    HWND VAR_10,
    WPARAM VAR_11,
    LPARAM VAR_12)
{
    MIXERCONTROLDETAILS VAR_13;
    DWORD VAR_14, VAR_15, VAR_16;

    switch (FUNC_0(VAR_11))
    {
        case 128:
            break;

        case 129:
            FUNC_1((LPCTSTR)VAR_4, ((void*)0), VAR_5 | VAR_3);
            break;

        default:
            VAR_14 = VAR_7 - (DWORD)FUNC_2(VAR_10, VAR_0, VAR_6, 0, 0);

            if (VAR_14 == VAR_8)
                VAR_15 = VAR_9->volumeMinimum;
            else if (VAR_14 == VAR_7)
                VAR_15 = VAR_9->volumeMaximum;
            else
                VAR_15 = (VAR_14 * VAR_9->volumeStep) + VAR_9->volumeMinimum;

            for (VAR_16 = 0; VAR_16 < VAR_9->volumeChannels; VAR_16++)
            {
                if (VAR_9->volumeInitValues[VAR_16].dwValue == VAR_9->maxVolume)
                {
                    VAR_9->volumeCurrentValues[VAR_16].dwValue = VAR_15;
                }
                else
                {
                    VAR_9->volumeCurrentValues[VAR_16].dwValue =
                        VAR_9->volumeInitValues[VAR_16].dwValue * VAR_15 / VAR_9-> maxVolume;
                }
            }

            VAR_13.cbStruct = sizeof(MIXERCONTROLDETAILS);
            VAR_13.dwControlID = VAR_9->volumeControlID;
            VAR_13.cChannels = VAR_9->volumeChannels;
            VAR_13.cMultipleItems = 0;
            VAR_13.cbDetails = sizeof(MIXERCONTROLDETAILS_UNSIGNED);
            VAR_13.paDetails = VAR_9->volumeCurrentValues;

            FUNC_3((HMIXEROBJ)VAR_9->hMixer,
                                   &VAR_13,
                                   VAR_1 | VAR_2);
            break;
    }
}
