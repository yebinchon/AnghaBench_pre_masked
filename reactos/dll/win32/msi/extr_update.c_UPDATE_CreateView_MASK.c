
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


struct expr {int dummy; } ;
typedef int column_info ;
typedef scalar_t__ UINT ;
struct TYPE_23__ {int hdr; } ;
struct TYPE_20__ {int * ops; } ;
struct TYPE_22__ {TYPE_3__* wv; int * vals; TYPE_5__* db; TYPE_2__ view; } ;
struct TYPE_21__ {TYPE_1__* ops; } ;
struct TYPE_19__ {int (* delete ) (TYPE_3__*) ;} ;
typedef TYPE_3__ MSIVIEW ;
typedef TYPE_4__ MSIUPDATEVIEW ;
typedef TYPE_5__ MSIDATABASE ;
typedef int LPWSTR ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_5__*,TYPE_3__**,TYPE_3__*,int *) ;
 scalar_t__ FUNC_1 (TYPE_5__*,int ,TYPE_3__**) ;
 int FUNC_2 (char*,TYPE_4__*) ;
 scalar_t__ FUNC_3 (TYPE_5__*,TYPE_3__**,int ,struct expr*) ;
 TYPE_4__* FUNC_4 (int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (TYPE_3__*) ;
 int VAR_2 ;

UINT FUNC_8( MSIDATABASE *VAR_3, MSIVIEW **VAR_4, LPWSTR VAR_5,
                        column_info *VAR_6, struct expr *VAR_7 )
{
    MSIUPDATEVIEW *VAR_8 = ((void*)0);
    UINT VAR_9;
    MSIVIEW *VAR_10 = ((void*)0), *VAR_11 = ((void*)0);

    FUNC_2("%p\n", VAR_8 );

    if (VAR_7)
        VAR_9 = FUNC_3( VAR_3, &VAR_11, VAR_5, VAR_7 );
    else
        VAR_9 = FUNC_1( VAR_3, VAR_5, &VAR_11 );

    if( VAR_9 != VAR_1 )
        return VAR_9;


    VAR_9 = FUNC_0( VAR_3, &VAR_10, VAR_11, VAR_6 );
    if( VAR_9 != VAR_1 )
    {
        VAR_11->ops->delete( VAR_11 );
        return VAR_9;
    }

    VAR_8 = FUNC_4( sizeof *VAR_8 );
    if( !VAR_8 )
    {
        VAR_11->ops->delete( VAR_11 );
        return VAR_0;
    }


    VAR_8->view.ops = &VAR_2;
    FUNC_5( &VAR_3->hdr );
    VAR_8->db = VAR_3;
    VAR_8->vals = VAR_6;
    VAR_8->wv = VAR_10;
    *VAR_4 = (MSIVIEW*) VAR_8;

    return VAR_1;
}
