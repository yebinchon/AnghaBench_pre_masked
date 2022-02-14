
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ UINT ;
typedef int MSIHANDLE ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int,char*) ;
 int FUNC_3 () ;
 int VAR_5 ;
 int FUNC_4 (int,char*,...) ;
 scalar_t__ FUNC_5 (int ,int*) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static void FUNC_7( void )
{
    MSIHANDLE VAR_6;
    UINT VAR_7;

    VAR_7 = FUNC_2( -1, ((void*)0) );
    FUNC_4( VAR_7 == VAR_3, "wrong return val\n");

    VAR_7 = FUNC_5(FUNC_3(), &VAR_6);
    if (VAR_7 == VAR_1)
    {
        FUNC_6("Not enough rights to perform tests\n");
        FUNC_0(VAR_5);
        return;
    }
    FUNC_4( VAR_7 == VAR_4, "failed to create package %u\n", VAR_7);

    VAR_7 = FUNC_2(VAR_6, ((void*)0));
    FUNC_4( VAR_7 == VAR_3, "wrong return val\n");

    VAR_7 = FUNC_2(0, "boo");
    FUNC_4( VAR_7 == VAR_2, "wrong return val\n");

    VAR_7 = FUNC_2(VAR_6, "boo");
    FUNC_4( VAR_7 == VAR_0, "wrong return val\n");

    FUNC_1( VAR_6 );
    FUNC_0(VAR_5);
}
