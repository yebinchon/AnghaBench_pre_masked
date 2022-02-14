
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int DWORD ;
typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (char*,char*) ;

__attribute__((used)) static const char * FUNC_1(DWORD VAR_5)
{
    static char VAR_6[100];
    BOOL VAR_7=VAR_4;
    VAR_6[0]=0;
    if (VAR_5&VAR_3) {
        FUNC_0(VAR_6,"MIXERCONTROL_CONTROLF_UNIFORM");
        VAR_7=VAR_0;
    }
    if (VAR_5&VAR_2) {
        if (!VAR_7)
            FUNC_0(VAR_6, "|");

        FUNC_0(VAR_6,"MIXERCONTROL_CONTROLF_MULTIPLE");
        VAR_7=VAR_0;
    }

    if (VAR_5&VAR_1) {
        if (!VAR_7)
            FUNC_0(VAR_6, "|");

        FUNC_0(VAR_6,"MIXERCONTROL_CONTROLF_DISABLED");
    }

    return VAR_6;
}
