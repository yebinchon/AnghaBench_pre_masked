
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct tagMSIVIEW {int dummy; } ;
typedef int UINT ;
struct TYPE_22__ {TYPE_2__* ops; } ;
struct TYPE_21__ {int bIsTemp; TYPE_6__* table; int vals; TYPE_3__* sv; } ;
struct TYPE_20__ {int hdr; } ;
struct TYPE_19__ {TYPE_1__* ops; } ;
struct TYPE_18__ {int (* insert_row ) (TYPE_6__*,TYPE_4__*,int,int ) ;} ;
struct TYPE_17__ {int (* execute ) (TYPE_3__*,int ) ;int (* get_dimensions ) (TYPE_3__*,int *,int*) ;} ;
typedef TYPE_3__ MSIVIEW ;
typedef TYPE_4__ MSIRECORD ;
typedef TYPE_5__ MSIINSERTVIEW ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (TYPE_5__*,TYPE_4__**) ;
 TYPE_4__* FUNC_2 (int,int ,TYPE_4__*) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (TYPE_5__*,TYPE_4__*) ;
 int FUNC_5 (TYPE_3__*,int ) ;
 int FUNC_6 (TYPE_3__*,int *,int*) ;
 int FUNC_7 (TYPE_6__*,TYPE_4__*,int,int ) ;

__attribute__((used)) static UINT FUNC_8( struct tagMSIVIEW *VAR_2, MSIRECORD *VAR_3 )
{
    MSIINSERTVIEW *VAR_4 = (MSIINSERTVIEW*)VAR_2;
    UINT VAR_5, VAR_6 = -1, VAR_7 = 0;
    MSIVIEW *VAR_8;
    MSIRECORD *VAR_9 = ((void*)0);

    FUNC_0("%p %p\n", VAR_4, VAR_3 );

    VAR_8 = VAR_4->sv;
    if( !VAR_8 )
        return VAR_0;

    VAR_5 = VAR_8->ops->execute( VAR_8, 0 );
    FUNC_0("sv execute returned %x\n", VAR_5);
    if( VAR_5 )
        return VAR_5;

    VAR_5 = VAR_8->ops->get_dimensions( VAR_8, ((void*)0), &VAR_7 );
    if( VAR_5 )
        goto err;





    VAR_9 = FUNC_2( VAR_7, VAR_4->vals, VAR_3 );
    if( !VAR_9 )
        goto err;

    VAR_5 = FUNC_1( VAR_4, &VAR_9 );
    if( VAR_5 != VAR_1 )
        goto err;


    if( FUNC_4( VAR_4, VAR_9 ) )
        VAR_6 = 0;

    VAR_5 = VAR_4->table->ops->insert_row( VAR_4->table, VAR_9, VAR_6, VAR_4->bIsTemp );

err:
    if( VAR_9 )
        FUNC_3( &VAR_9->hdr );

    return VAR_5;
}
