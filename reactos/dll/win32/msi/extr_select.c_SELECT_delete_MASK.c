
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct tagMSIVIEW {int dummy; } ;
typedef int UINT ;
struct TYPE_8__ {TYPE_1__* ops; } ;
struct TYPE_7__ {TYPE_3__* table; } ;
struct TYPE_6__ {int (* delete ) (TYPE_3__*) ;} ;
typedef TYPE_2__ MSISELECTVIEW ;


 int VAR_0 ;
 int FUNC_0 (char*,TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_3__*) ;

__attribute__((used)) static UINT FUNC_3( struct tagMSIVIEW *VAR_1 )
{
    MSISELECTVIEW *VAR_2 = (MSISELECTVIEW*)VAR_1;

    FUNC_0("%p\n", VAR_2 );

    if( VAR_2->table )
        VAR_2->table->ops->delete( VAR_2->table );
    VAR_2->table = ((void*)0);

    FUNC_1( VAR_2 );

    return VAR_0;
}
