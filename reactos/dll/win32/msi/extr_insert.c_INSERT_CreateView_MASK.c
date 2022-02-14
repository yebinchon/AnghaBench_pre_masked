
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int column_info ;
typedef scalar_t__ UINT ;
struct TYPE_20__ {int hdr; } ;
struct TYPE_17__ {int * ops; } ;
struct TYPE_19__ {TYPE_3__* sv; int bIsTemp; int * vals; TYPE_5__* db; TYPE_3__* table; TYPE_2__ view; } ;
struct TYPE_18__ {TYPE_1__* ops; } ;
struct TYPE_16__ {int (* delete ) (TYPE_3__*) ;} ;
typedef TYPE_3__ MSIVIEW ;
typedef TYPE_4__ MSIINSERTVIEW ;
typedef TYPE_5__ MSIDATABASE ;
typedef int LPCWSTR ;
typedef int BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_5__*,TYPE_3__**,TYPE_3__*,int *) ;
 scalar_t__ FUNC_1 (TYPE_5__*,int ,TYPE_3__**) ;
 int FUNC_2 (char*,TYPE_4__*) ;
 scalar_t__ FUNC_3 (int *) ;
 int VAR_3 ;
 TYPE_4__* FUNC_4 (int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_3__*) ;

UINT FUNC_7( MSIDATABASE *VAR_4, MSIVIEW **VAR_5, LPCWSTR VAR_6,
                        column_info *VAR_7, column_info *VAR_8, BOOL VAR_9 )
{
    MSIINSERTVIEW *VAR_10 = ((void*)0);
    UINT VAR_11;
    MSIVIEW *VAR_12 = ((void*)0), *VAR_13 = ((void*)0);

    FUNC_2("%p\n", VAR_10 );


    if ( FUNC_3( VAR_7 ) != FUNC_3(VAR_8) )
        return VAR_0;

    VAR_11 = FUNC_1( VAR_4, VAR_6, &VAR_12 );
    if( VAR_11 != VAR_2 )
        return VAR_11;

    VAR_11 = FUNC_0( VAR_4, &VAR_13, VAR_12, VAR_7 );
    if( VAR_11 != VAR_2 )
    {
        if( VAR_12 )
            VAR_12->ops->delete( VAR_12 );
        return VAR_11;
    }

    VAR_10 = FUNC_4( sizeof *VAR_10 );
    if( !VAR_10 )
        return VAR_1;


    VAR_10->view.ops = &VAR_3;
    FUNC_5( &VAR_4->hdr );
    VAR_10->table = VAR_12;
    VAR_10->db = VAR_4;
    VAR_10->vals = VAR_8;
    VAR_10->bIsTemp = VAR_9;
    VAR_10->sv = VAR_13;
    *VAR_5 = (MSIVIEW*) VAR_10;

    return VAR_2;
}
