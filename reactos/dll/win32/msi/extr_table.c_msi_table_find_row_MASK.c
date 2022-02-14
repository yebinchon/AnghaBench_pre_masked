
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_7__ {TYPE_1__* table; } ;
struct TYPE_6__ {scalar_t__ row_count; } ;
typedef TYPE_2__ MSITABLEVIEW ;
typedef int MSIRECORD ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__*) ;
 scalar_t__* FUNC_1 (TYPE_2__*,int *) ;
 scalar_t__ FUNC_2 (TYPE_2__*,scalar_t__,scalar_t__*,scalar_t__*) ;

__attribute__((used)) static UINT FUNC_3( MSITABLEVIEW *VAR_2, MSIRECORD *VAR_3, UINT *VAR_4, UINT *VAR_5 )
{
    UINT VAR_6, VAR_7 = VAR_0, *VAR_8;

    VAR_8 = FUNC_1( VAR_2, VAR_3 );
    if( !VAR_8 )
        return VAR_7;
    for( VAR_6 = 0; VAR_6 < VAR_2->table->row_count; VAR_6++ )
    {
        VAR_7 = FUNC_2( VAR_2, VAR_6, VAR_8, VAR_5 );
        if( VAR_7 == VAR_1 )
        {
            *VAR_4 = VAR_6;
            break;
        }
    }
    FUNC_0( VAR_8 );
    return VAR_7;
}
