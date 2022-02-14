
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int WCHAR ;
typedef int UINT ;
struct TYPE_5__ {int hdr; } ;
typedef TYPE_1__ MSIDATABASE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int const*) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int const*,int ,TYPE_1__**) ;
 int * FUNC_2 (TYPE_1__*) ;
 int * FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int *,int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static UINT FUNC_7( const WCHAR *VAR_5, WCHAR *VAR_6 )
{
    WCHAR *VAR_7, *VAR_8;
    MSIDATABASE *VAR_9;
    UINT VAR_10;

    if ((VAR_10 = FUNC_1( VAR_5, VAR_4, &VAR_9 )) != VAR_2)
    {
        if (FUNC_0( VAR_5 ) == VAR_3)
            return VAR_0;
        return VAR_10;
    }
    if (!(VAR_7 = FUNC_3( VAR_9 )))
    {
        FUNC_6( &VAR_9->hdr );
        return VAR_1;
    }
    if (!(VAR_8 = FUNC_2( VAR_9 )))
    {
        FUNC_5( VAR_7 );
        FUNC_6( &VAR_9->hdr );
        return VAR_1;
    }
    VAR_10 = FUNC_4( VAR_7, VAR_8, VAR_6 );
    FUNC_5( VAR_8 );
    FUNC_5( VAR_7 );
    FUNC_6( &VAR_9->hdr );
    return VAR_10;
}
