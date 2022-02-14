
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int DWORD ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static const char * FUNC_1(DWORD VAR_6)
{

    static char VAR_7[256];
    VAR_7[0] = 0;

    if (VAR_6 & VAR_1) strcat(VAR_7, " " "WAVECAPS_PITCH");
    if (VAR_6 & VAR_2) FUNC_0(VAR_7, " " "WAVECAPS_PLAYBACKRATE");
    if (VAR_6 & VAR_5) FUNC_0(VAR_7, " " "WAVECAPS_VOLUME");
    if (VAR_6 & VAR_0) FUNC_0(VAR_7, " " "WAVECAPS_LRVOLUME");
    if (VAR_6 & VAR_4) FUNC_0(VAR_7, " " "WAVECAPS_SYNC");
    if (VAR_6 & VAR_3) FUNC_0(VAR_7, " " "WAVECAPS_SAMPLEACCURATE");

    return VAR_7[0] ? VAR_7 + 1 : "";

}
