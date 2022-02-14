
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* pProfileData; void* cbDataSize; void* dwType; } ;
typedef TYPE_1__ PROFILE ;
typedef int * HTRANSFORM ;
typedef int * HPROFILE ;
typedef int DWORD ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int **,int,int *,int,int ,int ) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (TYPE_1__*,int ,int ,int ) ;
 void* FUNC_6 (char*) ;

__attribute__((used)) static void FUNC_7( char *VAR_4, char *VAR_5 )
{
    PROFILE VAR_6;
    HPROFILE VAR_7[2];
    HTRANSFORM VAR_8;
    DWORD VAR_9[2] = { VAR_0, VAR_0 };

    if (VAR_5)
    {
        VAR_6.dwType = VAR_2;
        VAR_6.pProfileData = VAR_4;
        VAR_6.cbDataSize = FUNC_6(VAR_4);

        VAR_7[0] = FUNC_5( &VAR_6, VAR_3, 0, VAR_1 );
        FUNC_1( VAR_7[0] != ((void*)0), "got %u\n", FUNC_0() );

        VAR_6.dwType = VAR_2;
        VAR_6.pProfileData = VAR_5;
        VAR_6.cbDataSize = FUNC_6(VAR_5);

        VAR_7[1] = FUNC_5( &VAR_6, VAR_3, 0, VAR_1 );
        FUNC_1( VAR_7[1] != ((void*)0), "got %u\n", FUNC_0() );

        VAR_8 = FUNC_3( VAR_7, 2, VAR_9, 2, 0, 0 );
        FUNC_1( VAR_8 != ((void*)0), "got %u\n", FUNC_0() );

        FUNC_4( VAR_8 );
        FUNC_2( VAR_7[0] );
        FUNC_2( VAR_7[1] );
    }
}
