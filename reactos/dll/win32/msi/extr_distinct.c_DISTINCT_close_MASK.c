
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct tagMSIVIEW {int dummy; } ;
typedef int UINT ;
struct TYPE_7__ {TYPE_1__* ops; } ;
struct TYPE_6__ {TYPE_3__* table; scalar_t__ row_count; int * translation; } ;
struct TYPE_5__ {int (* close ) (TYPE_3__*) ;} ;
typedef TYPE_2__ MSIDISTINCTVIEW ;


 int VAR_0 ;
 int FUNC_0 (char*,TYPE_2__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_3__*) ;

__attribute__((used)) static UINT FUNC_3( struct tagMSIVIEW *VAR_1 )
{
    MSIDISTINCTVIEW *VAR_2 = (MSIDISTINCTVIEW*)VAR_1;

    FUNC_0("%p\n", VAR_2 );

    if( !VAR_2->table )
         return VAR_0;

    FUNC_1( VAR_2->translation );
    VAR_2->translation = ((void*)0);
    VAR_2->row_count = 0;

    return VAR_2->table->ops->close( VAR_2->table );
}
