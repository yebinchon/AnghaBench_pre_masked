
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* pProfileData; int cbDataSize; int dwType; } ;
typedef scalar_t__ TAGTYPE ;
typedef TYPE_1__ PROFILE ;
typedef int * HPROFILE ;
typedef int DWORD ;
typedef scalar_t__ BOOL ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int,char*,int ) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int,scalar_t__*) ;
 int * FUNC_4 (TYPE_1__*,int ,int ,int ) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static void FUNC_6( char *VAR_3 )
{
    if (VAR_3)
    {
        PROFILE VAR_4;
        HPROFILE VAR_5;
        BOOL VAR_6;
        DWORD VAR_7 = 1;
        TAGTYPE VAR_8, VAR_9 = 0x63707274;

        VAR_4.dwType = VAR_1;
        VAR_4.pProfileData = VAR_3;
        VAR_4.cbDataSize = FUNC_5(VAR_3);

        VAR_5 = FUNC_4( &VAR_4, VAR_2, 0, VAR_0 );
        FUNC_1( VAR_5 != ((void*)0), "OpenColorProfileA() failed (%d)\n", FUNC_0() );



        VAR_6 = FUNC_3( ((void*)0), VAR_7, &VAR_8 );
        FUNC_1( !VAR_6, "GetColorProfileElementTag() succeeded (%d)\n", FUNC_0() );

        VAR_6 = FUNC_3( VAR_5, 0, &VAR_8 );
        FUNC_1( !VAR_6, "GetColorProfileElementTag() succeeded (%d)\n", FUNC_0() );

        VAR_6 = FUNC_3( VAR_5, VAR_7, ((void*)0) );
        FUNC_1( !VAR_6, "GetColorProfileElementTag() succeeded (%d)\n", FUNC_0() );

        VAR_6 = FUNC_3( VAR_5, 18, ((void*)0) );
        FUNC_1( !VAR_6, "GetColorProfileElementTag() succeeded (%d)\n", FUNC_0() );



        VAR_6 = FUNC_3( VAR_5, VAR_7, &VAR_8 );
        FUNC_1( VAR_6 && VAR_8 == VAR_9, "GetColorProfileElementTag() failed (%d)\n",
            FUNC_0() );

        FUNC_2( VAR_5 );
    }
}
