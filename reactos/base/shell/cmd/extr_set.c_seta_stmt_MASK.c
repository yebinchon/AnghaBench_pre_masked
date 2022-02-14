
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__* LPCTSTR ;
typedef int INT ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char) ;
 int FUNC_1 (scalar_t__**,int *) ;
 scalar_t__* FUNC_2 (scalar_t__*) ;

__attribute__((used)) static BOOL
FUNC_3(LPCTSTR* VAR_2, INT* VAR_3)
{
    LPCTSTR VAR_4 = *VAR_2;
    INT VAR_5;

    if ( !FUNC_1 ( &VAR_4, &VAR_5 ) )
        return VAR_0;
    while ( *VAR_4 == FUNC_0(',') )
    {
        VAR_4 = FUNC_2 ( VAR_4+1 );

        if ( !FUNC_1 ( &VAR_4, &VAR_5 ) )
            return VAR_0;
    }

    *VAR_3 = VAR_5;
    *VAR_2 = VAR_4;
    return VAR_1;
}
