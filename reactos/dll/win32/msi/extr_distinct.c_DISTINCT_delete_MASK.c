
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct tagMSIVIEW {int dummy; } ;
typedef int UINT ;
struct TYPE_10__ {TYPE_1__* ops; } ;
struct TYPE_9__ {TYPE_2__* db; struct TYPE_9__* translation; TYPE_4__* table; } ;
struct TYPE_8__ {int hdr; } ;
struct TYPE_7__ {int (* delete ) (TYPE_4__*) ;} ;
typedef TYPE_3__ MSIDISTINCTVIEW ;


 int VAR_0 ;
 int FUNC_0 (char*,TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_4__*) ;

__attribute__((used)) static UINT FUNC_4( struct tagMSIVIEW *VAR_1 )
{
    MSIDISTINCTVIEW *VAR_2 = (MSIDISTINCTVIEW*)VAR_1;

    FUNC_0("%p\n", VAR_2 );

    if( VAR_2->table )
        VAR_2->table->ops->delete( VAR_2->table );

    FUNC_1( VAR_2->translation );
    FUNC_2( &VAR_2->db->hdr );
    FUNC_1( VAR_2 );

    return VAR_0;
}
