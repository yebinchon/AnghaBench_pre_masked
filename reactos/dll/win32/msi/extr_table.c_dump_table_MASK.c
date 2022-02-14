
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int string_table ;
typedef int WCHAR ;
typedef int USHORT ;
typedef int UINT ;


 int FUNC_0 (char*,int const,int ) ;
 int FUNC_1 (int const*,int) ;
 int * FUNC_2 (int const*,int const,int*) ;

__attribute__((used)) static void FUNC_3( const string_table *VAR_0, const USHORT *VAR_1, UINT VAR_2 )
{
    UINT VAR_3;
    for (VAR_3 = 0; VAR_3 < VAR_2 / 2; VAR_3++)
    {
        int VAR_4;
        const WCHAR *VAR_5 = FUNC_2( VAR_0, VAR_1[VAR_3], &VAR_4 );
        FUNC_0(" %04x %s\n", VAR_1[VAR_3], FUNC_1(VAR_5, VAR_4) );
    }
}
