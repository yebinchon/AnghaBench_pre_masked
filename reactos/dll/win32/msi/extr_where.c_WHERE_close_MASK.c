
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct tagMSIVIEW {int dummy; } ;
typedef int UINT ;
struct TYPE_9__ {TYPE_1__* ops; } ;
struct TYPE_8__ {TYPE_4__* view; struct TYPE_8__* next; } ;
struct TYPE_7__ {TYPE_3__* tables; } ;
struct TYPE_6__ {int (* close ) (TYPE_4__*) ;} ;
typedef TYPE_2__ MSIWHEREVIEW ;
typedef TYPE_3__ JOINTABLE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,TYPE_2__*) ;
 int FUNC_1 (TYPE_4__*) ;

__attribute__((used)) static UINT FUNC_2( struct tagMSIVIEW *VAR_2 )
{
    MSIWHEREVIEW *VAR_3 = (MSIWHEREVIEW*)VAR_2;
    JOINTABLE *VAR_4 = VAR_3->tables;

    FUNC_0("%p\n", VAR_3 );

    if (!VAR_4)
        return VAR_0;

    do
        VAR_4->view->ops->close(VAR_4->view);
    while ((VAR_4 = VAR_4->next));

    return VAR_1;
}
