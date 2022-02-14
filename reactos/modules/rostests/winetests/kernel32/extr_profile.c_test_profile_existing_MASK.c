
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pe ;
typedef scalar_t__ HANDLE ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (char const*,int const,int,int *,int ,int ,int *) ;
 int FUNC_2 (char const*) ;


 int VAR_1 ;




 int FUNC_3 () ;
 int FUNC_4 (char*,char*,int *,char*,int,char const*) ;
 scalar_t__ VAR_2 ;
 char* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 char* VAR_6 ;
 int FUNC_5 (int) ;

 int FUNC_6 (scalar_t__,char*,int ,int*,int *) ;
 int FUNC_7 (char*,char*,char*,char const*) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int,char*,...) ;
 int FUNC_10 (char*,char*,char*,char*) ;
 int FUNC_11 (char*) ;

__attribute__((used)) static void FUNC_12(void)
{
    static const char *VAR_7 = ".\\winesharing1.ini";
    static const char *VAR_8 = ".\\winesharing2.ini";

    static const struct {
        DWORD dwDesiredAccess;
        DWORD dwShareMode;
        DWORD write_error;
        BOOL read_error;
        DWORD broken_error;
    } VAR_9[] = {
        {130, 132, 134, 133 },
        {130, 131, 134, 128 },
        {129, 132, 134, 133 },
        {129, 131, 134, 128 },
        {130|129, 132, 134, 133 },
        {130|129, 131, 134, 128 },
        {130, 132|131, 0, 133, 134 },
        {129, 132|131, 0, 133, 134 },

        {130|129, 132|131, 0, 133, 134 }
    };

    int VAR_10;
    BOOL VAR_11;
    DWORD VAR_12;
    HANDLE VAR_13 = 0;
    char VAR_14[VAR_4];

    for (VAR_10=0; VAR_10 < sizeof(VAR_9)/sizeof(VAR_9[0]); VAR_10++)
    {
        VAR_13 = FUNC_1(VAR_7, VAR_9[VAR_10].dwDesiredAccess, VAR_9[VAR_10].dwShareMode, ((void*)0),
                       VAR_0, VAR_1, ((void*)0));
        FUNC_9(VAR_2 != VAR_13, "%d: CreateFile failed\n",VAR_10);
        FUNC_5(0xdeadbeef);

        VAR_11 = FUNC_7(VAR_6, VAR_3, "12345", VAR_7);
        if (!VAR_9[VAR_10].write_error)
        {
            if (!VAR_11)
                FUNC_9( FUNC_8(FUNC_3() == VAR_9[VAR_10].broken_error),
                    "%d: WritePrivateProfileString failed with error %u\n", VAR_10, FUNC_3() );
            FUNC_0(VAR_13);
            VAR_12 = FUNC_4(VAR_6, VAR_3, 0, VAR_14, VAR_4, VAR_7);
            if (VAR_11)
                FUNC_9( VAR_12 == 5, "%d: test failed, number of characters copied: %d instead of 5\n", VAR_10, VAR_12 );
            else
                FUNC_9( !VAR_12, "%d: test failed, number of characters copied: %d instead of 0\n", VAR_10, VAR_12 );
        }
        else
        {
            DWORD VAR_15 = FUNC_3();
            FUNC_9( !VAR_11, "%d: WritePrivateProfileString succeeded\n", VAR_10 );
            if (!VAR_11)
                FUNC_9( VAR_15 == VAR_9[VAR_10].write_error, "%d: WritePrivateProfileString failed with error %u/%u\n",
                    VAR_10, VAR_15, VAR_9[VAR_10].write_error );
            FUNC_0(VAR_13);
            VAR_12 = FUNC_4(VAR_6, VAR_3, 0, VAR_14, VAR_4, VAR_7);
            FUNC_9( !VAR_12, "%d: test failed, number of characters copied: %d instead of 0\n", VAR_10, VAR_12 );
        }

        FUNC_9( FUNC_2(VAR_7), "delete failed\n" );
    }

    VAR_13 = FUNC_1(VAR_8, 129, 0, ((void*)0), VAR_0, VAR_1, ((void*)0));
    FUNC_10( VAR_14, "[%s]\r\n%s=123\r\n", VAR_6, VAR_3 );
    FUNC_9( FUNC_6( VAR_13, VAR_14, FUNC_11(VAR_14), &VAR_12, ((void*)0) ), "failed to write\n" );
    FUNC_0( VAR_13 );

    for (VAR_10=0; VAR_10 < sizeof(VAR_9)/sizeof(VAR_9[0]); VAR_10++)
    {
        VAR_13 = FUNC_1(VAR_8, VAR_9[VAR_10].dwDesiredAccess, VAR_9[VAR_10].dwShareMode, ((void*)0),
                       VAR_5, VAR_1, ((void*)0));
        FUNC_9(VAR_2 != VAR_13, "%d: CreateFile failed\n",VAR_10);
        FUNC_5(0xdeadbeef);
        VAR_11 = FUNC_4(VAR_6, VAR_3, ((void*)0), VAR_14, VAR_4, VAR_8);

        if (!VAR_9[VAR_10].read_error)
            FUNC_9( VAR_11 ||
                FUNC_8(!VAR_11 && FUNC_3() == 0xdeadbeef),
                "%d: GetPrivateProfileString failed with error %u\n", VAR_10, FUNC_3() );
        else
            FUNC_9( !VAR_11, "%d: GetPrivateProfileString succeeded\n", VAR_10 );
        FUNC_0(VAR_13);
    }
    FUNC_9( FUNC_2(VAR_8), "delete failed\n" );
}
