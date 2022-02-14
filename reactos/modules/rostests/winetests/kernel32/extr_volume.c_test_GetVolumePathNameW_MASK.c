
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int drive_c2 ;
typedef int drive_c1 ;
typedef char WCHAR ;
typedef int BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 () ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (char*,char*,int) ;
 int FUNC_3 (int,char*,...) ;
 int FUNC_4 (char*,char*,int) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static void FUNC_6(void)
{
    static WCHAR VAR_2[] = {'C',':',0};
    static WCHAR VAR_3[] = {'C',':','\\',0};
    WCHAR VAR_4[VAR_1];
    BOOL VAR_5;

    if (!&FUNC_4)
    {
        FUNC_5("required functions not found\n");
        return;
    }

    VAR_4[0] = 0;
    VAR_4[1] = 0x11;
    VAR_5 = FUNC_4( VAR_2, VAR_4, 1 );
    FUNC_3(!VAR_5, "GetVolumePathNameW test succeeded unexpectedly.\n");
    FUNC_3(FUNC_0() == VAR_0, "GetVolumePathNameW unexpectedly returned error 0x%x (expected 0x%x).\n",
        FUNC_0(), VAR_0);
    FUNC_3(VAR_4[1] == 0x11, "GetVolumePathW corrupted byte after end of buffer.\n");

    VAR_4[0] = 0;
    VAR_4[2] = 0x11;
    VAR_5 = FUNC_4( VAR_2, VAR_4, 2 );
    FUNC_3(!VAR_5, "GetVolumePathNameW test succeeded unexpectedly.\n");
    FUNC_3(FUNC_0() == VAR_0, "GetVolumePathNameW unexpectedly returned error 0x%x (expected 0x%x).\n",
        FUNC_0(), VAR_0);
    FUNC_3(VAR_4[2] == 0x11, "GetVolumePathW corrupted byte after end of buffer.\n");

    VAR_4[0] = 0;
    VAR_4[3] = 0x11;
    VAR_5 = FUNC_4( VAR_2, VAR_4, 3 );
    FUNC_3(VAR_5 || FUNC_1(!VAR_5) , "GetVolumePathNameW test failed unexpectedly.\n");
    FUNC_3(FUNC_2(VAR_4, VAR_2, sizeof(VAR_2)) == 0
       || FUNC_1(VAR_4[0] == 0) ,
       "GetVolumePathNameW unexpectedly returned wrong path.\n");
    FUNC_3(VAR_4[3] == 0x11, "GetVolumePathW corrupted byte after end of buffer.\n");

    VAR_4[0] = 0;
    VAR_4[4] = 0x11;
    VAR_5 = FUNC_4( VAR_2, VAR_4, 4 );
    FUNC_3(VAR_5, "GetVolumePathNameW test failed unexpectedly.\n");
    FUNC_3(FUNC_2(VAR_4, VAR_3, sizeof(VAR_3)) == 0, "GetVolumePathNameW unexpectedly returned wrong path.\n");
    FUNC_3(VAR_4[4] == 0x11, "GetVolumePathW corrupted byte after end of buffer.\n");
}
