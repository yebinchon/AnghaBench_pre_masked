
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int dest ;
typedef char WCHAR ;
typedef scalar_t__ HANDLE ;
typedef int DWORD ;
typedef int BOOL ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (char*,int ,int ,int *,int ,int ,int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (char*,char*) ;
 int VAR_3 ;
 int FUNC_4 (int) ;
 int VAR_4 ;
 int FUNC_5 (char*,char*) ;
 char* VAR_5 ;
 int FUNC_6 (int,char*,scalar_t__) ;
 int FUNC_7 (int *,char*,int*) ;
 int FUNC_8 (char*,char*) ;
 int FUNC_9 (int *,char*,int ) ;
 int FUNC_10 (char*) ;

__attribute__((used)) static void FUNC_11( WCHAR *VAR_6, WCHAR *VAR_7 )
{
    BOOL VAR_8;



    VAR_8 = FUNC_8( ((void*)0), ((void*)0) );
    FUNC_6( !VAR_8, "InstallColorProfileW() succeeded (%d)\n", FUNC_2() );

    VAR_8 = FUNC_8( VAR_5, ((void*)0) );
    FUNC_6( !VAR_8, "InstallColorProfileW() succeeded (%d)\n", FUNC_2() );

    VAR_8 = FUNC_8( ((void*)0), VAR_5 );
    FUNC_6( !VAR_8, "InstallColorProfileW() failed (%d)\n", FUNC_2() );

    if (VAR_6)
    {
        VAR_8 = FUNC_8( ((void*)0), VAR_6 );
        FUNC_6( VAR_8, "InstallColorProfileW() failed (%d)\n", FUNC_2() );
    }



    if (VAR_7)
    {
        WCHAR VAR_9[VAR_2], VAR_10[VAR_2];
        DWORD VAR_11 = sizeof(VAR_9);
        WCHAR VAR_12[] = { '\\', 0 };
        HANDLE VAR_13;

        FUNC_4(0xdeadbeef);
        VAR_8 = FUNC_8( ((void*)0), VAR_7 );
        if (!VAR_8 && (FUNC_2() == VAR_0))
        {
            FUNC_10("Not enough rights for InstallColorProfileW\n");
            return;
        }
        FUNC_6( VAR_8, "InstallColorProfileW() failed (%d)\n", FUNC_2() );

        VAR_8 = FUNC_7( ((void*)0), VAR_9, &VAR_11 );
        FUNC_6( VAR_8, "GetColorDirectoryW() failed (%d)\n", FUNC_2() );

        FUNC_3( VAR_7, VAR_10 );

        FUNC_5( VAR_9, VAR_12 );
        FUNC_5( VAR_9, VAR_10 );


        VAR_13 = FUNC_1( VAR_9, 0 , 0, ((void*)0), VAR_3, 0, ((void*)0) );
        FUNC_6( VAR_13 != VAR_1, "Couldn't find the profile (%d)\n", FUNC_2() );
        FUNC_0( VAR_13 );

        VAR_8 = FUNC_9( ((void*)0), VAR_9, VAR_4 );
        FUNC_6( VAR_8, "UninstallColorProfileW() failed (%d)\n", FUNC_2() );
    }
}
