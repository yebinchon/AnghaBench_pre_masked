
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LPCSTR ;
typedef scalar_t__ HRSRC ;
typedef scalar_t__ HANDLE ;
typedef scalar_t__ DWORD ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (char const*,int,int ,int *,int ,int ,int ) ;
 scalar_t__ FUNC_2 (int ,int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int *) ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (int ,scalar_t__) ;
 void* FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int) ;
 scalar_t__ FUNC_7 (int ,scalar_t__) ;
 int FUNC_8 (scalar_t__,void*,scalar_t__,scalar_t__*,int *) ;
 int FUNC_9 (int,char*) ;

__attribute__((used)) static void FUNC_10(int VAR_4, const char *VAR_5)
{
    DWORD VAR_6;
    HANDLE VAR_7;
    HRSRC VAR_8;
    void *VAR_9;

    VAR_7 = FUNC_1( VAR_5, VAR_1|VAR_2, 0, ((void*)0), VAR_0, 0, 0 );
    FUNC_9( VAR_7 != VAR_3, "file creation failed\n" );
    if (VAR_7 == VAR_3) return;
    VAR_8 = FUNC_2( FUNC_3(((void*)0)), (LPCSTR)FUNC_6(VAR_4), "TYPELIB" );
    FUNC_9( VAR_8 != 0, "couldn't find resource\n" );
    VAR_9 = FUNC_5( FUNC_4( FUNC_3(((void*)0)), VAR_8 ));
    FUNC_8( VAR_7, VAR_9, FUNC_7( FUNC_3(((void*)0)), VAR_8 ), &VAR_6, ((void*)0) );
    FUNC_9( VAR_6 == FUNC_7( FUNC_3(((void*)0)), VAR_8 ), "couldn't write resource\n" );
    FUNC_0( VAR_7 );
}
