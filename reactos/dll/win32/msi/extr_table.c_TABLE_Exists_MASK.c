
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_7__ {int strings; } ;
struct TYPE_6__ {scalar_t__ row_count; int data; } ;
typedef TYPE_1__ MSITABLE ;
typedef TYPE_2__ MSIDATABASE ;
typedef int LPCWSTR ;
typedef int BOOL ;


 int FUNC_0 (char*,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*,int ) ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (TYPE_2__*,int ,TYPE_1__**) ;
 scalar_t__ FUNC_4 (int ,int ,int,scalar_t__*) ;
 scalar_t__ FUNC_5 (int ,scalar_t__,int ,int ) ;
 int FUNC_6 (int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

BOOL FUNC_7( MSIDATABASE *VAR_8, LPCWSTR VAR_9 )
{
    UINT VAR_10, VAR_11, VAR_12;
    MSITABLE *VAR_13;

    if( !FUNC_6( VAR_9, VAR_7 ) || !FUNC_6( VAR_9, VAR_4 ) ||
        !FUNC_6( VAR_9, VAR_6 ) || !FUNC_6( VAR_9, VAR_5 ) )
        return VAR_3;

    VAR_10 = FUNC_4( VAR_8->strings, VAR_9, -1, &VAR_11 );
    if( VAR_10 != VAR_0 )
    {
        FUNC_1("Couldn't find id for %s\n", FUNC_2(VAR_9));
        return VAR_1;
    }

    VAR_10 = FUNC_3( VAR_8, VAR_7, &VAR_13 );
    if( VAR_10 != VAR_0 )
    {
        FUNC_0("table %s not available\n", FUNC_2(VAR_7));
        return VAR_1;
    }

    for( VAR_12 = 0; VAR_12 < VAR_13->row_count; VAR_12++ )
    {
        if( FUNC_5( VAR_13->data, VAR_12, 0, VAR_2 ) == VAR_11 )
            return VAR_3;
    }

    return VAR_1;
}
