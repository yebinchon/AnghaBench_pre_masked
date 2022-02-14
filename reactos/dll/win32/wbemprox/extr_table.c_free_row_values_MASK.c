
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct table {size_t num_cols; TYPE_1__* columns; } ;
typedef size_t UINT ;
struct TYPE_2__ {int type; } ;
typedef scalar_t__ LONGLONG ;
typedef scalar_t__ INT_PTR ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (void*,size_t) ;
 scalar_t__ FUNC_1 (struct table const*,size_t,size_t,scalar_t__*) ;
 int FUNC_2 (void*) ;

void FUNC_3( const struct table *VAR_7, UINT VAR_8 )
{
    UINT VAR_9, VAR_10;
    LONGLONG VAR_11;

    for (VAR_9 = 0; VAR_9 < VAR_7->num_cols; VAR_9++)
    {
        if (!(VAR_7->columns[VAR_9].type & VAR_4)) continue;

        VAR_10 = VAR_7->columns[VAR_9].type & VAR_5;
        if (VAR_10 == VAR_2 || VAR_10 == VAR_0)
        {
            if (FUNC_1( VAR_7, VAR_8, VAR_9, &VAR_11 ) == VAR_6) FUNC_2( (void *)(INT_PTR)VAR_11 );
        }
        else if (VAR_10 & VAR_1)
        {
            if (FUNC_1( VAR_7, VAR_8, VAR_9, &VAR_11 ) == VAR_6)
                FUNC_0( (void *)(INT_PTR)VAR_11, VAR_10 & VAR_3 );
        }
    }
}
