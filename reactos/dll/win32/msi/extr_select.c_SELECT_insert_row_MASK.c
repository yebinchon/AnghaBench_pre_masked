
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct tagMSIVIEW {int dummy; } ;
typedef scalar_t__ UINT ;
struct TYPE_16__ {TYPE_1__* ops; } ;
struct TYPE_15__ {int hdr; } ;
struct TYPE_14__ {scalar_t__ num_cols; TYPE_4__* table; int * cols; } ;
struct TYPE_13__ {scalar_t__ (* get_dimensions ) (TYPE_4__*,int *,scalar_t__*) ;scalar_t__ (* insert_row ) (TYPE_4__*,TYPE_3__*,scalar_t__,int ) ;} ;
typedef TYPE_2__ MSISELECTVIEW ;
typedef TYPE_3__ MSIRECORD ;
typedef int BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_3__* FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (TYPE_3__*,scalar_t__,TYPE_3__*,int ) ;
 int FUNC_2 (char*,TYPE_2__*,TYPE_3__*) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (TYPE_4__*,int *,scalar_t__*) ;
 scalar_t__ FUNC_5 (TYPE_4__*,TYPE_3__*,scalar_t__,int ) ;

__attribute__((used)) static UINT FUNC_6( struct tagMSIVIEW *VAR_2, MSIRECORD *VAR_3, UINT VAR_4, BOOL VAR_5 )
{
    MSISELECTVIEW *VAR_6 = (MSISELECTVIEW*)VAR_2;
    UINT VAR_7, VAR_8, VAR_9;
    MSIRECORD *VAR_10;

    FUNC_2("%p %p\n", VAR_6, VAR_3 );

    if ( !VAR_6->table )
        return VAR_0;


    VAR_9 = VAR_6->table->ops->get_dimensions( VAR_6->table, ((void*)0), &VAR_8 );
    if (VAR_9 != VAR_1)
        return VAR_9;

    VAR_10 = FUNC_0( VAR_8 + 1 );

    for (VAR_7=0; VAR_7<VAR_6->num_cols; VAR_7++)
    {
        VAR_9 = FUNC_1( VAR_3, VAR_7+1, VAR_10, VAR_6->cols[VAR_7] );
        if (VAR_9 != VAR_1)
            goto fail;
    }

    VAR_9 = VAR_6->table->ops->insert_row( VAR_6->table, VAR_10, VAR_4, VAR_5 );

fail:
    FUNC_3( &VAR_10->hdr );

    return VAR_9;
}
