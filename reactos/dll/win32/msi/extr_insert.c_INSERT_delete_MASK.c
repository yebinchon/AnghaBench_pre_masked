
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct tagMSIVIEW {int dummy; } ;
typedef int UINT ;
struct TYPE_11__ {TYPE_2__* db; TYPE_3__* sv; } ;
struct TYPE_10__ {TYPE_1__* ops; } ;
struct TYPE_9__ {int hdr; } ;
struct TYPE_8__ {int (* delete ) (TYPE_3__*) ;} ;
typedef TYPE_3__ MSIVIEW ;
typedef TYPE_4__ MSIINSERTVIEW ;


 int VAR_0 ;
 int FUNC_0 (char*,TYPE_4__*) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_3__*) ;

__attribute__((used)) static UINT FUNC_4( struct tagMSIVIEW *VAR_1 )
{
    MSIINSERTVIEW *VAR_2 = (MSIINSERTVIEW*)VAR_1;
    MSIVIEW *VAR_3;

    FUNC_0("%p\n", VAR_2 );

    VAR_3 = VAR_2->sv;
    if( VAR_3 )
        VAR_3->ops->delete( VAR_3 );
    FUNC_2( &VAR_2->db->hdr );
    FUNC_1( VAR_2 );

    return VAR_0;
}
