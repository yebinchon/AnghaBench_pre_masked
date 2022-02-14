
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,char,int) ;
 int FUNC_5 (int,char*) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static void FUNC_6(void)
{
    char VAR_1[260];
    WCHAR VAR_2[260];
    int VAR_3;

    FUNC_4( VAR_1, 'a', 256 );
    VAR_1[256] = 0;
    FUNC_5( !FUNC_0(VAR_1), "add succeeded\n" );
    FUNC_5( !FUNC_2(VAR_1), "find succeeded\n" );

    if (VAR_0)
    {
        for (VAR_3 = 0; VAR_3 < 256; VAR_3++) VAR_2[VAR_3] = 'b';
        VAR_2[256] = 0;
        FUNC_5( !FUNC_1(VAR_2), "add succeeded\n" );
        FUNC_5( !FUNC_3(VAR_2), "find succeeded\n" );
    }
}
