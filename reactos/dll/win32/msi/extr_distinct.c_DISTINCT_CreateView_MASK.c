
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_16__ {int hdr; } ;
struct TYPE_13__ {int * ops; } ;
struct TYPE_15__ {scalar_t__ row_count; int * translation; TYPE_3__* table; TYPE_5__* db; TYPE_2__ view; } ;
struct TYPE_14__ {TYPE_1__* ops; } ;
struct TYPE_12__ {scalar_t__ (* get_dimensions ) (TYPE_3__*,int *,scalar_t__*) ;} ;
typedef TYPE_3__ MSIVIEW ;
typedef TYPE_4__ MSIDISTINCTVIEW ;
typedef TYPE_5__ MSIDATABASE ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (char*,TYPE_4__*) ;
 int VAR_2 ;
 TYPE_4__* FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (TYPE_3__*,int *,scalar_t__*) ;

UINT FUNC_5( MSIDATABASE *VAR_3, MSIVIEW **VAR_4, MSIVIEW *VAR_5 )
{
    MSIDISTINCTVIEW *VAR_6 = ((void*)0);
    UINT VAR_7 = 0, VAR_8;

    FUNC_1("%p\n", VAR_6 );

    VAR_8 = VAR_5->ops->get_dimensions( VAR_5, ((void*)0), &VAR_7 );
    if( VAR_8 != VAR_1 )
    {
        FUNC_0("can't get table dimensions\n");
        return VAR_8;
    }

    VAR_6 = FUNC_2( sizeof *VAR_6 );
    if( !VAR_6 )
        return VAR_0;


    VAR_6->view.ops = &VAR_2;
    FUNC_3( &VAR_3->hdr );
    VAR_6->db = VAR_3;
    VAR_6->table = VAR_5;
    VAR_6->translation = ((void*)0);
    VAR_6->row_count = 0;
    *VAR_4 = (MSIVIEW*) VAR_6;

    return VAR_1;
}
