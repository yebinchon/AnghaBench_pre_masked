
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int TCHAR ;
typedef int* LPCTSTR ;
typedef int INT ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ,int) ;
 int FUNC_2 (int**,int*) ;
 int* FUNC_3 (int*) ;

__attribute__((used)) static BOOL
FUNC_4(LPCTSTR* VAR_2, INT* VAR_3)
{
    LPCTSTR VAR_4 = *VAR_2;
    TCHAR VAR_5 = 0;
    INT VAR_6;
    if ( FUNC_1(FUNC_0("!~-"),*VAR_4) )
    {
        VAR_5 = *VAR_4;
        VAR_4 = FUNC_3 ( VAR_4 + 1 );
    }
    if ( !FUNC_2 ( &VAR_4, &VAR_6 ) )
        return VAR_0;
    switch ( VAR_5 )
    {
    case '!':
        VAR_6 = !VAR_6;
        break;
    case '~':
        VAR_6 = ~VAR_6;
        break;
    case '-':
        VAR_6 = -VAR_6;
        break;
    }

    *VAR_3 = VAR_6;
    *VAR_2 = VAR_4;
    return VAR_1;
}
