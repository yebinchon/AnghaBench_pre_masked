
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int DWORD ;
typedef char BYTE ;


 int FUNC_0 (char*,char const*,int) ;

__attribute__((used)) static void FUNC_1( BYTE *VAR_0, DWORD VAR_1 )
{
    static const BYTE VAR_2[] = {
        'P','A','D','D','I','N','G','X','X','P','A','D','D','I','N','G' };
    DWORD VAR_3;

    for ( VAR_3 = 0; VAR_3 < VAR_1 / sizeof VAR_2; VAR_3++ )
        FUNC_0( &VAR_0[VAR_3*sizeof VAR_2], VAR_2, sizeof VAR_2 );
    FUNC_0( &VAR_0[VAR_3*sizeof VAR_2], VAR_2, VAR_1%sizeof VAR_2 );
}
