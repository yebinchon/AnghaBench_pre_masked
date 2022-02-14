
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buffer ;
typedef int WCHAR ;
typedef int DWORD ;
typedef scalar_t__ BOOL ;


 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (int,char*,int ) ;
 scalar_t__ FUNC_2 (int *,int *,int*) ;

__attribute__((used)) static void FUNC_3(void)
{
    BOOL VAR_1;
    DWORD VAR_2;
    WCHAR VAR_3[VAR_0];
    VAR_2 = 0;

    VAR_1 = FUNC_2( ((void*)0), ((void*)0), &VAR_2 );
    FUNC_1( !VAR_1 && VAR_2 > 0, "GetColorDirectoryW() succeeded (%d)\n", FUNC_0() );

    VAR_2 = 0;

    VAR_1 = FUNC_2( ((void*)0), VAR_3, &VAR_2 );
    FUNC_1( !VAR_1 && VAR_2 > 0, "GetColorDirectoryW() succeeded (%d)\n", FUNC_0() );

    VAR_2 = 1;

    VAR_1 = FUNC_2( ((void*)0), VAR_3, &VAR_2 );
    FUNC_1( !VAR_1 && VAR_2 > 0, "GetColorDirectoryW() succeeded (%d)\n", FUNC_0() );



    VAR_2 = sizeof(VAR_3);

    VAR_1 = FUNC_2( ((void*)0), VAR_3, &VAR_2 );
    FUNC_1( VAR_1 && VAR_2 > 0, "GetColorDirectoryW() failed (%d)\n", FUNC_0() );
}
