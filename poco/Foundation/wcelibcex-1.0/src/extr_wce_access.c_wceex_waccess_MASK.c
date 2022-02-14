
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int wchar_t ;
typedef int fi ;
struct TYPE_3__ {int dwAttributes; } ;
typedef TYPE_1__ SHFILEINFO ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int const*,int ,TYPE_1__*,int,int ) ;
 int VAR_4 ;

int FUNC_1( const wchar_t *VAR_5, int VAR_6 )
{
    SHFILEINFO VAR_7;
    if( !FUNC_0( VAR_5, 0, &VAR_7, sizeof(VAR_7), VAR_3 ) )
    {
        VAR_4 = VAR_1;
        return -1;
    }

    if( VAR_6 == 0 )
        return 0;

    if( VAR_6 & 2 )
    {
        if( VAR_7.dwAttributes & VAR_2 )
        {
            VAR_4 = VAR_0;
            return -1;
        }
    }
    return 0;
}
