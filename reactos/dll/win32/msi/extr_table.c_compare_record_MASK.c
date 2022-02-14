
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t UINT ;
struct TYPE_6__ {size_t num_cols; int view; TYPE_1__* columns; } ;
struct TYPE_5__ {int type; } ;
typedef TYPE_2__ MSITABLEVIEW ;
typedef int MSIRECORD ;


 size_t VAR_0 ;
 int VAR_1 ;
 size_t FUNC_0 (int *,size_t,size_t,size_t*) ;
 int FUNC_1 (char*,size_t) ;
 size_t FUNC_2 (TYPE_2__*,int *,size_t,size_t*) ;

__attribute__((used)) static int FUNC_3( MSITABLEVIEW *VAR_2, UINT VAR_3, MSIRECORD *VAR_4 )
{
    UINT VAR_5, VAR_6, VAR_7, VAR_8;

    for (VAR_6 = 0; VAR_6 < VAR_2->num_cols; VAR_6++ )
    {
        if (!(VAR_2->columns[VAR_6].type & VAR_1)) continue;

        VAR_5 = FUNC_2( VAR_2, VAR_4, VAR_6 + 1, &VAR_7 );
        if (VAR_5 != VAR_0)
            return 1;

        VAR_5 = FUNC_0( &VAR_2->view, VAR_3, VAR_6 + 1, &VAR_8 );
        if (VAR_5 != VAR_0)
        {
            FUNC_1("TABLE_fetch_int should not fail here %u\n", VAR_5);
            return -1;
        }
        if (VAR_7 > VAR_8)
        {
            return 1;
        }
        else if (VAR_7 == VAR_8)
        {
            if (VAR_6 < VAR_2->num_cols - 1) continue;
            return 0;
        }
        else
            return -1;
    }
    return 1;
}
