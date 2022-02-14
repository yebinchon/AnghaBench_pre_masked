
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int expect ;
typedef float WCHAR ;
struct TYPE_5__ {int member_0; int member_1; int member_2; int member_3; int member_4; int member_5; int member_6; int member_7; } ;
typedef TYPE_1__ SYSTEMTIME ;
typedef int BOOL ;


 int FUNC_0 () ;
 int FUNC_1 (TYPE_1__*,TYPE_1__ const*,int) ;
 int FUNC_2 (int,char*,int ) ;
 int FUNC_3 (float const*,TYPE_1__*,int ) ;

__attribute__((used)) static void FUNC_4(void)
{
    BOOL VAR_0;
    SYSTEMTIME VAR_1;
    static const SYSTEMTIME VAR_2 = { 2005, 1, 5, 7, 12, 6, 35, 0 };
    static const WCHAR VAR_3[] = { 'F','r','i',',',' ','0','7',' ','J','a','n',' ','2','0','0','5',' ',
                                    '1','2',':','0','6',':','3','5',' ','G','M','T',0 };
    static const WCHAR VAR_4[] = { ' ','f','r','i',' ','7',' ','j','a','n',' ','2','0','0','5',' ',
                                     '1','2',' ','0','6',' ','3','5',0 };
    static const WCHAR VAR_5[] = { 'F','r',0 };

    VAR_0 = FUNC_3( ((void*)0), ((void*)0), 0 );
    FUNC_2( !VAR_0, "InternetTimeToSystemTimeW succeeded (%u)\n", FUNC_0() );

    VAR_0 = FUNC_3( ((void*)0), &VAR_1, 0 );
    FUNC_2( !VAR_0, "InternetTimeToSystemTimeW succeeded (%u)\n", FUNC_0() );

    VAR_0 = FUNC_3( VAR_3, ((void*)0), 0 );
    FUNC_2( !VAR_0, "InternetTimeToSystemTimeW succeeded (%u)\n", FUNC_0() );

    VAR_0 = FUNC_3( VAR_3, &VAR_1, 0 );
    FUNC_2( VAR_0, "InternetTimeToSystemTimeW failed (%u)\n", FUNC_0() );

    VAR_0 = FUNC_3( VAR_3, &VAR_1, 0 );
    FUNC_2( VAR_0, "InternetTimeToSystemTimeW failed (%u)\n", FUNC_0() );
    FUNC_2( !FUNC_1( &VAR_1, &VAR_2, sizeof(VAR_2) ),
        "InternetTimeToSystemTimeW failed (%u)\n", FUNC_0() );

    VAR_0 = FUNC_3( VAR_4, &VAR_1, 0 );
    FUNC_2( VAR_0, "InternetTimeToSystemTimeW failed (%u)\n", FUNC_0() );
    FUNC_2( !FUNC_1( &VAR_1, &VAR_2, sizeof(VAR_2) ),
        "InternetTimeToSystemTimeW failed (%u)\n", FUNC_0() );

    VAR_0 = FUNC_3( VAR_5, &VAR_1, 0 );
    FUNC_2( VAR_0, "InternetTimeToSystemTimeW failed (%u)\n", FUNC_0() );
}
