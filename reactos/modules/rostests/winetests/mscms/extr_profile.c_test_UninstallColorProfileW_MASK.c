
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int dest ;
typedef char WCHAR ;
typedef scalar_t__ HANDLE ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (char*,int ,int ,int *,int ,int ,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 () ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (char*,char*) ;
 int VAR_5 ;
 int FUNC_4 (int) ;
 int VAR_6 ;
 int FUNC_5 (int ,int ,char*,int,char*,int,int *,int *) ;
 int FUNC_6 (char*,char*) ;
 int * VAR_7 ;
 int FUNC_7 (int,char*,int) ;
 int FUNC_8 (int *,char*,int*) ;
 int FUNC_9 (int *,char*) ;
 int FUNC_10 (int *,char*,int ) ;
 int FUNC_11 (char*) ;

__attribute__((used)) static void FUNC_12( WCHAR *VAR_8 )
{
    BOOL VAR_9;



    VAR_9 = FUNC_10( ((void*)0), ((void*)0), VAR_2 );
    FUNC_7( !VAR_9, "UninstallColorProfileW() succeeded (%d)\n", FUNC_2() );

    VAR_9 = FUNC_10( VAR_7, ((void*)0), VAR_2 );
    FUNC_7( !VAR_9, "UninstallColorProfileW() succeeded (%d)\n", FUNC_2() );



    if (VAR_8)
    {
        WCHAR VAR_10[VAR_4], VAR_11[VAR_4];
        char VAR_12[VAR_4];
        DWORD VAR_13 = sizeof(VAR_10);
        WCHAR VAR_14[] = { '\\', 0 };
        HANDLE VAR_15;
        int VAR_16;

        FUNC_4(0xdeadbeef);
        VAR_9 = FUNC_9( ((void*)0), VAR_8 );
        if (!VAR_9 && (FUNC_2() == VAR_1))
        {
            FUNC_11("Not enough rights for InstallColorProfileW\n");
            return;
        }
        FUNC_7( VAR_9, "InstallColorProfileW() failed (%d)\n", FUNC_2() );

        VAR_9 = FUNC_8( ((void*)0), VAR_10, &VAR_13 );
        FUNC_7( VAR_9, "GetColorDirectoryW() failed (%d)\n", FUNC_2() );

        FUNC_3( VAR_8, VAR_11 );

        FUNC_6( VAR_10, VAR_14 );
        FUNC_6( VAR_10, VAR_11 );

        VAR_9 = FUNC_10( ((void*)0), VAR_10, VAR_6 );
        FUNC_7( VAR_9, "UninstallColorProfileW() failed (%d)\n", FUNC_2() );

        VAR_16 = FUNC_5(VAR_0, 0, VAR_10, -1, VAR_12, VAR_4, ((void*)0), ((void*)0));
        FUNC_7( VAR_16 > 0 , "WideCharToMultiByte() returns %d\n", VAR_16);

        VAR_15 = FUNC_1( VAR_12, 0 , 0, ((void*)0), VAR_5, 0, ((void*)0) );
        FUNC_7( VAR_15 == VAR_3, "Found the profile (%d)\n", FUNC_2() );
        FUNC_0( VAR_15 );
    }
}
