
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ HANDLE ;


 char* VAR_0 ;
 char* VAR_1 ;
 char* VAR_2 ;
 char* FUNC_0 () ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (char*,char*,int) ;
 int FUNC_2 (int,char*,...) ;
 scalar_t__ FUNC_3 (char*,int) ;
 scalar_t__ FUNC_4 (scalar_t__,char*,int ) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*) ;

__attribute__((used)) static void FUNC_8(void)
{
    char VAR_5[51];
    HANDLE VAR_6;


    if (!&FUNC_3) {
        FUNC_7("FindFirstVolumeA not found\n");
        return;
    }

    VAR_6 = FUNC_3( VAR_5, 0 );
    FUNC_2( VAR_6 == VAR_3, "succeeded with short buffer\n" );
    FUNC_2( FUNC_0() == VAR_1 ||
        FUNC_0() == VAR_0,
        "wrong error %u\n", FUNC_0() );
    VAR_6 = FUNC_3( VAR_5, 49 );
    FUNC_2( VAR_6 == VAR_3, "succeeded with short buffer\n" );
    FUNC_2( FUNC_0() == VAR_0, "wrong error %u\n", FUNC_0() );
    VAR_6 = FUNC_3( VAR_5, 51 );
    FUNC_2( VAR_6 != VAR_3, "failed err %u\n", FUNC_0() );
    if (VAR_6 != VAR_3)
    {
        do
        {
            FUNC_2( FUNC_6(VAR_5) == 49, "bad volume name %s\n", VAR_5 );
            FUNC_2( !FUNC_1( VAR_5, "\\\\?\\Volume{", 11 ), "bad volume name %s\n", VAR_5 );
            FUNC_2( !FUNC_1( VAR_5 + 47, "}\\", 2 ), "bad volume name %s\n", VAR_5 );
        } while (FUNC_4( VAR_6, VAR_5, VAR_4 ));
        FUNC_2( FUNC_0() == VAR_2, "wrong error %u\n", FUNC_0() );
        FUNC_5( VAR_6 );
    }
}
