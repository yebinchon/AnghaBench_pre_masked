
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef int MSIRECORD ;
typedef int DWORD ;


 int FUNC_0 (int const*) ;
 char* FUNC_1 (int) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (char*,int) ;
 scalar_t__ FUNC_4 (char*,char const*,int,int) ;
 int FUNC_5 (char*,char*) ;

__attribute__((used)) static WCHAR *FUNC_6( const MSIRECORD *VAR_0 )
{
    static const WCHAR VAR_1[] = {'%','i',':',' ','[','%','i',']',' ',0};
    int VAR_2, VAR_3 = FUNC_0( VAR_0 );
    WCHAR *VAR_4, *VAR_5, VAR_6[26];
    DWORD VAR_7 = 1;

    if (!(VAR_4 = FUNC_1( sizeof(*VAR_4) ))) return ((void*)0);
    VAR_4[0] = 0;

    for (VAR_2 = 1; VAR_2 <= VAR_3; VAR_2++)
    {
        VAR_7 += FUNC_4( VAR_6, VAR_1, VAR_2, VAR_2 );
        if (!(VAR_5 = FUNC_3( VAR_4, VAR_7 * sizeof(*VAR_4) )))
        {
            FUNC_2( VAR_4 );
            return ((void*)0);
        }
        VAR_4 = VAR_5;
        FUNC_5( VAR_4, VAR_6 );
    }
    return VAR_4;
}
