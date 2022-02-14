
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
struct TYPE_5__ {int (* execute ) (TYPE_3__*,int *) ;} ;
typedef TYPE_2__ MSISELECTVIEW ;
typedef int MSIRECORD ;


 int VAR_0 ;
 int FUNC_0 (char*,TYPE_2__*,int *) ;
 int FUNC_1 (TYPE_3__*,int *) ;

__attribute__((used)) static UINT FUNC_2( struct tagMSIVIEW *VAR_1, MSIRECORD *VAR_2 )
{
    MSISELECTVIEW *VAR_3 = (MSISELECTVIEW*)VAR_1;

    FUNC_0("%p %p\n", VAR_3, VAR_2);

    if( !VAR_3->table )
         return VAR_0;

    return VAR_3->table->ops->execute( VAR_3->table, VAR_2 );
}
