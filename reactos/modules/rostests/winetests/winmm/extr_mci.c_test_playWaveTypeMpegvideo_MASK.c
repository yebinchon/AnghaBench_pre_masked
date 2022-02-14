
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int buf ;
struct TYPE_2__ {scalar_t__ dwReturn; int dwItem; } ;
typedef TYPE_1__ MCI_STATUS_PARMS ;
typedef int MCI_PLAY_PARMS ;
typedef scalar_t__ MCIERROR ;
typedef int MCIDEVICEID ;
typedef int DWORD_PTR ;
typedef char* DWORD ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 char* FUNC_0 (scalar_t__) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int,int ,int ,int ) ;
 scalar_t__ FUNC_3 (char*,char*,int,int *) ;
 int FUNC_4 (char*,int ,int) ;
 int FUNC_5 (int,char*,...) ;
 scalar_t__ VAR_6 ;
 int FUNC_6 (char*,char*) ;
 int FUNC_7 (char*,char*) ;

__attribute__((used)) static void FUNC_8(void)
{
    MCIERROR VAR_7;
    MCIDEVICEID VAR_8;
    MCI_PLAY_PARMS VAR_9;
    MCI_STATUS_PARMS VAR_10;
    char VAR_11[1024];
    FUNC_4(VAR_11, 0, sizeof(VAR_11));

    VAR_7 = FUNC_3("open tempfile.wav type MPEGVideo alias mysound", ((void*)0), 0, ((void*)0));
    FUNC_5(VAR_7==VAR_6,"mci open tempfile.wav type MPEGVideo returned %s\n", FUNC_0(VAR_7));
    if(VAR_7) {
        FUNC_6("Cannot open tempfile.wav type MPEGVideo for playing (%s), skipping\n", FUNC_0(VAR_7));
        return;
    }

    VAR_8 = FUNC_1("mysound");
    FUNC_5(VAR_8 == 1, "mciGetDeviceIDA mysound returned %u, expected 1\n", VAR_8);

    VAR_7 = FUNC_2(VAR_8, VAR_2, 0, (DWORD_PTR)&VAR_9);
    FUNC_5(!VAR_7,"mciCommand play returned %s\n", FUNC_0(VAR_7));

    VAR_7 = FUNC_3("status mysound mode", VAR_11, sizeof(VAR_11), ((void*)0));
    FUNC_5(!VAR_7,"mci status mode returned %s\n", FUNC_0(VAR_7));
    FUNC_5(!FUNC_7(VAR_11,"playing"), "mci status mode: %s\n", VAR_11);

    VAR_10.dwItem = VAR_5;
    VAR_7 = FUNC_2(VAR_8, VAR_3,
                          VAR_4,
                          (DWORD_PTR)&VAR_10);
    FUNC_5(!VAR_7,"mciCommand status mode returned %s\n", FUNC_0(VAR_7));
    FUNC_5(VAR_10.dwReturn == VAR_1,
       "mciCommand status mode: %u\n", (DWORD)VAR_10.dwReturn);

    VAR_7 = FUNC_3("setaudio mysound volume to 1000", ((void*)0), 0, ((void*)0));
    FUNC_5(!VAR_7,"mci setaudio volume to 1000 returned %s\n", FUNC_0(VAR_7));

    VAR_7 = FUNC_3("status mysound mode", VAR_11, sizeof(VAR_11), ((void*)0));
    FUNC_5(!VAR_7,"mci status mode returned %s\n", FUNC_0(VAR_7));
    FUNC_5(!FUNC_7(VAR_11,"playing"), "mci status mode: %s\n", VAR_11);

    VAR_7 = FUNC_3("setaudio mysound volume to 1001", ((void*)0), 0, ((void*)0));
    FUNC_5(VAR_7==VAR_0,"mci setaudio volume to 1001 returned %s\n", FUNC_0(VAR_7));

    VAR_7 = FUNC_3("status mysound mode", VAR_11, sizeof(VAR_11), ((void*)0));
    FUNC_5(!VAR_7,"mci status mode returned %s\n", FUNC_0(VAR_7));
    FUNC_5(!FUNC_7(VAR_11,"playing"), "mci status mode: %s\n", VAR_11);

    VAR_7 = FUNC_3("close mysound", ((void*)0), 0, ((void*)0));
    FUNC_5(!VAR_7,"mci close returned %s\n", FUNC_0(VAR_7));
}
