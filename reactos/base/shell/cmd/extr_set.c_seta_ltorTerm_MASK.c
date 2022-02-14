
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ TCHAR ;
typedef scalar_t__* LPCTSTR ;
typedef int INT ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__*,scalar_t__) ;
 int FUNC_1 (int *,scalar_t__,int ) ;
 scalar_t__* FUNC_2 (scalar_t__*) ;

__attribute__((used)) static BOOL
FUNC_3(LPCTSTR* VAR_2, INT* VAR_3, LPCTSTR VAR_4, BOOL (*VAR_5)(LPCTSTR*,INT*))
{
    LPCTSTR VAR_6 = *VAR_2;
    INT VAR_7;
    if ( !VAR_5 ( &VAR_6, &VAR_7 ) )
        return VAR_0;
    while ( *VAR_6 && FUNC_0(VAR_4,*VAR_6) )
    {
        INT VAR_8;
        TCHAR VAR_9 = *VAR_6;

        VAR_6 = FUNC_2 ( VAR_6+1 );

        if ( !VAR_5 ( &VAR_6, &VAR_8 ) )
            return VAR_0;

        if ( !FUNC_1 ( &VAR_7, VAR_9, VAR_8 ) )
            return VAR_0;
    }

    *VAR_3 = VAR_7;
    *VAR_2 = VAR_6;
    return VAR_1;
}
