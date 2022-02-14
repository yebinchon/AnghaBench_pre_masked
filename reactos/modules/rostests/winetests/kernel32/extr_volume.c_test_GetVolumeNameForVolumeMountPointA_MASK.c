
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int volume ;
typedef scalar_t__ DWORD ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int,char*) ;
 int VAR_7 ;
 scalar_t__ FUNC_2 (char*,char*,scalar_t__) ;
 scalar_t__ VAR_8 ;
 int FUNC_3 (int,char*,...) ;
 scalar_t__ FUNC_4 (char*,char*,scalar_t__) ;
 int FUNC_5 (char*,char*,int) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static void FUNC_7(void)
{
    BOOL VAR_9;
    char VAR_10[VAR_7], VAR_11[] = "c:\\";
    DWORD VAR_12 = sizeof(VAR_10), VAR_13;
    char VAR_14[VAR_7];


    if (!&FUNC_4) {
        FUNC_6("GetVolumeNameForVolumeMountPointA not found\n");
        return;
    }

    VAR_13 = FUNC_1(VAR_7, VAR_14);
    FUNC_3(VAR_13 != 0, "GetTempPathA error %d\n", FUNC_0());
    FUNC_3(VAR_13 < VAR_7, "temp path should fit into MAX_PATH\n");

    VAR_9 = FUNC_4(VAR_11, VAR_10, 0);
    FUNC_3(VAR_9 == VAR_6, "GetVolumeNameForVolumeMountPointA succeeded\n");
    FUNC_3(FUNC_0() == VAR_0 ||
        FUNC_0() == VAR_4,
        "wrong error, last=%d\n", FUNC_0());

    if (0) {
    VAR_9 = FUNC_4(VAR_11, ((void*)0), VAR_12);
    FUNC_3(VAR_9 == VAR_6, "GetVolumeNameForVolumeMountPointA succeeded\n");

    VAR_9 = FUNC_4(((void*)0), VAR_10, VAR_12);
    FUNC_3(VAR_9 == VAR_6, "GetVolumeNameForVolumeMountPointA succeeded\n");
    }

    VAR_9 = FUNC_4(VAR_11, VAR_10, VAR_12);
    FUNC_3(VAR_9 == VAR_8, "GetVolumeNameForVolumeMountPointA failed\n");
    FUNC_3(!FUNC_5( VAR_10, "\\\\?\\Volume{", 11),
        "GetVolumeNameForVolumeMountPointA failed to return valid string <%s>\n",
        VAR_10);


    VAR_9 = FUNC_4(VAR_11, VAR_10, 10);
    FUNC_3(VAR_9 == VAR_6 && FUNC_0() == VAR_0,
            "GetVolumeNameForVolumeMountPointA failed, wrong error returned, was %d, should be ERROR_FILENAME_EXCED_RANGE\n",
             FUNC_0());




    VAR_9 = FUNC_4(VAR_14, VAR_10, VAR_12);
    FUNC_3(VAR_9 == VAR_6 && (FUNC_0() == VAR_5 ||
        FUNC_0() == VAR_2),
        "GetVolumeNameForVolumeMountPointA failed on %s, last=%d\n",
        VAR_14, FUNC_0());


    VAR_11[2] = 0;
    for (;VAR_11[0] <= 'z'; VAR_11[0]++) {
        VAR_9 = FUNC_2( VAR_11, VAR_10, VAR_12);
        if(!VAR_9) break;
    }
    if (VAR_11[0] <= 'z')
    {
        VAR_11[2] = '\\';
        VAR_9 = FUNC_4(VAR_11, VAR_10, VAR_12);
        FUNC_3(VAR_9 == VAR_6 && FUNC_0() == VAR_1,
            "GetVolumeNameForVolumeMountPointA failed on %s, last=%d\n",
            VAR_11, FUNC_0());


        VAR_11[2] = 0;
        VAR_9 = FUNC_4(VAR_11, VAR_10, VAR_12);
        FUNC_3(VAR_9 == VAR_6 && FUNC_0() == VAR_3,
            "GetVolumeNameForVolumeMountPointA failed on %s, last=%d\n",
            VAR_11, FUNC_0());
    }
}
