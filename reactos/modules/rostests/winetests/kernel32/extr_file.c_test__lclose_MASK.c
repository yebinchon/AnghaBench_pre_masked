
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ HFILE ;
typedef scalar_t__ BOOL ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 () ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_2 (scalar_t__,int ,int ) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 int VAR_1 ;
 int FUNC_5 (int,char*,...) ;
 int VAR_2 ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7( void )
{
    HFILE VAR_3;
    BOOL VAR_4;

    VAR_3 = FUNC_4( VAR_1, 0 );
    if (VAR_3 == VAR_0)
    {
        FUNC_5(0,"couldn't create file \"%s\" (err=%d)\n",VAR_1,FUNC_1());
        return;
    }

    FUNC_5( VAR_0 != FUNC_2( VAR_3, VAR_2, FUNC_6( VAR_2 ) ), "_hwrite complains\n" );

    FUNC_5( VAR_0 != FUNC_3(VAR_3), "_lclose complains\n" );

    VAR_4 = FUNC_0( VAR_1 );
    FUNC_5( VAR_4 != 0, "DeleteFile failed (%d)\n", FUNC_1( ) );
}
