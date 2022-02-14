
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct tagMSIVIEW {int dummy; } ;
typedef int UINT ;
struct TYPE_6__ {TYPE_1__* ops; } ;
struct TYPE_5__ {int num_cols; int* cols; TYPE_3__* table; } ;
struct TYPE_4__ {int (* find_matching_rows ) (TYPE_3__*,int,int,int*,int *) ;} ;
typedef TYPE_2__ MSISELECTVIEW ;
typedef int MSIITERHANDLE ;


 int VAR_0 ;
 int FUNC_0 (char*,struct tagMSIVIEW*,int,int,int ) ;
 int FUNC_1 (TYPE_3__*,int,int,int*,int *) ;

__attribute__((used)) static UINT FUNC_2( struct tagMSIVIEW *VAR_1, UINT VAR_2,
    UINT VAR_3, UINT *VAR_4, MSIITERHANDLE *VAR_5 )
{
    MSISELECTVIEW *VAR_6 = (MSISELECTVIEW*)VAR_1;

    FUNC_0("%p, %d, %u, %p\n", VAR_1, VAR_2, VAR_3, *VAR_5);

    if( !VAR_6->table )
         return VAR_0;

    if( (VAR_2==0) || (VAR_2>VAR_6->num_cols) )
         return VAR_0;

    VAR_2 = VAR_6->cols[ VAR_2 - 1 ];

    return VAR_6->table->ops->find_matching_rows( VAR_6->table, VAR_2, VAR_3, VAR_4, VAR_5 );
}
