
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int cbSize; int lpszPort; int lpszActivePort; } ;
struct TYPE_4__ {void* bSoundOnActivation; void* bWarningSounds; TYPE_2__ serialKeys; int szPort; int szActivePort; TYPE_2__ accessTimeout; TYPE_2__ mouseKeys; TYPE_2__ bShowSounds; TYPE_2__ ssSoundSentry; int uCaretBlinkTime; TYPE_2__ uCaretWidth; TYPE_2__ highContrast; TYPE_2__ bKeyboardPref; TYPE_2__ toggleKeys; TYPE_2__ filterKeys; TYPE_2__ stickyKeys; } ;
typedef int TOGGLEKEYS ;
typedef int STICKYKEYS ;
typedef int SOUNDSENTRY ;
typedef int SERIALKEYS ;
typedef TYPE_1__* PGLOBAL_DATA ;
typedef int MOUSEKEYS ;
typedef int LPBYTE ;
typedef scalar_t__ LONG ;
typedef int HKEY ;
typedef int HIGHCONTRAST ;
typedef int FILTERKEYS ;
typedef int DWORD ;
typedef void* BOOL ;
typedef int ACCESSTIMEOUT ;


 scalar_t__ VAR_0 ;
 void* VAR_1 ;
 int FUNC_0 () ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int ,int ,int *,int ,int,int *,int *,int*) ;
 scalar_t__ FUNC_3 (int ,int ,int *,int *,int ,int*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_4 (int ,int,TYPE_2__*,int ) ;
 void* VAR_17 ;
 int FUNC_5 (char*) ;

__attribute__((used)) static BOOL
FUNC_6(PGLOBAL_DATA VAR_18)
{
    DWORD VAR_19;
    DWORD VAR_20;
    HKEY VAR_21;
    LONG VAR_22;


    VAR_18->stickyKeys.cbSize = sizeof(STICKYKEYS);
    if (!FUNC_4(VAR_15,
                              sizeof(STICKYKEYS),
                              &VAR_18->stickyKeys,
                              0))
        return VAR_1;


    VAR_18->filterKeys.cbSize = sizeof(FILTERKEYS);
    if (!FUNC_4(VAR_8,
                              sizeof(FILTERKEYS),
                              &VAR_18->filterKeys,
                              0))
        return VAR_1;


    VAR_18->toggleKeys.cbSize = sizeof(TOGGLEKEYS);
    if (!FUNC_4(VAR_16,
                              sizeof(TOGGLEKEYS),
                              &VAR_18->toggleKeys,
                              0))
        return VAR_1;


    if (!FUNC_4(VAR_10,
                              0,
                              &VAR_18->bKeyboardPref,
                              0))
        return VAR_1;


    VAR_18->highContrast.cbSize = sizeof(HIGHCONTRAST);
    FUNC_4(VAR_9,
                         sizeof(HIGHCONTRAST),
                         &VAR_18->highContrast,
                         0);

    FUNC_4(VAR_7,
                         0,
                         &VAR_18->uCaretWidth,
                         0);

    VAR_18->uCaretBlinkTime = FUNC_0();


    VAR_18->ssSoundSentry.cbSize = sizeof(SOUNDSENTRY);
    FUNC_4(VAR_14,
                         sizeof(SOUNDSENTRY),
                         &VAR_18->ssSoundSentry,
                         0);

    FUNC_4(VAR_13,
                         0,
                         &VAR_18->bShowSounds,
                         0);


    VAR_18->mouseKeys.cbSize = sizeof(MOUSEKEYS);
    FUNC_4(VAR_11,
                         sizeof(MOUSEKEYS),
                         &VAR_18->mouseKeys,
                         0);


    VAR_18->accessTimeout.cbSize = sizeof(ACCESSTIMEOUT);
    FUNC_4(VAR_6,
                         sizeof(ACCESSTIMEOUT),
                         &VAR_18->accessTimeout,
                         0);


    VAR_18->serialKeys.cbSize = sizeof(SERIALKEYS);
    VAR_18->serialKeys.lpszActivePort = VAR_18->szActivePort;
    VAR_18->serialKeys.lpszPort = VAR_18->szPort;
    FUNC_4(VAR_12,
                         sizeof(SERIALKEYS),
                         &VAR_18->serialKeys,
                         0);

    VAR_18->bWarningSounds = VAR_17;
    VAR_18->bSoundOnActivation = VAR_17;

    VAR_22 = FUNC_2(VAR_2,
                            FUNC_5("Control Panel\\Accessibility"),
                            0,
                            ((void*)0),
                            VAR_5,
                            VAR_3 | VAR_4,
                            ((void*)0),
                            &VAR_21,
                            &VAR_19);
    if (VAR_22 != VAR_0)
        return VAR_17;

    VAR_20 = sizeof(BOOL);
    VAR_22 = FUNC_3(VAR_21,
                             FUNC_5("Warning Sounds"),
                             ((void*)0),
                             ((void*)0),
                             (LPBYTE)&VAR_18->bWarningSounds,
                             &VAR_20);
    if (VAR_22 != VAR_0)
        VAR_18->bWarningSounds = VAR_17;

    VAR_20 = sizeof(BOOL);
    VAR_22 = FUNC_3(VAR_21,
                             FUNC_5("Sound On Activation"),
                             ((void*)0),
                             ((void*)0),
                             (LPBYTE)&VAR_18->bSoundOnActivation,
                             &VAR_20);
    if (VAR_22 != VAR_0)
        VAR_18->bSoundOnActivation = VAR_17;

    FUNC_1(VAR_21);

    return VAR_17;
}
