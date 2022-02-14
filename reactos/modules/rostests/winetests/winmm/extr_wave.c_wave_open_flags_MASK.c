
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int DWORD ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (char*,char*) ;

const char * FUNC_1(DWORD VAR_12)
{
    static char VAR_13[1024];
    BOOL VAR_14 = VAR_7;
    VAR_13[0] = 0;
    if ((VAR_12 & VAR_4) == VAR_0) {
        FUNC_0(VAR_13, "CALLBACK_EVENT");
        VAR_14 = VAR_6;
    }
    if ((VAR_12 & VAR_4) == VAR_1) {
        if (!VAR_14) FUNC_0(VAR_13, "|");
        FUNC_0(VAR_13, "CALLBACK_FUNCTION");
        VAR_14 = VAR_6;
    }
    if ((VAR_12 & VAR_4) == VAR_2) {
        if (!VAR_14) FUNC_0(VAR_13, "|");
        FUNC_0(VAR_13, "CALLBACK_NULL");
        VAR_14 = VAR_6;
    }
    if ((VAR_12 & VAR_4) == VAR_3) {
        if (!VAR_14) FUNC_0(VAR_13, "|");
        FUNC_0(VAR_13, "CALLBACK_THREAD");
        VAR_14 = VAR_6;
    }
    if ((VAR_12 & VAR_4) == VAR_5) {
        if (!VAR_14) FUNC_0(VAR_13, "|");
        FUNC_0(VAR_13, "CALLBACK_WINDOW");
        VAR_14 = VAR_6;
    }
    if ((VAR_12 & VAR_8) == VAR_8) {
        if (!VAR_14) FUNC_0(VAR_13, "|");
        FUNC_0(VAR_13, "WAVE_ALLOWSYNC");
        VAR_14 = VAR_6;
    }
    if ((VAR_12 & VAR_9) == VAR_9) {
        if (!VAR_14) FUNC_0(VAR_13, "|");
        FUNC_0(VAR_13, "WAVE_FORMAT_DIRECT");
        VAR_14 = VAR_6;
    }
    if ((VAR_12 & VAR_10) == VAR_10) {
        if (!VAR_14) FUNC_0(VAR_13, "|");
        FUNC_0(VAR_13, "WAVE_FORMAT_QUERY");
        VAR_14 = VAR_6;
    }
    if ((VAR_12 & VAR_11) == VAR_11) {
        if (!VAR_14) FUNC_0(VAR_13, "|");
        FUNC_0(VAR_13, "WAVE_MAPPED");
    }
    return VAR_13;
}
