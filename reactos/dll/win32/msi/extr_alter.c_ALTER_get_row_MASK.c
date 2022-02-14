
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
struct TYPE_5__ {int (* get_row ) (TYPE_3__*,int ,int **) ;} ;
typedef int MSIRECORD ;
typedef TYPE_2__ MSIALTERVIEW ;


 int FUNC_0 (char*,TYPE_2__*,int ,int **) ;
 int FUNC_1 (TYPE_3__*,int ,int **) ;

__attribute__((used)) static UINT FUNC_2( struct tagMSIVIEW *VAR_0, UINT VAR_1, MSIRECORD **VAR_2 )
{
    MSIALTERVIEW *VAR_3 = (MSIALTERVIEW*)VAR_0;

    FUNC_0("%p %d %p\n", VAR_3, VAR_1, VAR_2 );

    return VAR_3->table->ops->get_row(VAR_3->table, VAR_1, VAR_2);
}
