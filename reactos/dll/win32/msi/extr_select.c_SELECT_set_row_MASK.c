
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct tagMSIVIEW {int dummy; } ;
typedef int UINT ;
struct TYPE_16__ {TYPE_1__* ops; } ;
struct TYPE_15__ {int hdr; } ;
struct TYPE_14__ {int num_cols; int* cols; TYPE_4__* table; } ;
struct TYPE_13__ {int (* get_dimensions ) (TYPE_4__*,int *,int*) ;int (* set_row ) (TYPE_4__*,int,TYPE_3__*,int) ;} ;
typedef TYPE_2__ MSISELECTVIEW ;
typedef TYPE_3__ MSIRECORD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_3__* FUNC_0 (int) ;
 int FUNC_1 (TYPE_3__*,int,TYPE_3__*,int) ;
 int FUNC_2 (char*,TYPE_2__*,int,TYPE_3__*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_4__*,int *,int*) ;
 int FUNC_5 (TYPE_4__*,int,TYPE_3__*,int) ;

__attribute__((used)) static UINT FUNC_6( struct tagMSIVIEW *VAR_3, UINT VAR_4, MSIRECORD *VAR_5, UINT VAR_6 )
{
    MSISELECTVIEW *VAR_7 = (MSISELECTVIEW*)VAR_3;
    UINT VAR_8, VAR_9 = 0, VAR_10 = VAR_2, VAR_11 = 0;
    MSIRECORD *VAR_12;

    FUNC_2("%p %d %p %08x\n", VAR_7, VAR_4, VAR_5, VAR_6 );

    if ( !VAR_7->table )
         return VAR_0;


    if ( VAR_6 >= (1<<VAR_7->num_cols) )
        return VAR_1;


    VAR_10 = VAR_7->table->ops->get_dimensions( VAR_7->table, ((void*)0), &VAR_11 );
    if( VAR_10 )
        return VAR_10;


    VAR_12 = FUNC_0( VAR_11 );
    if ( !VAR_12 )
        return VAR_0;


    for ( VAR_8=0; VAR_8<VAR_7->num_cols; VAR_8++ )
    {
        VAR_10 = FUNC_1( VAR_5, VAR_8+1, VAR_12, VAR_7->cols[ VAR_8 ] );
        if (VAR_10 != VAR_2)
            break;
        VAR_9 |= (1<<(VAR_7->cols[VAR_8]-1));
    }


    if (VAR_10 == VAR_2)
        VAR_10 = VAR_7->table->ops->set_row( VAR_7->table, VAR_4, VAR_12, VAR_9 );

    FUNC_3( &VAR_12->hdr );
    return VAR_10;
}
