
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct tagMSIVIEW {int dummy; } ;
typedef scalar_t__ UINT ;
struct TYPE_7__ {TYPE_1__* ops; } ;
struct TYPE_6__ {TYPE_3__* table; } ;
struct TYPE_5__ {scalar_t__ (* get_dimensions ) (TYPE_3__*,int *,scalar_t__*) ;} ;
typedef TYPE_2__ MSIDELETEVIEW ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,TYPE_2__*,scalar_t__*,scalar_t__*) ;
 scalar_t__ FUNC_1 (TYPE_3__*,int *,scalar_t__*) ;

__attribute__((used)) static UINT FUNC_2( struct tagMSIVIEW *VAR_1, UINT *VAR_2, UINT *VAR_3 )
{
    MSIDELETEVIEW *VAR_4 = (MSIDELETEVIEW*)VAR_1;

    FUNC_0("%p %p %p\n", VAR_4, VAR_2, VAR_3 );

    if( !VAR_4->table )
         return VAR_0;

    *VAR_2 = 0;

    return VAR_4->table->ops->get_dimensions( VAR_4->table, ((void*)0), VAR_3 );
}
