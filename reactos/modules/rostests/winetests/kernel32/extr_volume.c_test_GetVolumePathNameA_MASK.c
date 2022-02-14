
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int volume_path ;
typedef int test_paths ;
typedef int cwd ;
typedef int UINT ;
typedef scalar_t__ DWORD ;
typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (char const*,char*,int) ;
 scalar_t__ FUNC_1 (int,char*) ;
 scalar_t__ FUNC_2 () ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_3 (char*,char*) ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (int,char*,...) ;
 scalar_t__ FUNC_7 (char const*,char*,size_t) ;
 scalar_t__ FUNC_8 (char*,char*) ;
 scalar_t__ FUNC_9 (char*,char*) ;
 int FUNC_10 (char*) ;

__attribute__((used)) static void FUNC_11(void)
{
    char VAR_7[VAR_5], VAR_8[VAR_5];
    struct {
        const char *file_name;
        const char *path_name;
        DWORD path_len;
        DWORD error;
        DWORD broken_error;
    } VAR_9[] = {
        {
            ((void*)0), ((void*)0), 0,
            VAR_3, 0xdeadbeef
        },
        {
            "", ((void*)0), 0,
            VAR_3, 0xdeadbeef
        },
        {
            "C:\\", ((void*)0), 0,
            VAR_3, VAR_0
        },
        {
            "C:\\", "C:\\", 0,
            VAR_3, VAR_0
        },
        {
            "C:\\", "C:\\", 1,
            VAR_0, VAR_6
        },
        {
            "C:\\", "C:\\", sizeof(VAR_7),
            VAR_6, VAR_6
        },
        {
            "c:\\", "C:\\", sizeof(VAR_7),
            VAR_6, VAR_6
        },
        {
            "C::", "C:\\", sizeof(VAR_7),
            VAR_6, VAR_6
        },
        {
            "\\\\$$$", "C:\\", 1,
            VAR_2, VAR_0
        },
        {
            "C:\\windows\\system32", "C:\\", sizeof(VAR_7),
            VAR_6, VAR_6
        },
        {
            "C:\\windows\\system32\\AnInvalidFolder", "C:\\", sizeof(VAR_7),
            VAR_6, VAR_6
        },
        {
            "\\\\?\\C:\\AnInvalidFolder", "\\\\?\\C:\\", sizeof(VAR_7),
            VAR_6, VAR_6
        },
        {
            "\\\\?\\InvalidDrive:\\AnInvalidFolder", "\\\\?\\InvalidDrive:\\" ,
            sizeof(VAR_7),
            VAR_2, VAR_6
        },
        {
            "\\\\?\\Volume{00000000-00-0000-0000-000000000000}\\AnInvalidFolder",
            "\\\\?\\Volume{00000000-00-0000-0000-000000000000}\\" ,
            sizeof(VAR_7),
            VAR_2, VAR_6
        },
        {
            "\\\\ReallyBogus\\InvalidDrive:\\AnInvalidFolder",
            "\\\\ReallyBogus\\InvalidDrive:\\" , sizeof(VAR_7),
            VAR_2, VAR_6
        },
        {
            "C::", "C:\\", 4,
            VAR_6, VAR_4
        },
        {
            "M::", "C:\\", 4,
            VAR_1, VAR_4
        },
        {
            "InvalidDrive:\\AnInvalidFolder", "%CurrentDrive%\\", sizeof(VAR_7),
            VAR_6, VAR_6
        },
        {
            "\\??\\CdRom0", "%CurrentDrive%\\", sizeof(VAR_7),
            VAR_6, VAR_6
        },
        {
            "\\??\\ReallyBogus", "%CurrentDrive%\\", sizeof(VAR_7),
            VAR_6, VAR_6
        },
        {
            "C:", "C:", 2,
            VAR_0, VAR_6
        },
        {
            "C:", "C:", 3,
            VAR_6, VAR_0
        },
        {
            "C:\\", "C:", 2,
            VAR_0, VAR_6
        },
        {
            "C:\\", "C:", 3,
            VAR_6, VAR_0
        },
        {
            "C::", "C:", 2,
            VAR_0, VAR_6
        },
        {
            "C::", "C:", 3,
            VAR_6, VAR_0
        },
        {
            "C::", "C:\\", 4,
            VAR_6, VAR_4
        },
        {
            "C:\\windows\\system32\\AnInvalidFolder", "C:", 3,
            VAR_6, VAR_0
        },
        {
            "\\\\?\\C:\\AnInvalidFolder", "\\\\?\\C:", 3,
            VAR_0, VAR_6
        },
        {
            "\\\\?\\C:\\AnInvalidFolder", "\\\\?\\C:", 6,
            VAR_0, VAR_6
        },
        {
            "\\\\?\\C:\\AnInvalidFolder", "\\\\?\\C:", 7,
            VAR_6, VAR_0
        },
        {
            "\\\\?\\c:\\AnInvalidFolder", "\\\\?\\c:", 7,
            VAR_6, VAR_0
        },
        {
            "C:/", "C:\\", 4,
            VAR_6, VAR_4
        },
        {
            "M:/", "", 4,
            VAR_1, VAR_4
        },
        {
            "C:ABC:DEF:\\AnInvalidFolder", "C:\\", 4,
            VAR_6, VAR_4
        },
        {
            "?:ABC:DEF:\\AnInvalidFolder", "?:\\" , sizeof(VAR_7),
            VAR_1, VAR_6
        },
        {
            "relative/path", "%CurrentDrive%\\", sizeof(VAR_7),
            VAR_6, VAR_6
        },
        {
            "/unix-style/absolute/path", "%CurrentDrive%\\", sizeof(VAR_7),
            VAR_6, VAR_6
        },
        {
            "\\??\\C:\\NonExistent", "%CurrentDrive%\\", sizeof(VAR_7),
            VAR_6, VAR_6
        },
        {
            "\\??\\M:\\NonExistent", "%CurrentDrive%\\", sizeof(VAR_7),
            VAR_6, VAR_6
        },
        {
            "somefile:def", "%CurrentDrive%\\", sizeof(VAR_7),
            VAR_6, VAR_6
        },
        {
            "s:omefile", "S:\\" , sizeof(VAR_7),
            VAR_1, VAR_6
        },
    };
    BOOL VAR_10, VAR_11;
    DWORD VAR_12;
    UINT VAR_13;


    if (!&FUNC_7)
    {
        FUNC_10("required functions not found\n");
        return;
    }


    VAR_10 = FUNC_1( sizeof(VAR_8), VAR_8 );
    FUNC_6( VAR_10, "Failed to obtain the current working directory.\n" );
    VAR_8[2] = 0;
    VAR_10 = FUNC_3( "CurrentDrive", VAR_8 );
    FUNC_6( VAR_10, "Failed to set an environment variable for the current working drive.\n" );

    for (VAR_13=0; VAR_13<sizeof(VAR_9)/sizeof(VAR_9[0]); VAR_13++)
    {
        BOOL VAR_14 = VAR_9[VAR_13].broken_error == VAR_6;
        char *VAR_15 = (VAR_9[VAR_13].path_name != ((void*)0) ? VAR_7 : ((void*)0));
        BOOL VAR_16 = VAR_9[VAR_13].error == VAR_6;

        VAR_7[0] = 0;
        if (VAR_9[VAR_13].path_len < sizeof(VAR_7))
            VAR_7[ VAR_9[VAR_13].path_len ] = 0x11;

        FUNC_4( 0xdeadbeef );
        VAR_10 = FUNC_7( VAR_9[VAR_13].file_name, VAR_15, VAR_9[VAR_13].path_len );
        VAR_12 = FUNC_2();
        FUNC_6(VAR_10 == VAR_16 || FUNC_5(VAR_10 == VAR_14),
                                "GetVolumePathName test %d %s unexpectedly.\n",
                                VAR_13, VAR_9[VAR_13].error == VAR_6 ? "failed" : "succeeded");

        if (VAR_10)
        {
            char VAR_17[VAR_5];

            FUNC_0( VAR_9[VAR_13].path_name, VAR_17, VAR_5);

            VAR_11 = (FUNC_9( VAR_7, VAR_17 ) == 0)
                      || FUNC_5(FUNC_8( VAR_7, VAR_17 ) == 0) ;
            FUNC_6(VAR_11, "GetVolumePathName test %d unexpectedly returned path %s (expected %s).\n",
                        VAR_13, VAR_7, VAR_17);
        }
        else
        {

            VAR_11 = (VAR_12 == VAR_9[VAR_13].error || FUNC_5(VAR_12 == VAR_9[VAR_13].broken_error));
            FUNC_6(VAR_11, "GetVolumePathName test %d unexpectedly returned error 0x%x (expected 0x%x).\n",
                        VAR_13, VAR_12, VAR_9[VAR_13].error);
        }

        if (VAR_9[VAR_13].path_len < sizeof(VAR_7))
            FUNC_6(VAR_7[ VAR_9[VAR_13].path_len ] == 0x11,
               "GetVolumePathName test %d corrupted byte after end of buffer.\n", VAR_13);
    }
}
