
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct tagMSIVIEW {int dummy; } ;
typedef size_t UINT ;
struct TYPE_6__ {TYPE_1__* ops; } ;
struct TYPE_5__ {size_t row_count; size_t* translation; TYPE_3__* table; } ;
struct TYPE_4__ {size_t (* find_matching_rows ) (TYPE_3__*,size_t,size_t,size_t*,int *) ;} ;
typedef int MSIITERHANDLE ;
typedef TYPE_2__ MSIDISTINCTVIEW ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (char*,struct tagMSIVIEW*,size_t,size_t,int ) ;
 size_t FUNC_1 (TYPE_3__*,size_t,size_t,size_t*,int *) ;

__attribute__((used)) static UINT FUNC_2( struct tagMSIVIEW *VAR_2, UINT VAR_3,
    UINT VAR_4, UINT *VAR_5, MSIITERHANDLE *VAR_6 )
{
    MSIDISTINCTVIEW *VAR_7 = (MSIDISTINCTVIEW*)VAR_2;
    UINT VAR_8;

    FUNC_0("%p, %d, %u, %p\n", VAR_2, VAR_3, VAR_4, *VAR_6);

    if( !VAR_7->table )
         return VAR_0;

    VAR_8 = VAR_7->table->ops->find_matching_rows( VAR_7->table, VAR_3, VAR_4, VAR_5, VAR_6 );

    if( *VAR_5 > VAR_7->row_count )
        return VAR_1;

    *VAR_5 = VAR_7->translation[ *VAR_5 ];

    return VAR_8;
}
