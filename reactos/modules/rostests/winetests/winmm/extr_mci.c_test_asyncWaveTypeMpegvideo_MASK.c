
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;
typedef int MCIDEVICEID ;
typedef int * HWND ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (int) ;
 int FUNC_3 (char*,char*,int,int *) ;
 int FUNC_4 (char*,int ,int) ;
 int FUNC_5 (int,char*,char*) ;
 int VAR_3 ;
 int FUNC_6 (char*,char*) ;
 int FUNC_7 (char*,char*) ;
 int FUNC_8 (int *,char*,int ) ;

__attribute__((used)) static void FUNC_9(HWND VAR_4)
{
    MCIDEVICEID VAR_5;
    int VAR_6;
    char VAR_7[1024];
    FUNC_4(VAR_7, 0, sizeof(VAR_7));

    VAR_6 = FUNC_3("open tempfile.wav alias mysound notify type mpegvideo", VAR_7, sizeof(VAR_7), VAR_4);
    FUNC_5(VAR_6==VAR_3,"mci open tempfile.wav returned %s\n", FUNC_2(VAR_6));
    if(VAR_6) {
        FUNC_6("Cannot open tempfile.wav for playing (%s), skipping\n", FUNC_2(VAR_6));
        return;
    }
    FUNC_5(!FUNC_7(VAR_7,"1"), "mci open deviceId: %s, expected 1\n", VAR_7);
    VAR_5 = FUNC_1(VAR_7);
    FUNC_5(VAR_5,"mci open DeviceID: %d\n", VAR_5);
    FUNC_8(VAR_4,"open alias notify",VAR_1);

    VAR_6 = FUNC_3("play mysound notify", ((void*)0), 0, VAR_4);
    FUNC_5(!VAR_6,"mci play returned %s\n", FUNC_2(VAR_6));

    FUNC_0(500);

    VAR_6 = FUNC_3("pause mysound wait", ((void*)0), 0, VAR_4);
    FUNC_5(!VAR_6,"mci pause wait returned %s\n", FUNC_2(VAR_6));

    VAR_6 = FUNC_3("status mysound mode notify", VAR_7, sizeof(VAR_7), VAR_4);
    FUNC_5(!VAR_6,"mci status mode returned %s\n", FUNC_2(VAR_6));
    if(!VAR_6) FUNC_5(!FUNC_7(VAR_7,"paused"), "mci status mode: %s\n", VAR_7);
    FUNC_8(VAR_4,"play (superseded)",VAR_2);
    FUNC_8(VAR_4,"status",VAR_1);

    VAR_6 = FUNC_3("seek mysound to start wait", ((void*)0), 0, ((void*)0));
    FUNC_5(!VAR_6,"mci seek to start wait returned %s\n", FUNC_2(VAR_6));

    VAR_6 = FUNC_3("set mysound time format milliseconds", ((void*)0), 0, ((void*)0));
    FUNC_5(!VAR_6,"mci time format milliseconds returned %s\n", FUNC_2(VAR_6));

    VAR_6 = FUNC_3("play mysound to 1500 notify", ((void*)0), 0, VAR_4);
    FUNC_5(!VAR_6,"mci play returned %s\n", FUNC_2(VAR_6));
    FUNC_0(200);
    FUNC_8(VAR_4,"play",0);

    VAR_6 = FUNC_3("close mysound wait", ((void*)0), 0, ((void*)0));
    FUNC_5(!VAR_6,"mci close wait returned %s\n", FUNC_2(VAR_6));
    FUNC_8(VAR_4,"play (aborted by close)",VAR_0);
}
