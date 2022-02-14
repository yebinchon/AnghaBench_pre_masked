
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
struct TYPE_6__ {TYPE_3__* table; } ;
struct TYPE_5__ {int (* close ) (TYPE_3__*) ;} ;
typedef TYPE_2__ MSIDELETEVIEW ;


 int VAR_0 ;
 int FUNC_0 (char*,TYPE_2__*) ;
 int FUNC_1 (TYPE_3__*) ;

__attribute__((used)) static UINT FUNC_2( struct tagMSIVIEW *VAR_1 )
{
    MSIDELETEVIEW *VAR_2 = (MSIDELETEVIEW*)VAR_1;

    FUNC_0("%p\n", VAR_2 );

    if( !VAR_2->table )
         return VAR_0;

    return VAR_2->table->ops->close( VAR_2->table );
}
