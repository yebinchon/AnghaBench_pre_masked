
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (char const*,int ) ;
 char* FUNC_2 (int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,char const*) ;
 int FUNC_5 (char*,char*) ;
 int FUNC_6 (char const*) ;

__attribute__((used)) static WCHAR *FUNC_7( const WCHAR *VAR_1 )
{
    static const WCHAR VAR_2[] = {' ','(','T','r','u','e','T','y','p','e',')',0};
    WCHAR *VAR_3, *VAR_4 = ((void*)0);

    if ((VAR_3 = FUNC_1( VAR_1, VAR_0 )))
    {
        if (!VAR_3[0])
        {
            FUNC_0("empty font name\n");
            FUNC_3( VAR_3 );
            return ((void*)0);
        }
        VAR_4 = FUNC_2( (FUNC_6( VAR_3 ) + FUNC_6( VAR_2 ) + 1 ) * sizeof(WCHAR) );
        FUNC_5( VAR_4, VAR_3 );
        FUNC_4( VAR_4, VAR_2 );
        FUNC_3( VAR_3 );
    }
    return VAR_4;
}
