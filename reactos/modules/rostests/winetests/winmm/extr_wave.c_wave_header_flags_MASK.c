
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int DWORD ;
typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (char*,char*,int) ;
 int FUNC_1 (char*,char*) ;

__attribute__((used)) static const char * FUNC_2(DWORD VAR_8)
{

    static char VAR_9[1024];
    BOOL VAR_10 = VAR_1;
    VAR_9[0] = 0;
    if (VAR_8 & VAR_2) {
        FUNC_1(VAR_9, "WHDR_BEGINLOOP");
        VAR_10 = VAR_0;
    }
    if (VAR_8 & VAR_3) {
        if (!VAR_10) FUNC_1(VAR_9, " ");
        FUNC_1(VAR_9, "WHDR_DONE");
        VAR_10 = VAR_0;
    }
    if (VAR_8 & VAR_4) {
        if (!VAR_10) FUNC_1(VAR_9, " ");
        FUNC_1(VAR_9, "WHDR_ENDLOOP");
        VAR_10 = VAR_0;
    }
    if (VAR_8 & VAR_5) {
        if (!VAR_10) FUNC_1(VAR_9, " ");
        FUNC_1(VAR_9, "WHDR_INQUEUE");
        VAR_10 = VAR_0;
    }
    if (VAR_8 & VAR_7) {
        if (!VAR_10) FUNC_1(VAR_9, " ");
        FUNC_1(VAR_9, "WHDR_PREPARED");
        VAR_10 = VAR_0;
    }
    if (VAR_8 & ~(VAR_2|VAR_3|VAR_4|VAR_5|VAR_7)) {
        char VAR_11[32];
        FUNC_0(VAR_11, "UNKNOWN(0x%08x)", VAR_8 & ~(VAR_2|VAR_3|VAR_4|VAR_5|VAR_7));
        if (!VAR_10) FUNC_1(VAR_9, " ");
        FUNC_1(VAR_9, VAR_11);
    }
    return VAR_9;
}
