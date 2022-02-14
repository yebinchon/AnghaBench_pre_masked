
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ HANDLE ;
typedef scalar_t__ DWORD ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (char*,int,int ,int *,int ,int ,int ) ;
 int FUNC_2 (char*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 char* VAR_8 ;
 int FUNC_5 (int,char*,...) ;

__attribute__((used)) static void FUNC_6(void)
{
    DWORD VAR_9, VAR_10;
    HANDLE VAR_11 = FUNC_1( VAR_8, VAR_3|VAR_4, 0, ((void*)0), VAR_0, 0, 0 );
    FUNC_5( VAR_11 != VAR_5, "open %s failed\n", VAR_8 );
    VAR_9 = FUNC_3(VAR_11);
    FUNC_5( VAR_9 == VAR_2, "expected type disk got %d\n", VAR_9 );
    FUNC_0( VAR_11 );
    VAR_11 = FUNC_1( "nul", VAR_3|VAR_4, 0, ((void*)0), VAR_6, 0, 0 );
    FUNC_5( VAR_11 != VAR_5, "open nul failed\n" );
    VAR_9 = FUNC_3(VAR_11);
    FUNC_5( VAR_9 == VAR_1, "expected type char for nul got %d\n", VAR_9 );
    FUNC_0( VAR_11 );
    FUNC_2( VAR_8 );
    VAR_11 = FUNC_4( VAR_7 );
    FUNC_5( VAR_11 != VAR_5, "GetStdHandle failed\n" );
    VAR_9 = FUNC_3( (HANDLE)VAR_7 );
    VAR_10 = FUNC_3( VAR_11 );
    FUNC_5(VAR_9 == VAR_10, "expected type %d for STD_OUTPUT_HANDLE got %d\n", VAR_10, VAR_9);
}
