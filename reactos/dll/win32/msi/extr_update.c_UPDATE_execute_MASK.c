
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


struct tagMSIVIEW {int dummy; } ;
struct TYPE_20__ {struct TYPE_20__* next; } ;
typedef TYPE_2__ column_info ;
typedef int UINT ;
struct TYPE_23__ {int hdr; } ;
struct TYPE_22__ {TYPE_2__* vals; TYPE_3__* wv; } ;
struct TYPE_21__ {TYPE_1__* ops; } ;
struct TYPE_19__ {int (* execute ) (TYPE_3__*,TYPE_5__*) ;int (* get_dimensions ) (TYPE_3__*,int*,int*) ;int (* set_row ) (TYPE_3__*,int,TYPE_5__*,int) ;} ;
typedef TYPE_3__ MSIVIEW ;
typedef TYPE_4__ MSIUPDATEVIEW ;
typedef TYPE_5__ MSIRECORD ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_5__* FUNC_0 (int) ;
 int FUNC_1 (TYPE_5__*,int,TYPE_5__*,int) ;
 int FUNC_2 (TYPE_5__*) ;
 int FUNC_3 (char*,...) ;
 TYPE_5__* FUNC_4 (int,TYPE_2__*,TYPE_5__*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_3__*,TYPE_5__*) ;
 int FUNC_7 (TYPE_3__*,int*,int*) ;
 int FUNC_8 (TYPE_3__*,int,TYPE_5__*,int) ;

__attribute__((used)) static UINT FUNC_9( struct tagMSIVIEW *VAR_2, MSIRECORD *VAR_3 )
{
    MSIUPDATEVIEW *VAR_4 = (MSIUPDATEVIEW*)VAR_2;
    UINT VAR_5, VAR_6, VAR_7 = 0, VAR_8 = 0;
    MSIRECORD *VAR_9 = ((void*)0);
    MSIRECORD *VAR_10 = ((void*)0);
    MSIVIEW *VAR_11;
    UINT VAR_12, VAR_13;
    column_info *VAR_14 = VAR_4->vals;

    FUNC_3("%p %p\n", VAR_4, VAR_3 );


    if (VAR_3)
    {
        VAR_6 = FUNC_2(VAR_3);

        for (VAR_5 = 0; VAR_14; VAR_14 = VAR_14->next)
            VAR_5++;

        VAR_12 = VAR_5;
        VAR_13 = VAR_6 - VAR_5;

        if (VAR_13 > 0)
        {
            VAR_10 = FUNC_0(VAR_13);

            if (VAR_10)
                for (VAR_5 = 1; VAR_5 <= VAR_13; VAR_5++)
                    FUNC_1(VAR_3, VAR_12 + VAR_5, VAR_10, VAR_5);
        }
    }

    VAR_11 = VAR_4->wv;
    if( !VAR_11 )
    {
        VAR_6 = VAR_0;
        goto done;
    }

    VAR_6 = VAR_11->ops->execute( VAR_11, VAR_10 );
    FUNC_3("tv execute returned %x\n", VAR_6);
    if( VAR_6 )
        goto done;

    VAR_6 = VAR_11->ops->get_dimensions( VAR_11, &VAR_8, &VAR_7 );
    if( VAR_6 )
        goto done;

    VAR_9 = FUNC_4( VAR_7, VAR_4->vals, VAR_3 );
    if (!VAR_9)
    {
        VAR_6 = VAR_0;
        goto done;
    }

    for ( VAR_5=0; VAR_5<VAR_8; VAR_5++ )
    {
        VAR_6 = VAR_11->ops->set_row( VAR_11, VAR_5, VAR_9, (1 << VAR_7) - 1 );
        if (VAR_6 != VAR_1)
            break;
    }

done:
    if ( VAR_10 ) FUNC_5( &VAR_10->hdr );
    if ( VAR_9 ) FUNC_5( &VAR_9->hdr );

    return VAR_6;
}
