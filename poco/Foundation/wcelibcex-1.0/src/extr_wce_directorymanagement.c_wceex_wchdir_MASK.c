
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ wchar_t ;
typedef int fi ;
struct TYPE_3__ {int dwAttributes; } ;
typedef TYPE_1__ SHFILEINFO ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__ const*,int ,TYPE_1__*,int,int ) ;
 int VAR_4 ;
 int FUNC_1 (int ,scalar_t__ const*) ;

int FUNC_2( const wchar_t *VAR_5 )
{
    if( !VAR_5 || *VAR_5 == 0 )
    {
        VAR_4 = VAR_1;
        return -1;
    }
    else
    {
        SHFILEINFO VAR_6;
        if( !FUNC_0( VAR_5, 0, &VAR_6, sizeof(VAR_6), VAR_3 ) )
        {
            VAR_4 = VAR_1;
            return -1;
        }
        if( !(VAR_6.dwAttributes & VAR_2) )
        {
            VAR_4 = VAR_1;
            return -1;
        }
        FUNC_1( VAR_0, VAR_5 );
        return 0;
    }
}
