
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int szFormat ;
typedef char WCHAR ;
typedef int LPWSTR ;
typedef char* LPCOLESTR ;
typedef int LONG ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char const*,char*) ;

__attribute__((used)) static BOOL FUNC_5( LPCOLESTR VAR_1 )
{
    static const WCHAR VAR_2[] = { ' ','-','w',' ','-','u',' ','"','%','s','"',0 };
    LONG VAR_3;
    LPWSTR VAR_4;
    BOOL VAR_5;

    VAR_3 = sizeof(VAR_2) + FUNC_2( VAR_1 ) * sizeof(WCHAR);
    VAR_4 = FUNC_0( VAR_3 );
    if( !VAR_4 )
        return VAR_0;

    FUNC_4( VAR_4, VAR_2, VAR_1 );
    VAR_5 = FUNC_3( VAR_4 );
    FUNC_1( VAR_4 );
    return VAR_5;
}
