
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct tagMSIVIEW {int dummy; } ;
typedef size_t UINT ;
struct TYPE_7__ {TYPE_1__* ops; } ;
struct TYPE_6__ {size_t row_count; size_t* translation; TYPE_3__* table; } ;
struct TYPE_5__ {size_t (* fetch_int ) (TYPE_3__*,size_t,size_t,size_t*) ;} ;
typedef TYPE_2__ MSIDISTINCTVIEW ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (char*,TYPE_2__*,size_t,size_t,size_t*) ;
 size_t FUNC_1 (TYPE_3__*,size_t,size_t,size_t*) ;

__attribute__((used)) static UINT FUNC_2( struct tagMSIVIEW *VAR_2, UINT VAR_3, UINT VAR_4, UINT *VAR_5 )
{
    MSIDISTINCTVIEW *VAR_6 = (MSIDISTINCTVIEW*)VAR_2;

    FUNC_0("%p %d %d %p\n", VAR_6, VAR_3, VAR_4, VAR_5 );

    if( !VAR_6->table )
        return VAR_0;

    if( VAR_3 >= VAR_6->row_count )
        return VAR_1;

    VAR_3 = VAR_6->translation[ VAR_3 ];

    return VAR_6->table->ops->fetch_int( VAR_6->table, VAR_3, VAR_4, VAR_5 );
}
