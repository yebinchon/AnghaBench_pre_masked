
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lval ;
typedef int TCHAR ;
typedef scalar_t__* LPCTSTR ;
typedef int INT ;
typedef int BOOL ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (scalar_t__**,int*) ;
 scalar_t__* FUNC_4 (scalar_t__*) ;

__attribute__((used)) static BOOL
FUNC_5(LPCTSTR* VAR_3, INT* VAR_4)
{
    LPCTSTR VAR_5 = *VAR_3;
    INT VAR_6;
    if ( !FUNC_3 ( &VAR_5, &VAR_6 ) )
        return VAR_0;
    while ( *VAR_5 && FUNC_2(FUNC_1("<>"),*VAR_5) && VAR_5[0] == VAR_5[1] )
    {
        INT VAR_7;
        TCHAR VAR_8 = *VAR_5;

        VAR_5 = FUNC_4 ( VAR_5+2 );

        if ( !FUNC_3 ( &VAR_5, &VAR_7 ) )
            return VAR_0;

        switch ( VAR_8 )
        {
        case '<':
        {


            if (VAR_7 < 0 || VAR_7 >= (8 * sizeof(VAR_6)))
                VAR_6 = 0;
            else
                VAR_6 <<= VAR_7;
            break;
        }
        case '>':
            VAR_6 >>= VAR_7;
            break;
        default:
            FUNC_0 ( VAR_1 );
            return VAR_0;
        }
    }

    *VAR_4 = VAR_6;
    *VAR_3 = VAR_5;
    return VAR_2;
}
