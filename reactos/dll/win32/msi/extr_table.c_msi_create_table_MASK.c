
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_32__ TYPE_8__ ;
typedef struct TYPE_31__ TYPE_6__ ;
typedef struct TYPE_30__ TYPE_5__ ;
typedef struct TYPE_29__ TYPE_4__ ;
typedef struct TYPE_28__ TYPE_3__ ;
typedef struct TYPE_27__ TYPE_2__ ;
typedef struct TYPE_26__ TYPE_1__ ;


typedef enum StringPersistence { ____Placeholder_StringPersistence } StringPersistence ;
struct TYPE_27__ {size_t type; int column; struct TYPE_27__* next; int temporary; int table; } ;
typedef TYPE_2__ column_info ;
typedef int WCHAR ;
typedef size_t UINT ;
struct TYPE_32__ {size_t number; size_t type; int temporary; int * hash_table; scalar_t__ ref_count; scalar_t__ offset; void* colname; void* tablename; } ;
struct TYPE_31__ {int tables; int strings; } ;
struct TYPE_30__ {int hdr; } ;
struct TYPE_29__ {int ref_count; int col_count; int entry; TYPE_8__* colinfo; int name; scalar_t__ persistent; int * data_persistent; int * data; scalar_t__ row_count; } ;
struct TYPE_28__ {TYPE_1__* ops; } ;
struct TYPE_26__ {size_t (* execute ) (TYPE_3__*,int ) ;size_t (* insert_row ) (TYPE_3__*,TYPE_5__*,int,int) ;int (* delete ) (TYPE_3__*) ;} ;
typedef TYPE_3__ MSIVIEW ;
typedef TYPE_4__ MSITABLE ;
typedef TYPE_5__ MSIRECORD ;
typedef TYPE_6__ MSIDATABASE ;
typedef scalar_t__ MSICONDITION ;
typedef int MSICOLUMNINFO ;
typedef int LPCWSTR ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_5__* FUNC_0 (int) ;
 size_t FUNC_1 (TYPE_5__*,int,size_t) ;
 size_t FUNC_2 (TYPE_5__*,int,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 size_t FUNC_3 (TYPE_6__*,int ,TYPE_3__**) ;
 scalar_t__ FUNC_4 (TYPE_6__*,int ) ;
 int FUNC_5 (char*,size_t) ;
 int FUNC_6 (char*,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (TYPE_4__*) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int ) ;
 size_t FUNC_12 (int ,int ,int,int) ;
 void* FUNC_13 (int) ;
 void* FUNC_14 (int ,size_t,int *) ;
 int FUNC_15 (int *) ;
 size_t FUNC_16 (TYPE_3__*,int ) ;
 size_t FUNC_17 (TYPE_3__*,TYPE_5__*,int,int) ;
 int FUNC_18 (TYPE_3__*) ;
 size_t FUNC_19 (TYPE_3__*,int ) ;
 size_t FUNC_20 (TYPE_3__*,TYPE_5__*,int,int) ;
 int FUNC_21 (TYPE_3__*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_22 (TYPE_6__*,TYPE_8__*,int) ;

UINT FUNC_23( MSIDATABASE *VAR_9, LPCWSTR VAR_10, column_info *VAR_11,
                       MSICONDITION VAR_12 )
{
    enum StringPersistence VAR_13 = (VAR_12) ? VAR_6 : VAR_5;
    UINT VAR_14, VAR_15;
    MSIVIEW *VAR_16 = ((void*)0);
    MSIRECORD *VAR_17 = ((void*)0);
    column_info *VAR_18;
    MSITABLE *VAR_19;
    UINT VAR_20;


    if( FUNC_4(VAR_9, VAR_10 ) )
    {
        FUNC_6("table %s exists\n", FUNC_7(VAR_10));
        return VAR_0;
    }

    VAR_19 = FUNC_13( sizeof (MSITABLE) + FUNC_11(VAR_10)*sizeof (WCHAR) );
    if( !VAR_19 )
        return VAR_1;

    VAR_19->ref_count = 1;
    VAR_19->row_count = 0;
    VAR_19->data = ((void*)0);
    VAR_19->data_persistent = ((void*)0);
    VAR_19->colinfo = ((void*)0);
    VAR_19->col_count = 0;
    VAR_19->persistent = VAR_12;
    FUNC_10( VAR_19->name, VAR_10 );

    for( VAR_18 = VAR_11; VAR_18; VAR_18 = VAR_18->next )
        VAR_19->col_count++;

    VAR_19->colinfo = FUNC_13( VAR_19->col_count * sizeof(MSICOLUMNINFO) );
    if (!VAR_19->colinfo)
    {
        FUNC_8( VAR_19 );
        return VAR_1;
    }

    for( VAR_20 = 0, VAR_18 = VAR_11; VAR_18; VAR_20++, VAR_18 = VAR_18->next )
    {
        UINT VAR_21 = FUNC_12( VAR_9->strings, VAR_18->table, -1, VAR_13 );
        UINT VAR_22 = FUNC_12( VAR_9->strings, VAR_18->column, -1, VAR_13 );

        VAR_19->colinfo[ VAR_20 ].tablename = FUNC_14( VAR_9->strings, VAR_21, ((void*)0) );
        VAR_19->colinfo[ VAR_20 ].number = VAR_20 + 1;
        VAR_19->colinfo[ VAR_20 ].colname = FUNC_14( VAR_9->strings, VAR_22, ((void*)0) );
        VAR_19->colinfo[ VAR_20 ].type = VAR_18->type;
        VAR_19->colinfo[ VAR_20 ].offset = 0;
        VAR_19->colinfo[ VAR_20 ].ref_count = 0;
        VAR_19->colinfo[ VAR_20 ].hash_table = ((void*)0);
        VAR_19->colinfo[ VAR_20 ].temporary = VAR_18->temporary;
    }
    FUNC_22( VAR_9, VAR_19->colinfo, VAR_19->col_count);

    VAR_14 = FUNC_3( VAR_9, VAR_8, &VAR_16 );
    FUNC_5("CreateView returned %x\n", VAR_14);
    if( VAR_14 )
    {
        FUNC_8( VAR_19 );
        return VAR_14;
    }

    VAR_14 = VAR_16->ops->execute( VAR_16, 0 );
    FUNC_5("tv execute returned %x\n", VAR_14);
    if( VAR_14 )
        goto err;

    VAR_17 = FUNC_0( 1 );
    if( !VAR_17 )
        goto err;

    VAR_14 = FUNC_2( VAR_17, 1, VAR_10 );
    if( VAR_14 )
        goto err;

    VAR_14 = VAR_16->ops->insert_row( VAR_16, VAR_17, -1, VAR_12 == VAR_4 );
    FUNC_5("insert_row returned %x\n", VAR_14);
    if( VAR_14 )
        goto err;

    VAR_16->ops->delete( VAR_16 );
    VAR_16 = ((void*)0);

    FUNC_15( &VAR_17->hdr );
    VAR_17 = ((void*)0);

    if( VAR_12 != VAR_4 )
    {

        VAR_14 = FUNC_3( VAR_9, VAR_7, &VAR_16 );
        if( VAR_14 )
            goto err;

        VAR_14 = VAR_16->ops->execute( VAR_16, 0 );
        FUNC_5("tv execute returned %x\n", VAR_14);
        if( VAR_14 )
            goto err;

        VAR_17 = FUNC_0( 4 );
        if( !VAR_17 )
            goto err;

        VAR_14 = FUNC_2( VAR_17, 1, VAR_10 );
        if( VAR_14 )
            goto err;





        VAR_15 = 1;
        for( VAR_18 = VAR_11; VAR_18; VAR_18 = VAR_18->next )
        {
            VAR_14 = FUNC_1( VAR_17, 2, VAR_15 );
            if( VAR_14 )
                goto err;

            VAR_14 = FUNC_2( VAR_17, 3, VAR_18->column );
            if( VAR_14 )
                goto err;

            VAR_14 = FUNC_1( VAR_17, 4, VAR_18->type );
            if( VAR_14 )
                goto err;

            VAR_14 = VAR_16->ops->insert_row( VAR_16, VAR_17, -1, VAR_3 );
            if( VAR_14 )
                goto err;

            VAR_15++;
        }
        if( !VAR_18 )
            VAR_14 = VAR_2;
    }

err:
    if (VAR_17)
        FUNC_15( &VAR_17->hdr );

    if( VAR_16 )
        VAR_16->ops->delete( VAR_16 );

    if (VAR_14 == VAR_2)
        FUNC_9( &VAR_9->tables, &VAR_19->entry );
    else
        FUNC_8( VAR_19 );

    return VAR_14;
}
