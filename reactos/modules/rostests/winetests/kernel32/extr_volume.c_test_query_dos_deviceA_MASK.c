
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buffer2 ;
typedef int DWORD ;
typedef int BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 () ;
 char* FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int ,char*) ;
 int FUNC_4 (char*,char*,int) ;
 int FUNC_5 (int) ;
 int VAR_3 ;
 int FUNC_6 (int,char*,...) ;
 scalar_t__ FUNC_7 (char*) ;
 scalar_t__ FUNC_8 (char*,char*) ;
 char FUNC_9 (char) ;

__attribute__((used)) static void FUNC_10(void)
{
    char VAR_4[] = "a:";
    char *VAR_5, *VAR_6, VAR_7[2000];
    DWORD VAR_8, VAR_9, VAR_10=32768;
    BOOL VAR_11 = VAR_2;


    FUNC_5(0xdeadbeef);
    VAR_8 = FUNC_4( ((void*)0), ((void*)0), 0 );
    FUNC_6(!VAR_8 && FUNC_0() == VAR_1,
       "QueryDosDeviceA(no buffer): returned %u, le=%u\n", VAR_8, FUNC_0());

    VAR_6 = FUNC_2( FUNC_1(), 0, VAR_10 );
    FUNC_5(0xdeadbeef);
    VAR_8 = FUNC_4( ((void*)0), VAR_6, VAR_10 );
    FUNC_6((VAR_8 && FUNC_0() != VAR_1),
        "QueryDosDeviceA failed to return list, last error %u\n", FUNC_0());

    if (VAR_8 && FUNC_0() != VAR_1) {
        VAR_5 = VAR_6;
        for (;;) {
            if (!FUNC_7(VAR_5)) break;
            VAR_9 = FUNC_4( VAR_5, VAR_7, sizeof(VAR_7) );
            FUNC_6(VAR_9, "QueryDosDeviceA failed to return current mapping for %s, last error %u\n", VAR_5, FUNC_0());
            VAR_5 += FUNC_7(VAR_5) + 1;
            if (VAR_8 <= (VAR_5-VAR_6)) break;
        }
    }

    for (;VAR_4[0] <= 'z'; VAR_4[0]++) {

        VAR_8 = FUNC_4( VAR_4, VAR_6, VAR_10 - 1);
        FUNC_6(VAR_8 || FUNC_0() == VAR_0,
            "QueryDosDeviceA failed to return current mapping for %s, last error %u\n", VAR_4, FUNC_0());
        if(VAR_8) {
            for (VAR_5 = VAR_6; *VAR_5; VAR_5++) *VAR_5 = FUNC_9(*VAR_5);
            if (FUNC_8(VAR_6, "HARDDISK") || FUNC_8(VAR_6, "RAMDISK")) VAR_11 = VAR_3;
        }
    }
    FUNC_6(VAR_11, "expected at least one devicename to contain HARDDISK or RAMDISK\n");
    FUNC_3( FUNC_1(), 0, VAR_6 );
}
