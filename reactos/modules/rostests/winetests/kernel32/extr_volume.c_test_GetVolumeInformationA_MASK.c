
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int windowsdir ;
typedef int UINT ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 () ;
 int FUNC_2 (char*,int) ;
 int VAR_2 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (int) ;
 int VAR_3 ;
 int FUNC_6 (int,char*,...) ;
 int FUNC_7 (char*,char*,int,int*,int*,int*,char*,int) ;
 int FUNC_8 (char*,char*,int) ;
 int FUNC_9 (char*,char) ;
 int FUNC_10 (char*,char*) ;
 int FUNC_11 (char*) ;
 scalar_t__ FUNC_12 (char) ;
 int FUNC_13 (char*) ;

__attribute__((used)) static void FUNC_14(void)
{
    BOOL VAR_4;
    UINT VAR_5;
    char VAR_6[]="C:";
    char VAR_7[]="C:\\";
    char VAR_8[]="\\\\?\\C:\\";
    char VAR_9[VAR_2+1];
    DWORD VAR_10=VAR_2+1, VAR_11=-1, VAR_12=0, VAR_13=0, VAR_14=VAR_2+1;
    char VAR_15[VAR_2+1], VAR_16[VAR_2+1];
    char VAR_17[VAR_2+10];
    char VAR_18[VAR_2+1];

    FUNC_6( &FUNC_7 != ((void*)0), "GetVolumeInformationA not found\n");
    if(!&FUNC_7) {
        return;
    }


    VAR_5 = FUNC_2(VAR_17, sizeof(VAR_17));
    FUNC_6(VAR_5 < sizeof(VAR_17), "windowsdir is abnormally long!\n");
    FUNC_6(VAR_5 != 0, "GetWindowsDirectory: error %d\n", FUNC_1());
    VAR_6[0] = VAR_17[0];
    VAR_7[0] = VAR_17[0];
    VAR_8[4] = VAR_17[0];

    VAR_5 = FUNC_0(VAR_2, VAR_18);
    FUNC_6(VAR_5, "GetCurrentDirectory: error %d\n", FUNC_1());



    VAR_4 = FUNC_3(VAR_7);
    FUNC_6(VAR_4, "SetCurrentDirectory: error %d\n", FUNC_1());
    VAR_4 = FUNC_7(VAR_6, VAR_15, VAR_10, ((void*)0),
            ((void*)0), ((void*)0), VAR_16, VAR_14);
    FUNC_6(VAR_4, "GetVolumeInformationA root failed, last error %u\n", FUNC_1());


    VAR_4 = FUNC_3(VAR_17);
    FUNC_6(VAR_4, "SetCurrentDirectory: error %d\n", FUNC_1());
    FUNC_5(0xdeadbeef);
    VAR_4 = FUNC_7(VAR_6, VAR_15, VAR_10, ((void*)0),
            ((void*)0), ((void*)0), VAR_16, VAR_14);
    FUNC_6(!VAR_4 && (FUNC_1() == VAR_1),
        "GetVolumeInformationA did%s fail, last error %u\n", VAR_4 ? " not":"", FUNC_1());


    VAR_4 = FUNC_3(VAR_18);
    FUNC_6(VAR_4, "SetCurrentDirectory: error %d\n", FUNC_1());

    if (FUNC_12(VAR_18[0]) == FUNC_12(VAR_17[0])) {
        FUNC_9("Please re-run from another device than %c:\n", VAR_17[0]);

    } else {
        char VAR_19[]="=C:";
        VAR_19[1] = VAR_17[0];



        VAR_4 = FUNC_4(VAR_19, VAR_17);
        FUNC_6(VAR_4, "SetEnvironmentVariable %s failed\n", VAR_19);

        VAR_4 = FUNC_3(VAR_17);
        FUNC_6(VAR_4, "SetCurrentDirectory: error %d\n", FUNC_1());
        VAR_4 = FUNC_3(VAR_18);
        FUNC_6(VAR_4, "SetCurrentDirectory: error %d\n", FUNC_1());


        FUNC_5(0xdeadbeef);
        VAR_4 = FUNC_7(VAR_6, VAR_15, VAR_10, ((void*)0),
                ((void*)0), ((void*)0), VAR_16, VAR_14);
        FUNC_6(!VAR_4 && (FUNC_1() == VAR_1),
           "GetVolumeInformationA did%s fail, last error %u\n", VAR_4 ? " not":"", FUNC_1());


        VAR_4 = FUNC_7(VAR_7, VAR_15, VAR_10, ((void*)0),
                ((void*)0), ((void*)0), VAR_16, VAR_14);
        FUNC_6(VAR_4, "GetVolumeInformationA with \\ failed, last error %u\n", FUNC_1());

        VAR_4 = FUNC_3(VAR_7);
        FUNC_6(VAR_4, "SetCurrentDirectory: error %d\n", FUNC_1());
        VAR_4 = FUNC_3(VAR_18);
        FUNC_6(VAR_4, "SetCurrentDirectory: error %d\n", FUNC_1());



        FUNC_5(0xdeadbeef);
        VAR_4 = FUNC_7(VAR_6, VAR_15, VAR_10, ((void*)0),
                ((void*)0), ((void*)0), VAR_16, VAR_14);
        FUNC_6(!VAR_4 && (FUNC_1() == VAR_1),
           "GetVolumeInformationA did%s fail, last error %u\n", VAR_4 ? " not":"", FUNC_1());


        VAR_4 = FUNC_4(VAR_19, VAR_7);
        FUNC_6(VAR_4, "SetEnvironmentVariable %s failed\n", VAR_19);


        VAR_4 = FUNC_7(VAR_6, VAR_15, VAR_10, ((void*)0),
                ((void*)0), ((void*)0), VAR_16, VAR_14);
        FUNC_6(VAR_4, "GetVolumeInformationA failed, last error %u\n", FUNC_1());


        VAR_4 = FUNC_3(VAR_7);
        FUNC_6(VAR_4, "SetCurrentDirectory: error %d\n", FUNC_1());
        VAR_4 = FUNC_3(VAR_18);
        FUNC_6(VAR_4, "SetCurrentDirectory: error %d\n", FUNC_1());


        VAR_4 = FUNC_7(VAR_6, VAR_15, VAR_10, ((void*)0),
                ((void*)0), ((void*)0), VAR_16, VAR_14);
        FUNC_6(VAR_4, "GetVolumeInformationA failed, last error %u\n", FUNC_1());
    }


    VAR_4 = FUNC_7(((void*)0), VAR_15, VAR_10, ((void*)0),
            ((void*)0), ((void*)0), VAR_16, VAR_14);
    FUNC_6(VAR_4, "GetVolumeInformationA failed on null root dir, last error %u\n", FUNC_1());


    VAR_4 = FUNC_7(VAR_7, VAR_15, VAR_10,
            &VAR_11, &VAR_12, &VAR_13, VAR_16, VAR_14);
    FUNC_6(VAR_4, "GetVolumeInformationA failed, root=%s, last error=%u\n", VAR_7, FUNC_1());


    FUNC_5(0xdeadbeef);
    VAR_4 = FUNC_7(VAR_8, VAR_15, VAR_10,
            &VAR_11, &VAR_12, &VAR_13, VAR_16, VAR_14);
    FUNC_6(VAR_4, "GetVolumeInformationA did%s fail, root=%s, last error=%u\n", VAR_4 ? " not":"", VAR_8, FUNC_1());


    VAR_8[2] = '.';
    FUNC_5(0xdeadbeef);
    VAR_4 = FUNC_7(VAR_8, VAR_15, VAR_10,
            &VAR_11, &VAR_12, &VAR_13, VAR_16, VAR_14);
    FUNC_6(VAR_4, "GetVolumeInformationA did%s fail, root=%s, last error=%u\n", VAR_4 ? " not":"", VAR_8, FUNC_1());


    if (VAR_17[FUNC_11(VAR_17)-1] != '\\') FUNC_10(VAR_17, "\\");
    FUNC_5(0xdeadbeef);
    VAR_4 = FUNC_7(VAR_17, VAR_15, VAR_10,
            &VAR_11, &VAR_12, &VAR_13, VAR_16, VAR_14);
    FUNC_6(!VAR_4 && (FUNC_1()==VAR_0),
          "GetVolumeInformationA did%s fail, root=%s, last error=%u\n", VAR_4 ? " not":"", VAR_17, FUNC_1());

    if (VAR_17[FUNC_11(VAR_17)-1] == '\\') VAR_17[FUNC_11(VAR_17)-1] = 0;
    FUNC_5(0xdeadbeef);
    VAR_4 = FUNC_7(VAR_17, VAR_15, VAR_10,
            &VAR_11, &VAR_12, &VAR_13, VAR_16, VAR_14);
    FUNC_6(!VAR_4 && (FUNC_1()==VAR_1),
          "GetVolumeInformationA did%s fail, root=%s, last error=%u\n", VAR_4 ? " not":"", VAR_17, FUNC_1());

    if (!&FUNC_8) {
        FUNC_13("GetVolumeNameForVolumeMountPointA not found\n");
        return;
    }

    VAR_4 = FUNC_8(VAR_7, VAR_9, VAR_2);
    FUNC_6(VAR_4 == VAR_3, "GetVolumeNameForVolumeMountPointA failed\n");


    VAR_4 = FUNC_7(VAR_9, VAR_15, VAR_10,
            &VAR_11, &VAR_12, &VAR_13, VAR_16, VAR_14);
    FUNC_6(VAR_4, "GetVolumeInformationA failed, root=%s, last error=%u\n", VAR_9, FUNC_1());
}
