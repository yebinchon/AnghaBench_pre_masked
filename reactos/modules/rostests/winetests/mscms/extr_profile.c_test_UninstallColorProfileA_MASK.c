
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int dest ;
typedef scalar_t__ HANDLE ;
typedef int DWORD ;
typedef char CHAR ;
typedef int BOOL ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (char*,int ,int ,int *,int ,int ,int *) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (char*,char*) ;
 int VAR_4 ;
 int FUNC_4 (int) ;
 int VAR_5 ;
 int FUNC_5 (char*,char*) ;
 int * VAR_6 ;
 int FUNC_6 (int,char*,scalar_t__) ;
 int FUNC_7 (int *,char*,int*) ;
 int FUNC_8 (int *,char*) ;
 int FUNC_9 (int *,char*,int ) ;
 int FUNC_10 (char*) ;

__attribute__((used)) static void FUNC_11( char *VAR_7 )
{
    BOOL VAR_8;



    VAR_8 = FUNC_9( ((void*)0), ((void*)0), VAR_1 );
    FUNC_6( !VAR_8, "UninstallColorProfileA() succeeded (%d)\n", FUNC_2() );

    VAR_8 = FUNC_9( VAR_6, ((void*)0), VAR_1 );
    FUNC_6( !VAR_8, "UninstallColorProfileA() succeeded (%d)\n", FUNC_2() );



    if (VAR_7)
    {
        CHAR VAR_9[VAR_3], VAR_10[VAR_3];
        DWORD VAR_11 = sizeof(VAR_9);
        CHAR VAR_12[] = "\\";
        HANDLE VAR_13;

        FUNC_4(0xdeadbeef);
        VAR_8 = FUNC_8( ((void*)0), VAR_7 );
        if (!VAR_8 && (FUNC_2() == VAR_0))
        {
            FUNC_10("Not enough rights for InstallColorProfileA\n");
            return;
        }
        FUNC_6( VAR_8, "InstallColorProfileA() failed (%d)\n", FUNC_2() );

        VAR_8 = FUNC_7( ((void*)0), VAR_9, &VAR_11 );
        FUNC_6( VAR_8, "GetColorDirectoryA() failed (%d)\n", FUNC_2() );

        FUNC_3( VAR_7, VAR_10 );

        FUNC_5( VAR_9, VAR_12 );
        FUNC_5( VAR_9, VAR_10 );

        VAR_8 = FUNC_9( ((void*)0), VAR_9, VAR_5 );
        FUNC_6( VAR_8, "UninstallColorProfileA() failed (%d)\n", FUNC_2() );


        VAR_13 = FUNC_1( VAR_9, 0 , 0, ((void*)0), VAR_4, 0, ((void*)0) );
        FUNC_6( VAR_13 == VAR_2, "Found the profile (%d)\n", FUNC_2() );
        FUNC_0( VAR_13 );
    }
}
