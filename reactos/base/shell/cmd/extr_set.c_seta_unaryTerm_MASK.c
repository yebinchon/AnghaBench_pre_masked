
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LPTSTR ;
typedef scalar_t__* LPCTSTR ;
typedef int INT ;
typedef int BOOL ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,scalar_t__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (char) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__*,int *,int ) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (scalar_t__**,int *) ;
 scalar_t__* FUNC_8 (scalar_t__*) ;

__attribute__((used)) static BOOL
FUNC_9(LPCTSTR* VAR_4, INT* VAR_5)
{
    LPCTSTR VAR_6 = *VAR_4;
    if ( *VAR_6 == FUNC_2('(') )
    {
        INT VAR_7;
        VAR_6 = FUNC_8 ( VAR_6 + 1 );
        if ( !FUNC_7 ( &VAR_6, &VAR_7 ) )
            return VAR_0;
        if ( *VAR_6++ != FUNC_2(')') )
        {
            FUNC_0 ( VAR_1 );
            return VAR_0;
        }
        *VAR_5 = VAR_7;
    }
    else if ( FUNC_5(*VAR_6) )
    {
        *VAR_5 = FUNC_4 ( VAR_6, (LPTSTR *)&VAR_6, 0 );
    }
    else if ( FUNC_3(*VAR_6) )
    {
        LPTSTR VAR_8;
        INT VAR_9;
        FUNC_1(VAR_8,VAR_9,VAR_6);
        *VAR_5 = FUNC_6 ( VAR_8 );
    }
    else
    {
        FUNC_0 ( VAR_2 );
        return VAR_0;
    }
    *VAR_4 = FUNC_8 ( VAR_6 );
    return VAR_3;
}
