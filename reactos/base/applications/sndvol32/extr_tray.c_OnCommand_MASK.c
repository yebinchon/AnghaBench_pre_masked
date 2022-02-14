
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int WPARAM ;
typedef int VOID ;
struct TYPE_8__ {int cbStruct; int cChannels; int cbDetails; TYPE_2__* paDetails; scalar_t__ cMultipleItems; int dwControlID; } ;
struct TYPE_7__ {int fValue; } ;
struct TYPE_6__ {scalar_t__ hMixer; int muteControlID; } ;
typedef TYPE_1__* PDIALOG_DATA ;
typedef TYPE_2__ MIXERCONTROLDETAILS_BOOLEAN ;
typedef TYPE_3__ MIXERCONTROLDETAILS ;
typedef scalar_t__ LPARAM ;
typedef int HWND ;
typedef int HMIXEROBJ ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (int ,int ,int ,int ) ;
 int FUNC_3 (int ,TYPE_3__*,int) ;

__attribute__((used)) static
VOID
FUNC_4(
    PDIALOG_DATA VAR_6,
    HWND VAR_7,
    WPARAM VAR_8,
    LPARAM VAR_9)
{
    MIXERCONTROLDETAILS VAR_10;
    MIXERCONTROLDETAILS_BOOLEAN VAR_11;

    if ((FUNC_1(VAR_8) == VAR_3) &&
        (FUNC_0(VAR_8) == VAR_1))
    {
        VAR_10.cbStruct = sizeof(MIXERCONTROLDETAILS);
        VAR_10.dwControlID = VAR_6->muteControlID;
        VAR_10.cChannels = 1;
        VAR_10.cMultipleItems = 0;
        VAR_10.cbDetails = sizeof(MIXERCONTROLDETAILS_BOOLEAN);
        VAR_10.paDetails = &VAR_11;

        VAR_11.fValue = (FUNC_2((HWND)VAR_9, VAR_0, 0, 0) == VAR_2);

        FUNC_3((HMIXEROBJ)VAR_6->hMixer,
                               &VAR_10,
                               VAR_4 | VAR_5);
    }
}
