
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int string ;
typedef int expect ;
typedef float WCHAR ;
struct TYPE_3__ {int member_0; int member_1; int member_2; int member_3; int member_4; int member_5; int member_6; int member_7; } ;
typedef TYPE_1__ SYSTEMTIME ;
typedef scalar_t__ DWORD ;
typedef int BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 () ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int) ;
 int FUNC_2 (float*,float const*,int) ;
 int FUNC_3 (int,char*,...) ;
 int FUNC_4 (TYPE_1__ const*,scalar_t__,float*,int) ;

__attribute__((used)) static void FUNC_5(void)
{
    BOOL VAR_4;
    static const SYSTEMTIME VAR_5 = { 2005, 1, 5, 7, 12, 6, 35, 0 };
    WCHAR VAR_6[VAR_2 + 1];
    static const WCHAR VAR_7[] = { 'F','r','i',',',' ','0','7',' ','J','a','n',' ','2','0','0','5',' ',
                                    '1','2',':','0','6',':','3','5',' ','G','M','T',0 };
    DWORD VAR_8;

    VAR_4 = FUNC_4( &VAR_5, VAR_3, VAR_6, sizeof(VAR_6) );
    FUNC_3( VAR_4, "InternetTimeFromSystemTimeW failed (%u)\n", FUNC_0() );

    FUNC_3( !FUNC_2( VAR_6, VAR_7, sizeof(VAR_7) ),
        "InternetTimeFromSystemTimeW failed (%u)\n", FUNC_0() );


    FUNC_1(0xdeadbeef);
    VAR_4 = FUNC_4( ((void*)0), VAR_3, VAR_6, sizeof(VAR_6) );
    VAR_8 = FUNC_0();
    FUNC_3( !VAR_4, "InternetTimeFromSystemTimeW should have returned FALSE\n" );
    FUNC_3( VAR_8 == VAR_1,
        "InternetTimeFromSystemTimeW failed with ERROR_INVALID_PARAMETER instead of %u\n",
        VAR_8 );


    FUNC_1(0xdeadbeef);
    VAR_4 = FUNC_4( &VAR_5, VAR_3, ((void*)0), sizeof(VAR_6) );
    VAR_8 = FUNC_0();
    FUNC_3( !VAR_4, "InternetTimeFromSystemTimeW should have returned FALSE\n" );
    FUNC_3( VAR_8 == VAR_1,
        "InternetTimeFromSystemTimeW failed with ERROR_INVALID_PARAMETER instead of %u\n",
        VAR_8 );


    FUNC_1(0xdeadbeef);
    VAR_4 = FUNC_4( &VAR_5, VAR_3 + 1, VAR_6, sizeof(VAR_6) );
    VAR_8 = FUNC_0();
    FUNC_3( !VAR_4, "InternetTimeFromSystemTimeW should have returned FALSE\n" );
    FUNC_3( VAR_8 == VAR_1,
        "InternetTimeFromSystemTimeW failed with ERROR_INVALID_PARAMETER instead of %u\n",
        VAR_8 );


    FUNC_1(0xdeadbeef);
    VAR_4 = FUNC_4( &VAR_5, VAR_3, VAR_6, sizeof(VAR_6)/sizeof(VAR_6[0]) );
    VAR_8 = FUNC_0();
    FUNC_3( !VAR_4, "InternetTimeFromSystemTimeW should have returned FALSE\n" );
    FUNC_3( VAR_8 == VAR_0,
        "InternetTimeFromSystemTimeW failed with ERROR_INSUFFICIENT_BUFFER instead of %u\n",
        VAR_8 );
}
