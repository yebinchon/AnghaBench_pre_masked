
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {int type; int temporary; void* table; struct TYPE_12__* next; } ;
typedef TYPE_2__ column_info ;
typedef scalar_t__ UINT ;
struct TYPE_11__ {int * ops; } ;
struct TYPE_14__ {void* hold; void* bIsTemp; TYPE_2__* col_info; void* name; TYPE_3__* db; TYPE_1__ view; } ;
struct TYPE_13__ {int hdr; } ;
typedef int MSIVIEW ;
typedef TYPE_3__ MSIDATABASE ;
typedef TYPE_4__ MSICREATEVIEW ;
typedef void* LPCWSTR ;
typedef void* BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,TYPE_4__*) ;
 void* VAR_4 ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 int VAR_5 ;
 TYPE_4__* FUNC_2 (int) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (int *) ;

UINT FUNC_5( MSIDATABASE *VAR_6, MSIVIEW **VAR_7, LPCWSTR VAR_8,
                        column_info *VAR_9, BOOL VAR_10 )
{
    MSICREATEVIEW *VAR_11 = ((void*)0);
    UINT VAR_12;
    column_info *VAR_13;
    BOOL VAR_14 = VAR_4;
    BOOL VAR_15 = VAR_2;

    FUNC_0("%p\n", VAR_11 );

    VAR_12 = FUNC_1( VAR_9 );
    if( VAR_12 != VAR_1 )
        return VAR_12;

    VAR_11 = FUNC_2( sizeof *VAR_11 );
    if( !VAR_11 )
        return VAR_0;

    for( VAR_13 = VAR_9; VAR_13; VAR_13 = VAR_13->next )
    {
        if (!VAR_13->table)
            VAR_13->table = VAR_8;

        if( !VAR_13->temporary )
            VAR_14 = VAR_2;
        else if ( VAR_13->type & VAR_3 )
            VAR_15 = VAR_4;
    }

    if ( !VAR_14 && VAR_15 )
    {
        FUNC_3( VAR_11 );
        return VAR_0;
    }


    VAR_11->view.ops = &VAR_5;
    FUNC_4( &VAR_6->hdr );
    VAR_11->db = VAR_6;
    VAR_11->name = VAR_8;
    VAR_11->col_info = VAR_9;
    VAR_11->bIsTemp = VAR_14;
    VAR_11->hold = VAR_10;
    *VAR_7 = (MSIVIEW*) VAR_11;

    return VAR_1;
}
